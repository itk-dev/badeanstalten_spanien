<?php
/**
 * @file
 * employee_pages.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function employee_pages_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function employee_pages_node_info() {
  $items = array(
    'employee_page' => array(
      'name' => t('Medarbejdersider'),
      'base' => 'node_content',
      'description' => t('Opret side der kun er tilgængelig for medarbejdere.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
