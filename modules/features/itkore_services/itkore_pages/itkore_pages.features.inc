<?php
/**
 * @file
 * itkore_pages.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function itkore_pages_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function itkore_pages_node_info() {
  $items = array(
    'static_page' => array(
      'name' => t('Page'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
