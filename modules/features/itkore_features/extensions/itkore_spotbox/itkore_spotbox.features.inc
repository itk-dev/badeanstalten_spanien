<?php
/**
 * @file
 * itkore_spotbox.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function itkore_spotbox_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function itkore_spotbox_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function itkore_spotbox_image_default_styles() {
  $styles = array();

  // Exported image style: spotbox_image
  $styles['spotbox_image'] = array(
    'name' => 'spotbox_image',
    'effects' => array(
      4 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '376',
          'height' => '200',
        ),
        'weight' => '1',
      ),
    ),
  );

  return $styles;
}
