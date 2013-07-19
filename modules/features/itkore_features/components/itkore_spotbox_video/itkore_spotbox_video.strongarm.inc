<?php
/**
 * @file
 * itkore_spotbox_video.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function itkore_spotbox_video_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'enable_revisions_page_spotbox_video';
  $strongarm->value = 1;
  $export['enable_revisions_page_spotbox_video'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_spotbox_video';
  $strongarm->value = '0';
  $export['language_content_type_spotbox_video'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_spotbox_video';
  $strongarm->value = array();
  $export['menu_options_spotbox_video'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_spotbox_video';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_spotbox_video'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodespotbox_spotbox_video';
  $strongarm->value = array(
    'enable' => '1',
    'always' => '0',
    'views' => array(
      'name' => 'spotbox_video',
      'display_id' => 'block',
      'user' => '0',
    ),
  );
  $export['nodespotbox_spotbox_video'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_spotbox_video';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_spotbox_video'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_spotbox_video';
  $strongarm->value = '0';
  $export['node_preview_spotbox_video'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_spotbox_video';
  $strongarm->value = 0;
  $export['node_submitted_spotbox_video'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_enable_spotbox_video';
  $strongarm->value = 0;
  $export['scheduler_publish_enable_spotbox_video'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_revision_spotbox_video';
  $strongarm->value = 0;
  $export['scheduler_publish_revision_spotbox_video'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_touch_spotbox_video';
  $strongarm->value = 0;
  $export['scheduler_publish_touch_spotbox_video'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_unpublish_enable_spotbox_video';
  $strongarm->value = 0;
  $export['scheduler_unpublish_enable_spotbox_video'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_unpublish_required_spotbox_video';
  $strongarm->value = 0;
  $export['scheduler_unpublish_required_spotbox_video'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_unpublish_revision_spotbox_video';
  $strongarm->value = 0;
  $export['scheduler_unpublish_revision_spotbox_video'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'show_diff_inline_spotbox_video';
  $strongarm->value = 0;
  $export['show_diff_inline_spotbox_video'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'show_preview_changes_spotbox_video';
  $strongarm->value = 1;
  $export['show_preview_changes_spotbox_video'] = $strongarm;

  return $export;
}
