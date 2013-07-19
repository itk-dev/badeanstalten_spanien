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
  return array("api" => "3.0");
}

/**
 * Implements hook_field_default_field_bases().
 */
function itkore_spotbox_video_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_spotbox_text'
  $field_bases['field_spotbox_text'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_spotbox_text',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_spotbox_video'
  $field_bases['field_spotbox_video'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_spotbox_video',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_long',
  );

  return $field_bases;
}

/**
 * Implements hook_field_default_field_instances().
 */
function itkore_spotbox_video_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-spotbox_video-field_spotbox_text'
  $field_instances['node-spotbox_video-field_spotbox_text'] = array(
    'bundle' => 'spotbox_video',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Text displayed below the video.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_spotbox_text',
    'label' => 'Text',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-spotbox_video-field_spotbox_video'
  $field_instances['node-spotbox_video-field_spotbox_video'] = array(
    'bundle' => 'spotbox_video',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Paste the embed code from the video service (eg. Vimeo, Youtube) into this field. If the site is using the FitVids javascript plugin, the video is automatically scaled to fit inside its container. The width of the video can\'t exceed the width specified in the embed code, so make sure it is wide enough. For example if you want the video to have a maximum width of 1200 pixels make sure you select 1200 pixels in your embed code.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_spotbox_video',
    'label' => 'Video',
    'required' => 1,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 3,
      ),
      'type' => 'text_textarea',
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Paste the embed code from the video service (eg. Vimeo, Youtube) into this field. If the site is using the FitVids javascript plugin, the video is automatically scaled to fit inside its container. The width of the video can\'t exceed the width specified in the embed code, so make sure it is wide enough. For example if you want the video to have a maximum width of 1200 pixels make sure you select 1200 pixels in your embed code.');
  t('Text');
  t('Text displayed below the video.');
  t('Video');

  return $field_instances;
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
