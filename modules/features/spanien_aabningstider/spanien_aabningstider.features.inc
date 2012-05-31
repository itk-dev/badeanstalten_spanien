<?php
/**
 * @file
 * spanien_aabningstider.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function spanien_aabningstider_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function spanien_aabningstider_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function spanien_aabningstider_node_info() {
  $items = array(
    'office_hours' => array(
      'name' => t('Åbningstider'),
      'base' => 'node_content',
      'description' => t('Administrate nodes with opening hours, there should only be one node on the system.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
