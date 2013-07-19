<?php
/**
 * @file
 * itkore_spotbox_video.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function itkore_spotbox_video_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function itkore_spotbox_video_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function itkore_spotbox_video_node_info() {
  $items = array(
    'spotbox_video' => array(
      'name' => t('Spotbox, video'),
      'base' => 'node_content',
      'description' => t('Create a spotbox displaying af video.'),
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
  );
  return $items;
}
