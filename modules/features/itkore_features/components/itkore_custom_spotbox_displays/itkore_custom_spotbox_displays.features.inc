<?php
/**
 * @file
 * itkore_custom_spotbox_displays.features.inc
 */

/**
 * Implements hook_views_api().
 */
function itkore_custom_spotbox_displays_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function itkore_custom_spotbox_displays_image_default_styles() {
  $styles = array();

  // Exported image style: spotbox_external_link_image
  $styles['spotbox_external_link_image'] = array(
    'name' => 'spotbox_external_link_image',
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
