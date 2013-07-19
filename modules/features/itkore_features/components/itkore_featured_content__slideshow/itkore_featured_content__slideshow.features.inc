<?php
/**
 * @file
 * itkore_featured_content__slideshow.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function itkore_featured_content__slideshow_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "panels_mini" && $api == "panels_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function itkore_featured_content__slideshow_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function itkore_featured_content__slideshow_image_default_styles() {
  $styles = array();

  // Exported image style: panorama_image
  $styles['panorama_image'] = array(
    'name' => 'panorama_image',
    'effects' => array(
      5 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '1080',
          'height' => '386',
        ),
        'weight' => '1',
      ),
    ),
  );

  return $styles;
}
