<?php
/**
 * @file
 * spanien_featured_content_slideshow.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function spanien_featured_content_slideshow_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "panels_mini" && $api == "panels_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function spanien_featured_content_slideshow_views_api() {
  return array("version" => "3.0");
}
