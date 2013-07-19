<?php
/**
 * @file
 * itkore_spotbox.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function itkore_spotbox_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'spotbox';
  $view->description = 'Spotbox created from other content types';
  $view->tag = 'itkore';
  $view->base_table = 'node';
  $view->human_name = 'Spotbox';
  $view->core = 7;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'block block-secondary';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 1;
  $handler->display->display_options['row_options']['default_field_elements'] = 0;
  /* Field: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['ui_name'] = 'Title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_class'] = 'block-title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Image */
  $handler->display->display_options['fields']['field_title_image']['id'] = 'field_title_image';
  $handler->display->display_options['fields']['field_title_image']['table'] = 'field_data_field_title_image';
  $handler->display->display_options['fields']['field_title_image']['field'] = 'field_title_image';
  $handler->display->display_options['fields']['field_title_image']['ui_name'] = 'Image';
  $handler->display->display_options['fields']['field_title_image']['label'] = '';
  $handler->display->display_options['fields']['field_title_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_title_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_title_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_title_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_title_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_title_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_title_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_title_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_title_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_title_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_title_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_title_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_title_image']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_title_image']['element_class'] = 'imagelink fullwidth';
  $handler->display->display_options['fields']['field_title_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_title_image']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_title_image']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_title_image']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_title_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_title_image']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_title_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_title_image']['settings'] = array(
    'image_style' => 'spotbox_image',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_title_image']['field_api_classes'] = 0;
  /* Field: Content: Manchet */
  $handler->display->display_options['fields']['field_manchet']['id'] = 'field_manchet';
  $handler->display->display_options['fields']['field_manchet']['table'] = 'field_data_field_manchet';
  $handler->display->display_options['fields']['field_manchet']['field'] = 'field_manchet';
  $handler->display->display_options['fields']['field_manchet']['label'] = '';
  $handler->display->display_options['fields']['field_manchet']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_manchet']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_manchet']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_manchet']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_manchet']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_manchet']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_manchet']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_manchet']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['field_manchet']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_manchet']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_manchet']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_manchet']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_manchet']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_manchet']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_manchet']['element_class'] = 'text-content';
  $handler->display->display_options['fields']['field_manchet']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_manchet']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_manchet']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_manchet']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_manchet']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_manchet']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_manchet']['field_api_classes'] = 0;
  /* Field: Content: Content */
  $handler->display->display_options['fields']['field_content']['id'] = 'field_content';
  $handler->display->display_options['fields']['field_content']['table'] = 'field_data_field_content';
  $handler->display->display_options['fields']['field_content']['field'] = 'field_content';
  $handler->display->display_options['fields']['field_content']['label'] = '';
  $handler->display->display_options['fields']['field_content']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_content']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_content']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_content']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_content']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_content']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_content']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_content']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_content']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_content']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_content']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_content']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_content']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_content']['element_class'] = 'text-content';
  $handler->display->display_options['fields']['field_content']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_content']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_content']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_content']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_content']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_content']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_content']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['field_content']['settings'] = array(
    'trim_length' => '600',
  );
  $handler->display->display_options['fields']['field_content']['field_api_classes'] = 0;
  /* Field: Link */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['ui_name'] = 'Link';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title_1']['element_type'] = 'div';
  $handler->display->display_options['fields']['title_1']['element_class'] = 'link';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['title_1']['hide_empty'] = 1;
  $handler->display->display_options['fields']['title_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title_1']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = 1;
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
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'news' => 'news',
    'static_page' => 'static_page',
  );

  /* Display: Spotbox: Default */
  $handler = $view->new_display('block', 'Spotbox: Default', 'spotbox');
  $handler->display->display_options['block_description'] = 'Spotbox: Standard';

  /* Display: Spotbox: Alternative Style */
  $handler = $view->new_display('block', 'Spotbox: Alternative Style', 'spotbox_variant');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'block block-secondary style-alternative';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 0;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['block_description'] = 'Spotbox: Alternative Style';

  /* Display: Spotbox: Image */
  $handler = $view->new_display('block', 'Spotbox: Image', 'spotbox_image');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'block block-secondary block-image';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 0;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Image */
  $handler->display->display_options['fields']['field_title_image']['id'] = 'field_title_image';
  $handler->display->display_options['fields']['field_title_image']['table'] = 'field_data_field_title_image';
  $handler->display->display_options['fields']['field_title_image']['field'] = 'field_title_image';
  $handler->display->display_options['fields']['field_title_image']['ui_name'] = 'Image';
  $handler->display->display_options['fields']['field_title_image']['label'] = '';
  $handler->display->display_options['fields']['field_title_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_title_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_title_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_title_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_title_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_title_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_title_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_title_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_title_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_title_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_title_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_title_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_title_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_title_image']['element_type'] = '0';
  $handler->display->display_options['fields']['field_title_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_title_image']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_title_image']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_title_image']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_title_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_title_image']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_title_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_title_image']['settings'] = array(
    'image_style' => 'spotbox_image',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_title_image']['field_api_classes'] = 0;
  /* Field: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['ui_name'] = 'Title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[field_title_image]
<div class="coverlayer"><h2 class="block-title">[title]</h2></div>';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'imagewrapper fullwidth imagelink';
  $handler->display->display_options['fields']['title']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Manchet */
  $handler->display->display_options['fields']['field_manchet']['id'] = 'field_manchet';
  $handler->display->display_options['fields']['field_manchet']['table'] = 'field_data_field_manchet';
  $handler->display->display_options['fields']['field_manchet']['field'] = 'field_manchet';
  $handler->display->display_options['fields']['field_manchet']['label'] = '';
  $handler->display->display_options['fields']['field_manchet']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_manchet']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_manchet']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_manchet']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_manchet']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_manchet']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_manchet']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_manchet']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['field_manchet']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_manchet']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_manchet']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_manchet']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_manchet']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_manchet']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_manchet']['element_class'] = 'text-content';
  $handler->display->display_options['fields']['field_manchet']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_manchet']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_manchet']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_manchet']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_manchet']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_manchet']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_manchet']['field_api_classes'] = 0;
  /* Field: Content: Content */
  $handler->display->display_options['fields']['field_content']['id'] = 'field_content';
  $handler->display->display_options['fields']['field_content']['table'] = 'field_data_field_content';
  $handler->display->display_options['fields']['field_content']['field'] = 'field_content';
  $handler->display->display_options['fields']['field_content']['label'] = '';
  $handler->display->display_options['fields']['field_content']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_content']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_content']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_content']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_content']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_content']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_content']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_content']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_content']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_content']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_content']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_content']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_content']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_content']['element_class'] = 'text-content';
  $handler->display->display_options['fields']['field_content']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_content']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_content']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_content']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_content']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_content']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_content']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['field_content']['settings'] = array(
    'trim_length' => '600',
  );
  $handler->display->display_options['fields']['field_content']['field_api_classes'] = 0;
  /* Field: Link */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['ui_name'] = 'Link';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title_1']['element_type'] = 'div';
  $handler->display->display_options['fields']['title_1']['element_class'] = 'link';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['title_1']['hide_empty'] = 1;
  $handler->display->display_options['fields']['title_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title_1']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = 1;
  $handler->display->display_options['block_description'] = 'Spotbox: Image';

  /* Display: Spotbox: Alternative 2 */
  $handler = $view->new_display('block', 'Spotbox: Alternative 2', 'spotbox_variant2');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'block block-secondary style-alt2';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 0;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['block_description'] = 'Spotbox: Alternative 2';
  $translatables['spotbox'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('All'),
    t('Spotbox: Default'),
    t('Spotbox: Standard'),
    t('Spotbox: Alternative Style'),
    t('Spotbox: Image'),
    t('[field_title_image]
<div class="coverlayer"><h2 class="block-title">[title]</h2></div>'),
    t('Spotbox: Alternative 2'),
  );
  $export['spotbox'] = $view;

  return $export;
}
