<?php
/**
 * @file
 * employee_pages.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function employee_pages_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_employee_page';
  $strongarm->value = '0';
  $export['language_content_type_employee_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_employee_page';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_employee_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_employee_page';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_employee_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_employee_page';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_employee_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_employee_page';
  $strongarm->value = '0';
  $export['node_preview_employee_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_employee_page';
  $strongarm->value = 0;
  $export['node_submitted_employee_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_employee_page_pattern';
  $strongarm->value = 'medarbejder/[node:title]';
  $export['pathauto_node_employee_page_pattern'] = $strongarm;

  return $export;
}
