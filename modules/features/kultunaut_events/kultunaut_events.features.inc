<?php
/**
 * @file
 * kultunaut_events.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function kultunaut_events_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function kultunaut_events_node_info() {
  $items = array(
    'kultunaut_event' => array(
      'name' => t('Kultunaut event'),
      'base' => 'node_content',
      'description' => t('Event create at Kultunaut.dk, which have been imported via feeds.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
