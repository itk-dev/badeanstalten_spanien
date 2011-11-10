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
    foreach ($xml->liste as $team) {
      $item = array();
      $item['id'] = (int)$item->attributes()->$id;
      $item['title'] = (string)$team->title;
      $item['location'] = (string)$team->sted;
      $item['start'] = _parser_common_syndication_parse_date((string)$team->start);
      $item['end'] = _parser_common_syndication_parse_date((string)$team->slut);
      $item['description'] = (string)$team->beskrivelse;
      $item['instr'] = (string)$team->instr;
      $item['status'] = (string)$team->status;
      $item['tag'] = (string)$team->title;

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
      'instr' => array(
        'name' => t('Instructor'),
        'description' => t('Instructor.'),
      ),
      'status' => array(
        'name' => t('Status'),
        'description' => t('Status.'),
      ),
      'tag' => array(
        'name' => t('Tag'),
        'description' => t('Tag.'),
      ),
    ) + parent::getMappingSources();
  }
}