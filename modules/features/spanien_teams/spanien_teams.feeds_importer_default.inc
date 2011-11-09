<?php
/**
 * @file
 * spanien_teams.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function spanien_teams_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass;
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'globusdata';
  $feeds_importer->config = array(
    'name' => 'Globusdata',
    'description' => 'Import team events from globusdata',
    'fetcher' => array(
      'plugin_key' => 'FeedsHTTPFetcher',
      'config' => array(
        'auto_detect_feeds' => FALSE,
        'use_pubsubhubbub' => FALSE,
        'designated_hub' => '',
      ),
    ),
    'parser' => array(
      'plugin_key' => 'GlobusdataParser',
      'config' => array(),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'content_type' => 'holdbooking',
        'expire' => '-1',
        'author' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'title',
            'target' => 'title',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'start',
            'target' => 'field_hold_date:start',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'end',
            'target' => 'field_hold_date:end',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '1',
        'input_format' => 'editor_html',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '1800',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['globusdata'] = $feeds_importer;

  return $export;
}
