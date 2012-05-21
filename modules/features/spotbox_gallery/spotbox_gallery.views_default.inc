<?php
/**
 * @file
 * spotbox_gallery.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function spotbox_gallery_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'spotbox_gallery';
  $view->description = 'Spotboxes displaying a gallery';
  $view->tag = 'spotbox';
  $view->base_table = 'node';
  $view->human_name = 'Spotbox: Gallery';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Spotbox: Gallery';
  $handler->display->display_options['css_class'] = 'block block-nodespotbox block-gallery';
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_class'] = 'block-title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Field: Images */
  $handler->display->display_options['fields']['field_spotbox_gallery_images']['id'] = 'field_spotbox_gallery_images';
  $handler->display->display_options['fields']['field_spotbox_gallery_images']['table'] = 'field_data_field_spotbox_gallery_images';
  $handler->display->display_options['fields']['field_spotbox_gallery_images']['field'] = 'field_spotbox_gallery_images';
  $handler->display->display_options['fields']['field_spotbox_gallery_images']['ui_name'] = 'Images';
  $handler->display->display_options['fields']['field_spotbox_gallery_images']['label'] = '';
  $handler->display->display_options['fields']['field_spotbox_gallery_images']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_spotbox_gallery_images']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_spotbox_gallery_images']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_spotbox_gallery_images']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_spotbox_gallery_images']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_spotbox_gallery_images']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_spotbox_gallery_images']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_spotbox_gallery_images']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_spotbox_gallery_images']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_spotbox_gallery_images']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_spotbox_gallery_images']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_spotbox_gallery_images']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_spotbox_gallery_images']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_spotbox_gallery_images']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_spotbox_gallery_images']['element_class'] = 'images';
  $handler->display->display_options['fields']['field_spotbox_gallery_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_spotbox_gallery_images']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_spotbox_gallery_images']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_spotbox_gallery_images']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_spotbox_gallery_images']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_spotbox_gallery_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_spotbox_gallery_images']['settings'] = array(
    'image_style' => 'spotbox_gallery_thumbnail',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_spotbox_gallery_images']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_spotbox_gallery_images']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_spotbox_gallery_images']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_spotbox_gallery_images']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_spotbox_gallery_images']['separator'] = '';
  $handler->display->display_options['fields']['field_spotbox_gallery_images']['field_api_classes'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['nid']['not'] = 0;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'spotbox_gallery' => 'spotbox_gallery',
  );

  /* Display: Spotbox: Gallery */
  $handler = $view->new_display('block', 'Spotbox: Gallery', 'block');
  $handler->display->display_options['display_description'] = 'Spotbox displaying a gallery';
  $handler->display->display_options['block_description'] = 'Spotbox: Gallery';
  $translatables['spotbox_gallery'] = array(
    t('Master'),
    t('Spotbox: Gallery'),
    t('mere'),
    t('Apply'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('All'),
    t('Spotbox displaying a gallery'),
    t('more'),
  );
  $export['spotbox_gallery'] = $view;

  return $export;
}
