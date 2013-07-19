<?php
/**
 * @file
 * itkore_spotbox_video.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function itkore_spotbox_video_filter_default_formats() {
  $formats = array();

  // Exported format: Video.
  $formats['video'] = array(
    'format' => 'video',
    'name' => 'Video',
    'cache' => 1,
    'status' => 1,
    'weight' => -6,
    'filters' => array(),
  );

  return $formats;
}
