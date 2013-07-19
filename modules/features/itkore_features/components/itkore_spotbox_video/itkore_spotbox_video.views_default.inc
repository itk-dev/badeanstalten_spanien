<?php
/**
 * @file
 * itkore_spotbox_video.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function itkore_spotbox_video_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'spotbox_video';
  $view->description = 'Spotboxes displaying a video';
  $view->tag = 'spotbox';
  $view->base_table = 'node';
  $view->human_name = 'Spotbox: Video';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Spotbox: Video';
  $handler->display->display_options['css_class'] = 'block block-nodespotbox block-image';
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
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elementer pr. side';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 0;
  /* Felt: Indhold: Titel */
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
  /* Felt: Indhold: Video */
  $handler->display->display_options['fields']['field_spotbox_video']['id'] = 'field_spotbox_video';
  $handler->display->display_options['fields']['field_spotbox_video']['table'] = 'field_data_field_spotbox_video';
  $handler->display->display_options['fields']['field_spotbox_video']['field'] = 'field_spotbox_video';
  $handler->display->display_options['fields']['field_spotbox_video']['label'] = '';
  $handler->display->display_options['fields']['field_spotbox_video']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_spotbox_video']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_spotbox_video']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_spotbox_video']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_spotbox_video']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_spotbox_video']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_spotbox_video']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_spotbox_video']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_spotbox_video']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_spotbox_video']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_spotbox_video']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_spotbox_video']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_spotbox_video']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_spotbox_video']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_spotbox_video']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_spotbox_video']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_spotbox_video']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_spotbox_video']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_spotbox_video']['field_api_classes'] = 0;
  /* Felt: Indhold: Text */
  $handler->display->display_options['fields']['field_spotbox_text']['id'] = 'field_spotbox_text';
  $handler->display->display_options['fields']['field_spotbox_text']['table'] = 'field_data_field_spotbox_text';
  $handler->display->display_options['fields']['field_spotbox_text']['field'] = 'field_spotbox_text';
  $handler->display->display_options['fields']['field_spotbox_text']['label'] = '';
  $handler->display->display_options['fields']['field_spotbox_text']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_spotbox_text']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_spotbox_text']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_spotbox_text']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_spotbox_text']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_spotbox_text']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_spotbox_text']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_spotbox_text']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_spotbox_text']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_spotbox_text']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_spotbox_text']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_spotbox_text']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_spotbox_text']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_spotbox_text']['element_class'] = 'text-content';
  $handler->display->display_options['fields']['field_spotbox_text']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_spotbox_text']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_spotbox_text']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_spotbox_text']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_spotbox_text']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_spotbox_text']['field_api_classes'] = 0;
  /* Sorteringskriterie: Indhold: Oprettelsesdato */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Kontekstuelt filter: Indhold: Nid */
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
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'spotbox_video' => 'spotbox_video',
  );

  /* Display: Spotbox: Video */
  $handler = $view->new_display('block', 'Spotbox: Video', 'block');
  $handler->display->display_options['display_description'] = 'Spotbox displaying a video';
  $handler->display->display_options['block_description'] = 'Spotbox: Video';
  $translatables['spotbox_video'] = array(
    t('Master'),
    t('Spotbox: Video'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Elementer pr. side'),
    t('- Alle -'),
    t('Forskydning'),
    t('Alle'),
    t('Spotbox displaying a video'),
  );
  $export['spotbox_video'] = $view;

  return $export;
}
