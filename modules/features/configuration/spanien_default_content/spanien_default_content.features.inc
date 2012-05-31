<?php
/**
 * @file
 * spanien_default_content.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function spanien_default_content_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}
