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
    $result->title = 'Globusdata calendar';
    $result->description = 'Globusdata calendar';

    // Run through news items.
    foreach ($xml as $event) {
      if (isset($event->arrid)) {
        $item = array();
        $item['id'] = (int)$event->arrid;
        $item['title'] = (string)$event->overskrift;
        $item['location'] = (string)$event->sted;
        $item['start'] = $this->parseDate((string)$event->startdato, (string)$event->tid);
        $item['end'] = $this->parseDate((string)$event->startdato, (string)$event->tid, FALSE);
        $item['description'] = (string)$event->beskrivelse;
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
    return trim($tag[count($tag) - 1]);
  }

  /**
   * Convert time from Kultunaut into a unix timestamp.
   *
   * @param string $date
   * @param sting $time
   * @param bool $start
   * @return sting
   */
  private function parseDate($date, $time, $start = TRUE) {
    // Try to parse time string, which may have many formats.
    preg_match('/kl\.\s+(\d{1,2}((:|\.)\d{1,2})?)(-|\s)?(\d{1,2}((:|\.)\d{1,2})?)/', $time, $matches);
    if ($start) {
      $time = $matches[1];
    }
    else {
      $time = $matches[5];
    }
    return strtotime($date . 'T' . $time . ':00');
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
        'description' => t('The team start date and time'),
      ),
      'end' => array(
        'name' => t('End date'),
        'description' => t('The team end date and time'),
      ),
      'description' => array(
        'name' => t('Description'),
        'description' => t('Description.'),
      ),
      'tag' => array(
        'name' => t('Tag'),
        'description' => t('Tag.'),
      ),
    ) + parent::getMappingSources();
  }
}