<?php
/**
 * @file
 * spanien_aabningstider.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function spanien_aabningstider_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_office_hours';
  $strongarm->value = 0;
  $export['comment_anonymous_office_hours'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_office_hours';
  $strongarm->value = 1;
  $export['comment_default_mode_office_hours'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_office_hours';
  $strongarm->value = '50';
  $export['comment_default_per_page_office_hours'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_office_hours';
  $strongarm->value = 1;
  $export['comment_form_location_office_hours'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_office_hours';
  $strongarm->value = '1';
  $export['comment_office_hours'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_office_hours';
  $strongarm->value = '1';
  $export['comment_preview_office_hours'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_office_hours';
  $strongarm->value = 1;
  $export['comment_subject_field_office_hours'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_office_hours';
  $strongarm->value = '0';
  $export['language_content_type_office_hours'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_office_hours';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_office_hours'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_office_hours';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_office_hours'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodespotbox_office_hours';
  $strongarm->value = array(
    'enable' => '1',
    'always' => '1',
    'views' => array(
      'name' => 'spotbox_office_hours',
      'display_id' => 'block',
      'user' => '0',
    ),
  );
  $export['nodespotbox_office_hours'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_office_hours';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_office_hours'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_office_hours';
  $strongarm->value = '0';
  $export['node_preview_office_hours'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_office_hours';
  $strongarm->value = 0;
  $export['node_submitted_office_hours'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_office_hours_pattern';
  $strongarm->value = '[node:menu-link:parent:url:relative]/[node:menu-link:title]';
  $export['pathauto_node_office_hours_pattern'] = $strongarm;

  return $export;
}
