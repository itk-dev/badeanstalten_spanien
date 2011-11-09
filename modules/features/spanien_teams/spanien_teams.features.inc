<?php
/**
 * @file
 * spanien_teams.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function spanien_teams_ctools_plugin_api() {
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
 * Implements hook_node_info().
 */
function spanien_teams_node_info() {
  $items = array(
    'holdbooking' => array(
      'name' => t('Hold'),
      'base' => 'node_content',
      'description' => t('Hold brugt i kanlendar system til at reserver et tidsinterval.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
