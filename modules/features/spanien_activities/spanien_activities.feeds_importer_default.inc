<?php
/**
 * @file
 * spanien_activities.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function spanien_activities_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'globusdata';
  $feeds_importer->config = array(
    'name' => 'Globusdata',
    'description' => 'Import activities from globusdata',
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
          3 => array(
            'source' => 'location',
            'target' => 'field_hold_location',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'description',
            'target' => 'field_hold_description',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'instr',
            'target' => 'field_hold_instr',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'status',
            'target' => 'field_hold_status',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'tag',
            'target' => 'field_hold_emne',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'id',
            'target' => 'guid',
            'unique' => 1,
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
