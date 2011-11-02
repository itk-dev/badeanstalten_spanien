<?php
/**
 * @file
 * aabningstider.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function aabningstider_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function aabningstider_node_info() {
  $items = array(
    'office_hours' => array(
      'name' => t('Åbningstider'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
