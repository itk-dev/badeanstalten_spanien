<?php
/**
 * @file
 * spotbox_gallery.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function spotbox_gallery_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_spotbox_gallery';
  $strongarm->value = '0';
  $export['language_content_type_spotbox_gallery'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_spotbox_gallery';
  $strongarm->value = array();
  $export['menu_options_spotbox_gallery'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_spotbox_gallery';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_spotbox_gallery'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodespotbox_spotbox_gallery';
  $strongarm->value = array(
    'enable' => '1',
    'always' => '1',
    'views' => array(
      'name' => 'spotbox_gallery',
      'display_id' => 'block',
      'user' => '0',
    ),
  );
  $export['nodespotbox_spotbox_gallery'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_spotbox_gallery';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_spotbox_gallery'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_spotbox_gallery';
  $strongarm->value = '1';
  $export['node_preview_spotbox_gallery'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_spotbox_gallery';
  $strongarm->value = 0;
  $export['node_submitted_spotbox_gallery'] = $strongarm;

  return $export;
}
