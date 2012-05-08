<?php
/**
 * @file
 * kultunaut_events.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function kultunaut_events_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_kultunaut_event';
  $strongarm->value = '0';
  $export['language_content_type_kultunaut_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_kultunaut_event';
  $strongarm->value = array();
  $export['menu_options_kultunaut_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_kultunaut_event';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_kultunaut_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_kultunaut_event';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_kultunaut_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_kultunaut_event';
  $strongarm->value = '0';
  $export['node_preview_kultunaut_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_kultunaut_event';
  $strongarm->value = 0;
  $export['node_submitted_kultunaut_event'] = $strongarm;

  return $export;
}
