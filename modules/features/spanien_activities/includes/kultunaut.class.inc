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