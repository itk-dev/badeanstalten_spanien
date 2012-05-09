<?php
/**
 * @file
 * spanien_aabningstider.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function spanien_aabningstider_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'spotbox_office_hours';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Spotbox: office hours';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Spotbox: office hours';
  $handler->display->display_options['css_class'] = 'block block-nodespotbox block-image office-hours';
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
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 0;
  /* Opførsel ved ingen resultater: Global: Tekstområde */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'Empty tekst';
  $handler->display->display_options['empty']['area']['empty'] = FALSE;
  $handler->display->display_options['empty']['area']['content'] = 'Ingen åbningstider fundet';
  $handler->display->display_options['empty']['area']['format'] = 'editor_html';
  $handler->display->display_options['empty']['area']['tokenize'] = 0;
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
  /* Felt: Indhold: Åbningstider */
  $handler->display->display_options['fields']['field_office_hours']['id'] = 'field_office_hours';
  $handler->display->display_options['fields']['field_office_hours']['table'] = 'field_data_field_office_hours';
  $handler->display->display_options['fields']['field_office_hours']['field'] = 'field_office_hours';
  $handler->display->display_options['fields']['field_office_hours']['label'] = '';
  $handler->display->display_options['fields']['field_office_hours']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_office_hours']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_office_hours']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_office_hours']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_office_hours']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_office_hours']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_office_hours']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_office_hours']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_office_hours']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_office_hours']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_office_hours']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_office_hours']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_office_hours']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_office_hours']['element_class'] = 'text-content';
  $handler->display->display_options['fields']['field_office_hours']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_office_hours']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_office_hours']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_office_hours']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_office_hours']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_office_hours']['click_sort_column'] = 'day';
  $handler->display->display_options['fields']['field_office_hours']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_office_hours']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_office_hours']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_office_hours']['multi_type'] = 'ul';
  $handler->display->display_options['fields']['field_office_hours']['field_api_classes'] = 0;
  /* Sorteringskriterie: Indhold: Oprettelsesdato */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Kontekstuelt filter: Indhold: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['nid']['not'] = 0;
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'office_hours' => 'office_hours',
  );

  /* Display: Last office hours */
  $handler = $view->new_display('block', 'Last office hours', 'block');
  $translatables['spotbox_office_hours'] = array(
    t('Master'),
    t('Spotbox: office hours'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Empty tekst'),
    t('Ingen åbningstider fundet'),
    t('Alle'),
    t('Last office hours'),
  );
  $export['spotbox_office_hours'] = $view;

  return $export;
}
