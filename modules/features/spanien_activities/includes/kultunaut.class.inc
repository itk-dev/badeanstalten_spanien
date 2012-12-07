<?php

/**
 * @file
 * Feed parser for data feeds from globus data about team events. This feed
 * parser can be used by the feeds module.
 */

class KultunautParser extends FeedsParser {

  public function parse(FeedsSource $source, FeedsFetcherResult $fetcher_result) {

    // Load library helper functions.
    feeds_include_library('common_syndication_parser.inc', 'common_syndication_parser');

    // Parser data.
    $items = array();
    $xml = new SimpleXMLElement($fetcher_result->getRaw());

    // Build result object.
    $result = new FeedsParserResult();
    $result->title = 'Kultunaut calendar';
    $result->description = 'Kultunaut calendar.';

    // Run through news items.
    foreach ($xml->arrlist->arr as $event) {
      if (isset($event->arrid)) {
        $time = $this->parseTime((string)$event->tid);

        $item = array();
        $item['id'] = (int)$event->arrid;
        $item['title'] = (string)$event->overskrift;
        $item['location'] = (string)$event->sted;
        $item['start'] = strtotime((string)$event->startdato . 'T' . $time['start']);
        $item['end'] = strtotime((string)$event->slutdato . 'T' . $time['end']);
        $item['image'] = (string)$event->billede;
        $item['description'] = (string)$event->beskrivelse;
        $item['longdescription'] = (string)$event->langbeskrivelse;
        $item['tag'] = $this->parseTag((string)$event->kategori);

        // Add feed item.
        $result->items[] = $item;
      }
    }

    return $result;
  }

  /**
   * Helper method to parse tags in the form '\w: \w' into a single tag.
   *
   * @param sting $tag
   * @return string
   */
  private function parseTag($tag) {
    $tag = explode(':', $tag);
    return trim(array_pop($tag));
  }

  /**
   * Convert time from Kultunaut (random string) into a unix timestamp.
   *
   * @param string $date
   * @param sting $time
   * @param bool $start
   * @return sting
   */
  private function parseTime($time) {
    // Try to parse time string, which may have many formats.
    preg_match('/kl\. (\d{1,2}(?:[:\.]\d{1,2})?)[-\s]*(\d{1,2}(?:[:\.]\d{1,2})?)?\s*$/', $time, $matches);

    return array(
      'start' => $matches[1] . ':00',
      'end' => isset($matches[2]) ? $matches[2] . ':00' : '00:00:00',
    );
  }

  /**
   * Helper function to download image from remote server.
   *
   * @param string $url
   *  Remote URL to download image.
   * @param string $id
   *  Id or name to store the image under.
   */
  private function downloadImage($url, $id) {
    // Download and save the image.
    $photo = file_get_contents($url);
    $file = file_save_data($photo, 'public://team-images-download' . $id . '.jpg', FILE_EXISTS_REPLACE);

    if (is_object($file) && file_exists($file->uri)) {
      // Make sure the file is not delete on clean up.
      $file->status |= FILE_STATUS_PERMANENT;
      $file = file_save($file);
    }
  }

  public function getMappingSources() {
    return array(
      'id' => array(
        'name' => t('Id'),
        'description' => t('Id for the team.'),
      ),
      'title' => array(
        'name' => t('Title'),
        'description' => t('Title.'),
      ),
      'location' => array(
        'name' => t('Location'),
        'description' => t('Location.'),
      ),
      'start' => array(
        'name' => t('Start date'),
        'description' => t('The team start date and time.'),
      ),
      'end' => array(
        'name' => t('End date'),
        'description' => t('The team end date and time.'),
      ),
      'image' => array(
        'name' => t('Image'),
        'description' => t('List image.'),
      ),
      'description' => array(
        'name' => t('Description'),
        'description' => t('Description.'),
      ),
      'longdescription' => array(
        'name' => t('Long description'),
        'description' => t('Full content.'),
      ),
      'tag' => array(
        'name' => t('Tag'),
        'description' => t('Tag.'),
      ),
    ) + parent::getMappingSources();
  }
}