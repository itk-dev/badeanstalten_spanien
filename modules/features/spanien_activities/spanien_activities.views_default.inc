<?php
/**
 * @file
 * spanien_activities.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function spanien_activities_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'activities';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Activities';
  $view->core = 7;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Activities';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = 'field_hold_date';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 0;
  /* Field: Content: Dato */
  $handler->display->display_options['fields']['field_hold_date']['id'] = 'field_hold_date';
  $handler->display->display_options['fields']['field_hold_date']['table'] = 'field_data_field_hold_date';
  $handler->display->display_options['fields']['field_hold_date']['field'] = 'field_hold_date';
  $handler->display->display_options['fields']['field_hold_date']['label'] = '';
  $handler->display->display_options['fields']['field_hold_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_hold_date']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_hold_date']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_hold_date']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_hold_date']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_hold_date']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_hold_date']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_hold_date']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_hold_date']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_hold_date']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_hold_date']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_hold_date']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_hold_date']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_hold_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hold_date']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_hold_date']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_hold_date']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_hold_date']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_hold_date']['settings'] = array(
    'format_type' => 'activities_medium_',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_hold_date']['field_api_classes'] = 0;
  /* Field: Content: Sted */
  $handler->display->display_options['fields']['field_hold_location']['id'] = 'field_hold_location';
  $handler->display->display_options['fields']['field_hold_location']['table'] = 'field_data_field_hold_location';
  $handler->display->display_options['fields']['field_hold_location']['field'] = 'field_hold_location';
  $handler->display->display_options['fields']['field_hold_location']['label'] = '';
  $handler->display->display_options['fields']['field_hold_location']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_hold_location']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_hold_location']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_hold_location']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_hold_location']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_hold_location']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_hold_location']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_hold_location']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_hold_location']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_hold_location']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_hold_location']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_hold_location']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_hold_location']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_hold_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hold_location']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_hold_location']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_hold_location']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_hold_location']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_hold_location']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_hold_location']['field_api_classes'] = 0;
  /* Field: Content: Title + location */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['ui_name'] = 'Content: Title + location';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[title] <span>- [field_hold_location]</span>';
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
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Field: Content: Beskrivelse */
  $handler->display->display_options['fields']['field_hold_description']['id'] = 'field_hold_description';
  $handler->display->display_options['fields']['field_hold_description']['table'] = 'field_data_field_hold_description';
  $handler->display->display_options['fields']['field_hold_description']['field'] = 'field_hold_description';
  $handler->display->display_options['fields']['field_hold_description']['label'] = '';
  $handler->display->display_options['fields']['field_hold_description']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_hold_description']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_hold_description']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_hold_description']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_hold_description']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_hold_description']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_hold_description']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_hold_description']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_hold_description']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_hold_description']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_hold_description']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_hold_description']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_hold_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hold_description']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_hold_description']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_hold_description']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_hold_description']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_hold_description']['field_api_classes'] = 0;
  /* Field: Content: Emne */
  $handler->display->display_options['fields']['field_hold_emne']['id'] = 'field_hold_emne';
  $handler->display->display_options['fields']['field_hold_emne']['table'] = 'field_data_field_hold_emne';
  $handler->display->display_options['fields']['field_hold_emne']['field'] = 'field_hold_emne';
  $handler->display->display_options['fields']['field_hold_emne']['label'] = '';
  $handler->display->display_options['fields']['field_hold_emne']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_hold_emne']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_hold_emne']['alter']['path'] = 'aktiviteter/emne/[tid]';
  $handler->display->display_options['fields']['field_hold_emne']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_hold_emne']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_hold_emne']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_hold_emne']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_hold_emne']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_hold_emne']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_hold_emne']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_hold_emne']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_hold_emne']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_hold_emne']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_hold_emne']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hold_emne']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_hold_emne']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_hold_emne']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_hold_emne']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_hold_emne']['field_api_classes'] = 0;
  /* Sort criterion: Content: Dato -  start date (field_hold_date) */
  $handler->display->display_options['sorts']['field_hold_date_value']['id'] = 'field_hold_date_value';
  $handler->display->display_options['sorts']['field_hold_date_value']['table'] = 'field_data_field_hold_date';
  $handler->display->display_options['sorts']['field_hold_date_value']['field'] = 'field_hold_date_value';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'holdbooking' => 'holdbooking',
  );

  /* Display: Today */
  $handler = $view->new_display('page', 'Today', 'page');
  $handler->display->display_options['display_description'] = 'Show activities that happens today only';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Dato */
  $handler->display->display_options['fields']['field_hold_date']['id'] = 'field_hold_date';
  $handler->display->display_options['fields']['field_hold_date']['table'] = 'field_data_field_hold_date';
  $handler->display->display_options['fields']['field_hold_date']['field'] = 'field_hold_date';
  $handler->display->display_options['fields']['field_hold_date']['label'] = '';
  $handler->display->display_options['fields']['field_hold_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_hold_date']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_hold_date']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_hold_date']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_hold_date']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_hold_date']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_hold_date']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_hold_date']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_hold_date']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_hold_date']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_hold_date']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_hold_date']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_hold_date']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_hold_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hold_date']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_hold_date']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_hold_date']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_hold_date']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_hold_date']['settings'] = array(
    'format_type' => 'activities_time',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_hold_date']['field_api_classes'] = 0;
  /* Field: Content: Sted */
  $handler->display->display_options['fields']['field_hold_location']['id'] = 'field_hold_location';
  $handler->display->display_options['fields']['field_hold_location']['table'] = 'field_data_field_hold_location';
  $handler->display->display_options['fields']['field_hold_location']['field'] = 'field_hold_location';
  $handler->display->display_options['fields']['field_hold_location']['label'] = '';
  $handler->display->display_options['fields']['field_hold_location']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_hold_location']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_hold_location']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_hold_location']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_hold_location']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_hold_location']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_hold_location']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_hold_location']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_hold_location']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_hold_location']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_hold_location']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_hold_location']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_hold_location']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_hold_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hold_location']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_hold_location']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_hold_location']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_hold_location']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_hold_location']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_hold_location']['field_api_classes'] = 0;
  /* Field: Content: Title + location */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['ui_name'] = 'Content: Title + location';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[title] <span>- [field_hold_location]</span>';
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
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Field: Content: Beskrivelse */
  $handler->display->display_options['fields']['field_hold_description']['id'] = 'field_hold_description';
  $handler->display->display_options['fields']['field_hold_description']['table'] = 'field_data_field_hold_description';
  $handler->display->display_options['fields']['field_hold_description']['field'] = 'field_hold_description';
  $handler->display->display_options['fields']['field_hold_description']['label'] = '';
  $handler->display->display_options['fields']['field_hold_description']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_hold_description']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_hold_description']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_hold_description']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_hold_description']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_hold_description']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_hold_description']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_hold_description']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_hold_description']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_hold_description']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_hold_description']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_hold_description']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_hold_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hold_description']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_hold_description']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_hold_description']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_hold_description']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_hold_description']['field_api_classes'] = 0;
  /* Field: Content: Emne */
  $handler->display->display_options['fields']['field_hold_emne']['id'] = 'field_hold_emne';
  $handler->display->display_options['fields']['field_hold_emne']['table'] = 'field_data_field_hold_emne';
  $handler->display->display_options['fields']['field_hold_emne']['field'] = 'field_hold_emne';
  $handler->display->display_options['fields']['field_hold_emne']['label'] = '';
  $handler->display->display_options['fields']['field_hold_emne']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_hold_emne']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_hold_emne']['alter']['path'] = 'aktiviteter/emne/[tid]';
  $handler->display->display_options['fields']['field_hold_emne']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_hold_emne']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_hold_emne']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_hold_emne']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_hold_emne']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_hold_emne']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_hold_emne']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_hold_emne']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_hold_emne']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_hold_emne']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_hold_emne']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hold_emne']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_hold_emne']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_hold_emne']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_hold_emne']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_hold_emne']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'holdbooking' => 'holdbooking',
  );
  /* Filter criterion: Content: Dato -  start date (field_hold_date) */
  $handler->display->display_options['filters']['field_hold_date_value']['id'] = 'field_hold_date_value';
  $handler->display->display_options['filters']['field_hold_date_value']['table'] = 'field_data_field_hold_date';
  $handler->display->display_options['filters']['field_hold_date_value']['field'] = 'field_hold_date_value';
  $handler->display->display_options['filters']['field_hold_date_value']['default_date'] = 'today';
  $handler->display->display_options['filters']['field_hold_date_value']['default_to_date'] = 'next monday';
  $handler->display->display_options['path'] = 'aktiviteter';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Aktiviter';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';

  /* Display: Week */
  $handler = $view->new_display('page', 'Week', 'page_1');
  $handler->display->display_options['display_description'] = 'Show activities that happens this week only';
  $handler->display->display_options['path'] = 'aktiviteter/uge';

  /* Display: Month */
  $handler = $view->new_display('page', 'Month', 'page_2');
  $handler->display->display_options['display_description'] = 'Show activities that happens this month only';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'holdbooking' => 'holdbooking',
  );
  /* Filter criterion: Content: Dato -  start date (field_hold_date) */
  $handler->display->display_options['filters']['field_hold_date_value']['id'] = 'field_hold_date_value';
  $handler->display->display_options['filters']['field_hold_date_value']['table'] = 'field_data_field_hold_date';
  $handler->display->display_options['filters']['field_hold_date_value']['field'] = 'field_hold_date_value';
  $handler->display->display_options['filters']['field_hold_date_value']['granularity'] = 'month';
  $handler->display->display_options['filters']['field_hold_date_value']['form_type'] = 'date_text';
  $handler->display->display_options['filters']['field_hold_date_value']['default_date'] = 'now';
  $handler->display->display_options['filters']['field_hold_date_value']['default_to_date'] = 'last day of month';
  $handler->display->display_options['path'] = 'aktiviteter/maaned';

  /* Display: All */
  $handler = $view->new_display('page', 'All', 'page_3');
  $handler->display->display_options['path'] = 'aktiviteter/all';
  $translatables['activities'] = array(
    t('Master'),
    t('Activities'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('[title] <span>- [field_hold_location]</span>'),
    t('aktiviteter/emne/[tid]'),
    t('Today'),
    t('Show activities that happens today only'),
    t('Week'),
    t('Show activities that happens this week only'),
    t('Month'),
    t('Show activities that happens this month only'),
    t('All'),
  );
  $export['activities'] = $view;

  return $export;
}
