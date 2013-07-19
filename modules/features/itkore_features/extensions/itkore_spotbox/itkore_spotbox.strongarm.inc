<?php
/**
 * @file
 * itkore_spotbox.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function itkore_spotbox_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodespotbox_news';
  $strongarm->value = array(
    'enable' => '1',
    'always' => '0',
    'views' => array(
      'name' => 'spotbox',
      'display_id' => 'spotbox',
      'user' => '1',
    ),
  );
  $export['nodespotbox_news'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodespotbox_static_page';
  $strongarm->value = array(
    'enable' => '1',
    'always' => '0',
    'views' => array(
      'name' => 'spotbox',
      'display_id' => 'spotbox',
      'user' => '1',
    ),
  );
  $export['nodespotbox_static_page'] = $strongarm;

  return $export;
}
