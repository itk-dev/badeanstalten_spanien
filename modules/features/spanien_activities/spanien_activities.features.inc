<?php
/**
 * @file
 * spanien_activities.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function spanien_activities_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  list($module, $api) = func_get_args();
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function spanien_activities_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function spanien_activities_node_info() {
  $items = array(
    'holdbooking' => array(
      'name' => t('Hold'),
      'base' => 'node_content',
      'description' => t('Hold brugt i kalendar system til at reserver et tidsinterval.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
