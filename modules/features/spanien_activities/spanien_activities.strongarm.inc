<?php
/**
 * @file
 * spanien_activities.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function spanien_activities_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_activities_medium_';
  $strongarm->value = 'l \\d. d. F';
  $export['date_format_activities_medium_'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_activities_time';
  $strongarm->value = 'H:i';
  $export['date_format_activities_time'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_holdbooking';
  $strongarm->value = '0';
  $export['language_content_type_holdbooking'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_default_active_menus';
  $strongarm->value = array(
    0 => 'navigation',
    1 => 'management',
    2 => 'user-menu',
    3 => 'main-menu',
    6 => 'menu-footer-links-first',
    7 => 'devel',
    8 => 'menu-secondary-links',
  );
  $export['menu_default_active_menus'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_holdbooking';
  $strongarm->value = array();
  $export['menu_options_holdbooking'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_holdbooking';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_holdbooking'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_holdbooking';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_holdbooking'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_holdbooking';
  $strongarm->value = '0';
  $export['node_preview_holdbooking'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_holdbooking';
  $strongarm->value = 0;
  $export['node_submitted_holdbooking'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_holdbooking_pattern';
  $strongarm->value = 'aktiviteter/hold/[node:nid]';
  $export['pathauto_node_holdbooking_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_activities_pattern';
  $strongarm->value = 'aktiviter/[term:name]';
  $export['pathauto_taxonomy_term_activities_pattern'] = $strongarm;

  return $export;
}
