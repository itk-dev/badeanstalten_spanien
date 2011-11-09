<?php

/**
 * @file
 * Feed parser for data feeds from globus data about team events. This feed
 * parser can be used by the feeds module.
 */

class GlobusdataParser extends FeedsParser {

  public function parse(FeedsSource $source, FeedsFetcherResult $fetcher_result) {

    // Load library helper functions.
    feeds_include_library('common_syndication_parser.inc', 'common_syndication_parser');

    // Parser data
    $items = array();
    $xml = new SimpleXMLElement($fetcher_result->getRaw());

    // Build result object.
    $result = new FeedsParserResult();
    $result->title = 'Globusdata calendar';
    $result->description = 'Globusdata calendar';

    // Run through news items
    foreach ($xml->entry as $entry) {
      $item = array();
      $item['title'] = (string)$entry->title;
      $item['start'] = _parser_common_syndication_parse_date((string)$entry->start);
      $item['slut'] = _parser_common_syndication_parse_date((string)$entry->slut);

      // Add feed item
      $result->items[] = $item;
    }
    
    return $result;
  }

  public function getMappingSources() {
    return array(
      'id' => array(
        'name' => t('GUID'),
        'description' => t('GUID for the team.'),
      ),
      'title' => array(
        'name' => t('Title'),
        'description' => t('Title.'),
      ),
      'start' => array(
        'name' => t('Start date'),
        'description' => t('The team start date and time'),
      ),
      'end' => array(
        'name' => t('Slut date'),
        'description' => t('The team end date and time'),
      ),
    ) + parent::getMappingSources();
  }
}