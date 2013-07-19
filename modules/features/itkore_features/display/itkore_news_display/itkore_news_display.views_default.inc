<?php
/**
 * @file
 * itkore_news_display.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function itkore_news_display_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'news_lists';
  $view->description = '';
  $view->tag = 'news';
  $view->base_table = 'node';
  $view->human_name = 'News lists';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Nyheder';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'infinite_scroll';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elementer pr. side';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'næste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'sidste »';
  $handler->display->display_options['pager']['options']['infinite_scroll'] = array(
    'method' => '1',
    'content_selector' => '.blog-list',
    'link_text' => 'Show more',
  );
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['class'] = 'news-list featured-news';
  $handler->display->display_options['style_options']['wrapper_class'] = 'list-wrapper';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Forbindelse: Indhold: Taksonomitermer på node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'source' => 'source',
    'subject' => 0,
    'tags' => 0,
  );
  /* Felt: Indhold: Oprettelsesdato */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_type'] = 'span';
  $handler->display->display_options['fields']['created']['element_class'] = 'date';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['created']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['created']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'day_month_year';
  /* Felt: Ord i ordforråd: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid']['hide_alter_empty'] = FALSE;
  /* Felt: Date + Source */
  $handler->display->display_options['fields']['field_source']['id'] = 'field_source';
  $handler->display->display_options['fields']['field_source']['table'] = 'field_data_field_source';
  $handler->display->display_options['fields']['field_source']['field'] = 'field_source';
  $handler->display->display_options['fields']['field_source']['ui_name'] = 'Date + Source';
  $handler->display->display_options['fields']['field_source']['label'] = '';
  $handler->display->display_options['fields']['field_source']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_source']['alter']['text'] = '<p class="meta text-secondary"><span class="date">[created]</span> | <a href="/nyheder/kilde/[tid]">[field_source]</a></p>';
  $handler->display->display_options['fields']['field_source']['alter']['path'] = 'nyheder/kilde/[tid]';
  $handler->display->display_options['fields']['field_source']['element_type'] = '0';
  $handler->display->display_options['fields']['field_source']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_source']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_source']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_source']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_source']['type'] = 'taxonomy_term_reference_plain';
  /* Felt: Indhold: Emne */
  $handler->display->display_options['fields']['field_subject']['id'] = 'field_subject';
  $handler->display->display_options['fields']['field_subject']['table'] = 'field_data_field_subject';
  $handler->display->display_options['fields']['field_subject']['field'] = 'field_subject';
  $handler->display->display_options['fields']['field_subject']['label'] = '';
  $handler->display->display_options['fields']['field_subject']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_subject']['element_type'] = '0';
  $handler->display->display_options['fields']['field_subject']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_subject']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_subject']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_subject']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_subject']['type'] = 'taxonomy_term_reference_plain';
  /* Felt: Keyword + Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['ui_name'] = 'Keyword + Title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<h2 class="block-title news-title"><span class="keyword">[field_subject]: </span>[title]</h2>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Felt: Indhold: Title image */
  $handler->display->display_options['fields']['field_news_title_image']['id'] = 'field_news_title_image';
  $handler->display->display_options['fields']['field_news_title_image']['table'] = 'field_data_field_news_title_image';
  $handler->display->display_options['fields']['field_news_title_image']['field'] = 'field_news_title_image';
  $handler->display->display_options['fields']['field_news_title_image']['label'] = '';
  $handler->display->display_options['fields']['field_news_title_image']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_news_title_image']['element_class'] = 'imagelink alignedimage';
  $handler->display->display_options['fields']['field_news_title_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_news_title_image']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_news_title_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_news_title_image']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_news_title_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_news_title_image']['settings'] = array(
    'image_style' => 'news_thumbnail',
    'image_link' => 'content',
  );
  /* Felt: Indhold: Manchet */
  $handler->display->display_options['fields']['field_manchet']['id'] = 'field_manchet';
  $handler->display->display_options['fields']['field_manchet']['table'] = 'field_data_field_manchet';
  $handler->display->display_options['fields']['field_manchet']['field'] = 'field_manchet';
  $handler->display->display_options['fields']['field_manchet']['label'] = '';
  $handler->display->display_options['fields']['field_manchet']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_manchet']['alter']['preserve_tags'] = '<a> <strong> <em> <u>';
  $handler->display->display_options['fields']['field_manchet']['element_type'] = 'p';
  $handler->display->display_options['fields']['field_manchet']['element_class'] = 'text-content';
  $handler->display->display_options['fields']['field_manchet']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_manchet']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_manchet']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_manchet']['hide_alter_empty'] = FALSE;
  /* Felt: Indhold: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Læs mere';
  /* Sorteringskriterie: Indhold: Oprettelsesdato */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Kontekstuelt filter: Indhold: Source (field_source) */
  $handler->display->display_options['arguments']['field_source_tid']['id'] = 'field_source_tid';
  $handler->display->display_options['arguments']['field_source_tid']['table'] = 'field_data_field_source';
  $handler->display->display_options['arguments']['field_source_tid']['field'] = 'field_source_tid';
  $handler->display->display_options['arguments']['field_source_tid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_source_tid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['field_source_tid']['breadcrumb_enable'] = TRUE;
  $handler->display->display_options['arguments']['field_source_tid']['breadcrumb'] = '%1';
  $handler->display->display_options['arguments']['field_source_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_source_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_source_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_source_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_source_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_source_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_source_tid']['validate_options']['vocabularies'] = array(
    'source' => 'source',
    'subject' => 0,
    'tags' => 0,
  );
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
    'news' => 'news',
  );
  /* Filterkriterie: Indhold: Forfremmet til forside */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';

  /* Display: News overview */
  $handler = $view->new_display('panel_pane', 'News overview', 'news_overview');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = 'news-item';
  $handler->display->display_options['style_options']['class'] = 'news-list';
  $handler->display->display_options['style_options']['wrapper_class'] = 'list-wrapper';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Oprettelsesdato */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_type'] = 'span';
  $handler->display->display_options['fields']['created']['element_class'] = 'date';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['created']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['created']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'day_month_year';
  /* Felt: Ord i ordforråd: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid']['hide_alter_empty'] = FALSE;
  /* Felt: Indhold: Emne */
  $handler->display->display_options['fields']['field_subject']['id'] = 'field_subject';
  $handler->display->display_options['fields']['field_subject']['table'] = 'field_data_field_subject';
  $handler->display->display_options['fields']['field_subject']['field'] = 'field_subject';
  $handler->display->display_options['fields']['field_subject']['label'] = '';
  $handler->display->display_options['fields']['field_subject']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_subject']['alter']['text'] = '<p class="meta text-secondary"><a href="/nyheder/emne/[field_subject-tid]">[field_subject]</a> | <span class="date">[created]</span></p>';
  $handler->display->display_options['fields']['field_subject']['element_type'] = '0';
  $handler->display->display_options['fields']['field_subject']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_subject']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_subject']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_subject']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_subject']['type'] = 'taxonomy_term_reference_plain';
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_type'] = 'h4';
  $handler->display->display_options['fields']['title']['element_class'] = 'block-title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Felt: Indhold: Title image */
  $handler->display->display_options['fields']['field_news_title_image']['id'] = 'field_news_title_image';
  $handler->display->display_options['fields']['field_news_title_image']['table'] = 'field_data_field_news_title_image';
  $handler->display->display_options['fields']['field_news_title_image']['field'] = 'field_news_title_image';
  $handler->display->display_options['fields']['field_news_title_image']['label'] = '';
  $handler->display->display_options['fields']['field_news_title_image']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_news_title_image']['element_class'] = 'imagelink alignedimage';
  $handler->display->display_options['fields']['field_news_title_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_news_title_image']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_news_title_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_news_title_image']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_news_title_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_news_title_image']['settings'] = array(
    'image_style' => 'news_thumbnail',
    'image_link' => 'content',
  );
  /* Felt: Indhold: Manchet */
  $handler->display->display_options['fields']['field_manchet']['id'] = 'field_manchet';
  $handler->display->display_options['fields']['field_manchet']['table'] = 'field_data_field_manchet';
  $handler->display->display_options['fields']['field_manchet']['field'] = 'field_manchet';
  $handler->display->display_options['fields']['field_manchet']['label'] = '';
  $handler->display->display_options['fields']['field_manchet']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_manchet']['alter']['preserve_tags'] = '<a> <strong> <em> <u>';
  $handler->display->display_options['fields']['field_manchet']['element_type'] = 'p';
  $handler->display->display_options['fields']['field_manchet']['element_class'] = 'text-content';
  $handler->display->display_options['fields']['field_manchet']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_manchet']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_manchet']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_manchet']['hide_alter_empty'] = FALSE;
  /* Felt: Indhold: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['element_type'] = 'span';
  $handler->display->display_options['fields']['view_node']['element_class'] = 'link';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['view_node']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Læs mere';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['pane_title'] = 'News overview';
  $handler->display->display_options['pane_description'] = 'News overview';
  $handler->display->display_options['pane_category']['name'] = 'Nyheder';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'field_source_tid' => array(
      'type' => 'context',
      'context' => 'entity:taxonomy_term.tid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Source (field_source)',
    ),
  );

  /* Display: News overview (subject) */
  $handler = $view->new_display('panel_pane', 'News overview (subject)', 'news_taxonomy_overview');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = 'news-item';
  $handler->display->display_options['style_options']['class'] = 'news-list';
  $handler->display->display_options['style_options']['wrapper_class'] = 'list-wrapper';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Oprettelsesdato */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_type'] = 'span';
  $handler->display->display_options['fields']['created']['element_class'] = 'date';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['created']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['created']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'day_month_year';
  /* Felt: Ord i ordforråd: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid']['hide_alter_empty'] = FALSE;
  /* Felt: Indhold: Emne */
  $handler->display->display_options['fields']['field_subject']['id'] = 'field_subject';
  $handler->display->display_options['fields']['field_subject']['table'] = 'field_data_field_subject';
  $handler->display->display_options['fields']['field_subject']['field'] = 'field_subject';
  $handler->display->display_options['fields']['field_subject']['label'] = '';
  $handler->display->display_options['fields']['field_subject']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_subject']['alter']['text'] = '<p class="meta text-secondary"><a href="/nyheder/emne/[field_subject-tid]">[field_subject]</a> | <span class="date">[created]</span></p>';
  $handler->display->display_options['fields']['field_subject']['element_type'] = '0';
  $handler->display->display_options['fields']['field_subject']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_subject']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_subject']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_subject']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_subject']['type'] = 'taxonomy_term_reference_plain';
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_class'] = 'block-title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Felt: Indhold: Title image */
  $handler->display->display_options['fields']['field_news_title_image']['id'] = 'field_news_title_image';
  $handler->display->display_options['fields']['field_news_title_image']['table'] = 'field_data_field_news_title_image';
  $handler->display->display_options['fields']['field_news_title_image']['field'] = 'field_news_title_image';
  $handler->display->display_options['fields']['field_news_title_image']['label'] = '';
  $handler->display->display_options['fields']['field_news_title_image']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_news_title_image']['element_class'] = 'imagelink alignedimage';
  $handler->display->display_options['fields']['field_news_title_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_news_title_image']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_news_title_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_news_title_image']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_news_title_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_news_title_image']['settings'] = array(
    'image_style' => 'news_thumbnail',
    'image_link' => 'content',
  );
  /* Felt: Indhold: Manchet */
  $handler->display->display_options['fields']['field_manchet']['id'] = 'field_manchet';
  $handler->display->display_options['fields']['field_manchet']['table'] = 'field_data_field_manchet';
  $handler->display->display_options['fields']['field_manchet']['field'] = 'field_manchet';
  $handler->display->display_options['fields']['field_manchet']['label'] = '';
  $handler->display->display_options['fields']['field_manchet']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_manchet']['alter']['preserve_tags'] = '<a> <strong> <em> <u>';
  $handler->display->display_options['fields']['field_manchet']['element_type'] = 'p';
  $handler->display->display_options['fields']['field_manchet']['element_class'] = 'text-content';
  $handler->display->display_options['fields']['field_manchet']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_manchet']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_manchet']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_manchet']['hide_alter_empty'] = FALSE;
  /* Felt: Indhold: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['element_type'] = 'span';
  $handler->display->display_options['fields']['view_node']['element_class'] = 'link';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['view_node']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Læs mere';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Kontekstuelt filter: Indhold: Emne (field_subject) */
  $handler->display->display_options['arguments']['field_subject_tid']['id'] = 'field_subject_tid';
  $handler->display->display_options['arguments']['field_subject_tid']['table'] = 'field_data_field_subject';
  $handler->display->display_options['arguments']['field_subject_tid']['field'] = 'field_subject_tid';
  $handler->display->display_options['arguments']['field_subject_tid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_subject_tid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['field_subject_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_subject_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_subject_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_subject_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'news' => 'news',
  );
  $handler->display->display_options['pane_title'] = 'News overview (subject parameter)';
  $handler->display->display_options['pane_description'] = 'News overview, which takes subject as parameter';
  $handler->display->display_options['pane_category']['name'] = 'Nyheder';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'field_subject_tid' => array(
      'type' => 'panel',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Subject (field_subject)',
    ),
  );

  /* Display: News overview (source) */
  $handler = $view->new_display('panel_pane', 'News overview (source)', 'news_overview_source');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = 'news-item';
  $handler->display->display_options['style_options']['class'] = 'news-list';
  $handler->display->display_options['style_options']['wrapper_class'] = 'list-wrapper';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Oprettelsesdato */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_type'] = 'span';
  $handler->display->display_options['fields']['created']['element_class'] = 'date';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['created']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['created']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'day_month_year';
  /* Felt: Ord i ordforråd: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid']['hide_alter_empty'] = FALSE;
  /* Felt: Date + Source */
  $handler->display->display_options['fields']['field_source']['id'] = 'field_source';
  $handler->display->display_options['fields']['field_source']['table'] = 'field_data_field_source';
  $handler->display->display_options['fields']['field_source']['field'] = 'field_source';
  $handler->display->display_options['fields']['field_source']['ui_name'] = 'Date + Source';
  $handler->display->display_options['fields']['field_source']['label'] = '';
  $handler->display->display_options['fields']['field_source']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_source']['alter']['text'] = '<p class="meta text-secondary"><a href="/nyheder/kilde/[tid]">[field_source]</a> | <span class="date">[created]</span></p>';
  $handler->display->display_options['fields']['field_source']['alter']['path'] = 'nyheder/kilde/[tid]';
  $handler->display->display_options['fields']['field_source']['element_type'] = '0';
  $handler->display->display_options['fields']['field_source']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_source']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_source']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_source']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_source']['type'] = 'taxonomy_term_reference_plain';
  /* Felt: Indhold: Emne */
  $handler->display->display_options['fields']['field_subject']['id'] = 'field_subject';
  $handler->display->display_options['fields']['field_subject']['table'] = 'field_data_field_subject';
  $handler->display->display_options['fields']['field_subject']['field'] = 'field_subject';
  $handler->display->display_options['fields']['field_subject']['label'] = '';
  $handler->display->display_options['fields']['field_subject']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_subject']['element_type'] = '0';
  $handler->display->display_options['fields']['field_subject']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_subject']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_subject']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_subject']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_subject']['type'] = 'taxonomy_term_reference_plain';
  /* Felt: Keyword + Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['ui_name'] = 'Keyword + Title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<h2 class="block-title news-title"><span class="keyword">[field_subject]: </span>[title]</h2>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Felt: Indhold: Title image */
  $handler->display->display_options['fields']['field_news_title_image']['id'] = 'field_news_title_image';
  $handler->display->display_options['fields']['field_news_title_image']['table'] = 'field_data_field_news_title_image';
  $handler->display->display_options['fields']['field_news_title_image']['field'] = 'field_news_title_image';
  $handler->display->display_options['fields']['field_news_title_image']['label'] = '';
  $handler->display->display_options['fields']['field_news_title_image']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_news_title_image']['element_class'] = 'imagelink alignedimage';
  $handler->display->display_options['fields']['field_news_title_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_news_title_image']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_news_title_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_news_title_image']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_news_title_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_news_title_image']['settings'] = array(
    'image_style' => 'news_thumbnail',
    'image_link' => 'content',
  );
  /* Felt: Indhold: Manchet */
  $handler->display->display_options['fields']['field_manchet']['id'] = 'field_manchet';
  $handler->display->display_options['fields']['field_manchet']['table'] = 'field_data_field_manchet';
  $handler->display->display_options['fields']['field_manchet']['field'] = 'field_manchet';
  $handler->display->display_options['fields']['field_manchet']['label'] = '';
  $handler->display->display_options['fields']['field_manchet']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_manchet']['alter']['preserve_tags'] = '<a> <strong> <em> <u>';
  $handler->display->display_options['fields']['field_manchet']['element_type'] = 'p';
  $handler->display->display_options['fields']['field_manchet']['element_class'] = 'text-content';
  $handler->display->display_options['fields']['field_manchet']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_manchet']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_manchet']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_manchet']['hide_alter_empty'] = FALSE;
  /* Felt: Indhold: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['element_type'] = 'span';
  $handler->display->display_options['fields']['view_node']['element_class'] = 'link';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['view_node']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Læs mere';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Kontekstuelt filter: Indhold: Source (field_source) */
  $handler->display->display_options['arguments']['field_source_tid']['id'] = 'field_source_tid';
  $handler->display->display_options['arguments']['field_source_tid']['table'] = 'field_data_field_source';
  $handler->display->display_options['arguments']['field_source_tid']['field'] = 'field_source_tid';
  $handler->display->display_options['arguments']['field_source_tid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['field_source_tid']['breadcrumb_enable'] = TRUE;
  $handler->display->display_options['arguments']['field_source_tid']['breadcrumb'] = '%1';
  $handler->display->display_options['arguments']['field_source_tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['field_source_tid']['default_argument_options']['vocabularies'] = array(
    'source' => 0,
    'subject' => 0,
    'tags' => 0,
  );
  $handler->display->display_options['arguments']['field_source_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_source_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_source_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_source_tid']['validate']['fail'] = 'ignore';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'news' => 'news',
  );
  $handler->display->display_options['pane_title'] = 'News overview (source parameter)';
  $handler->display->display_options['pane_description'] = 'News overview, which takes source as parameter';
  $handler->display->display_options['pane_category']['name'] = 'Nyheder';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'field_source_tid' => array(
      'type' => 'context',
      'context' => 'entity:taxonomy_term.tid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Source (field_source)',
    ),
  );

  /* Display: News overview (import) */
  $handler = $view->new_display('panel_pane', 'News overview (import)', 'panel_pane_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: External URL */
  $handler->display->display_options['fields']['field_external_url']['id'] = 'field_external_url';
  $handler->display->display_options['fields']['field_external_url']['table'] = 'field_data_field_external_url';
  $handler->display->display_options['fields']['field_external_url']['field'] = 'field_external_url';
  $handler->display->display_options['fields']['field_external_url']['label'] = '';
  $handler->display->display_options['fields']['field_external_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_external_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_external_url']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_external_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_external_url']['type'] = 'plain';
  /* Felt: Indhold: Oprettelsesdato */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'day_month_year';
  /* Felt: Indhold: Source */
  $handler->display->display_options['fields']['field_source']['id'] = 'field_source';
  $handler->display->display_options['fields']['field_source']['table'] = 'field_data_field_source';
  $handler->display->display_options['fields']['field_source']['field'] = 'field_source';
  $handler->display->display_options['fields']['field_source']['label'] = '';
  $handler->display->display_options['fields']['field_source']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_source']['hide_alter_empty'] = FALSE;
  /* Felt: Indhold: Emne */
  $handler->display->display_options['fields']['field_subject']['id'] = 'field_subject';
  $handler->display->display_options['fields']['field_subject']['table'] = 'field_data_field_subject';
  $handler->display->display_options['fields']['field_subject']['field'] = 'field_subject';
  $handler->display->display_options['fields']['field_subject']['label'] = '';
  $handler->display->display_options['fields']['field_subject']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_subject']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_subject']['type'] = 'taxonomy_term_reference_plain';
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_external_url]';
  $handler->display->display_options['fields']['title']['alter']['external'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['rel'] = 'external';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Felt: Indhold: Title image */
  $handler->display->display_options['fields']['field_news_title_image']['id'] = 'field_news_title_image';
  $handler->display->display_options['fields']['field_news_title_image']['table'] = 'field_data_field_news_title_image';
  $handler->display->display_options['fields']['field_news_title_image']['field'] = 'field_news_title_image';
  $handler->display->display_options['fields']['field_news_title_image']['label'] = '';
  $handler->display->display_options['fields']['field_news_title_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_news_title_image']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_news_title_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_news_title_image']['settings'] = array(
    'image_style' => 'news_thumbnail',
    'image_link' => 'content',
  );
  /* Felt: Indhold: Manchet */
  $handler->display->display_options['fields']['field_manchet']['id'] = 'field_manchet';
  $handler->display->display_options['fields']['field_manchet']['table'] = 'field_data_field_manchet';
  $handler->display->display_options['fields']['field_manchet']['field'] = 'field_manchet';
  $handler->display->display_options['fields']['field_manchet']['label'] = '';
  $handler->display->display_options['fields']['field_manchet']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_manchet']['hide_alter_empty'] = FALSE;
  /* Felt: Indhold: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['view_node']['alter']['text'] = '<a rel="external" href="[field_external_url]">[view_node]</a>';
  $handler->display->display_options['fields']['view_node']['alter']['path'] = '[field_external_url]';
  $handler->display->display_options['fields']['view_node']['alter']['external'] = TRUE;
  $handler->display->display_options['fields']['view_node']['alter']['rel'] = 'external';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Læs mere';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'news' => 'news',
  );
  $handler->display->display_options['filters']['type']['group'] = 0;
  $handler->display->display_options['pane_title'] = 'News overview (import)';
  $handler->display->display_options['pane_description'] = 'List all news';
  $handler->display->display_options['pane_category']['name'] = 'Nyheder';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'field_subject_tid' => array(
      'type' => 'panel',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Subject (field_subject)',
    ),
  );

  /* Display: Featured news */
  $handler = $view->new_display('panel_pane', 'Featured news', 'featured_news_pane');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'block-feature block-secondary';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Oprettelsesdato */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_type'] = 'span';
  $handler->display->display_options['fields']['created']['element_class'] = 'date';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['created']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['created']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'day_month_year';
  /* Felt: Indhold: Emne */
  $handler->display->display_options['fields']['field_subject']['id'] = 'field_subject';
  $handler->display->display_options['fields']['field_subject']['table'] = 'field_data_field_subject';
  $handler->display->display_options['fields']['field_subject']['field'] = 'field_subject';
  $handler->display->display_options['fields']['field_subject']['label'] = '';
  $handler->display->display_options['fields']['field_subject']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_subject']['alter']['text'] = '<p class="meta text-secondary"><a href="/nyheder/emne/[field_subject-tid]" title="[field_subject]">[field_subject]</a> | <span class="date">[created]</span></p>';
  $handler->display->display_options['fields']['field_subject']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_subject']['element_class'] = 'subject';
  $handler->display->display_options['fields']['field_subject']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_subject']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_subject']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_subject']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_subject']['type'] = 'taxonomy_term_reference_plain';
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_class'] = 'block-title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Felt: Indhold: Title image */
  $handler->display->display_options['fields']['field_news_title_image']['id'] = 'field_news_title_image';
  $handler->display->display_options['fields']['field_news_title_image']['table'] = 'field_data_field_news_title_image';
  $handler->display->display_options['fields']['field_news_title_image']['field'] = 'field_news_title_image';
  $handler->display->display_options['fields']['field_news_title_image']['label'] = '';
  $handler->display->display_options['fields']['field_news_title_image']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_news_title_image']['element_class'] = 'fullwidth imagelink';
  $handler->display->display_options['fields']['field_news_title_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_news_title_image']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_news_title_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_news_title_image']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_news_title_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_news_title_image']['settings'] = array(
    'image_style' => 'news_large',
    'image_link' => 'content',
  );
  /* Felt: Indhold: Manchet */
  $handler->display->display_options['fields']['field_manchet']['id'] = 'field_manchet';
  $handler->display->display_options['fields']['field_manchet']['table'] = 'field_data_field_manchet';
  $handler->display->display_options['fields']['field_manchet']['field'] = 'field_manchet';
  $handler->display->display_options['fields']['field_manchet']['label'] = '';
  $handler->display->display_options['fields']['field_manchet']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_manchet']['alter']['preserve_tags'] = '<strong> <u> <a> <em>';
  $handler->display->display_options['fields']['field_manchet']['element_type'] = 'p';
  $handler->display->display_options['fields']['field_manchet']['element_class'] = 'text-content';
  $handler->display->display_options['fields']['field_manchet']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_manchet']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_manchet']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_manchet']['hide_alter_empty'] = FALSE;
  /* Felt: Indhold: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['element_type'] = 'span';
  $handler->display->display_options['fields']['view_node']['element_class'] = 'link';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['view_node']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Læs mere';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'news' => 'news',
  );
  $handler->display->display_options['filters']['type']['group'] = 0;
  /* Filterkriterie: Indhold: Forfremmet til forside */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '1';
  $handler->display->display_options['filters']['promote']['group'] = 0;
  $handler->display->display_options['pane_title'] = 'Featured news';
  $handler->display->display_options['pane_description'] = 'News articles that are promoted to front page';
  $handler->display->display_options['pane_category']['name'] = 'Nyheder';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'field_source_tid' => array(
      'type' => 'context',
      'context' => 'entity:taxonomy_term.tid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Kilde (field_source)',
    ),
  );

  /* Display: Feed (source) */
  $handler = $view->new_display('feed', 'Feed (source)', 'feed_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['path'] = 'nyheder/%/rss.xml';

  /* Display: Feed (all) */
  $handler = $view->new_display('feed', 'Feed (all)', 'feed_2');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['path'] = 'nyheder/rss.xml';

  /* Display: Feed (subject) */
  $handler = $view->new_display('feed', 'Feed (subject)', 'feed_3');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Kontekstuelt filter: Indhold: Emne (field_subject) */
  $handler->display->display_options['arguments']['field_subject_tid']['id'] = 'field_subject_tid';
  $handler->display->display_options['arguments']['field_subject_tid']['table'] = 'field_data_field_subject';
  $handler->display->display_options['arguments']['field_subject_tid']['field'] = 'field_subject_tid';
  $handler->display->display_options['arguments']['field_subject_tid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_subject_tid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['field_subject_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_subject_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_subject_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_subject_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_subject_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_subject_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_subject_tid']['validate_options']['vocabularies'] = array(
    'subject' => 'subject',
    'source' => 0,
    'tags' => 0,
  );
  $handler->display->display_options['arguments']['field_subject_tid']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['field_subject_tid']['validate_options']['transform'] = TRUE;
  $handler->display->display_options['path'] = 'nyheder/emne/%/rss.xml';
  $translatables['news_lists'] = array(
    t('Master'),
    t('Nyheder'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Elementer pr. side'),
    t('- Alle -'),
    t('Forskydning'),
    t('« første'),
    t('‹ forrige'),
    t('næste ›'),
    t('sidste »'),
    t('term'),
    t('.'),
    t(','),
    t('<p class="meta text-secondary"><span class="date">[created]</span> | <a href="/nyheder/kilde/[tid]">[field_source]</a></p>'),
    t('<h2 class="block-title news-title"><span class="keyword">[field_subject]: </span>[title]</h2>'),
    t('Læs mere'),
    t('Alle'),
    t('%1'),
    t('News overview'),
    t('<p class="meta text-secondary"><a href="/nyheder/emne/[field_subject-tid]">[field_subject]</a> | <span class="date">[created]</span></p>'),
    t('News overview (subject)'),
    t('News overview (subject parameter)'),
    t('News overview, which takes subject as parameter'),
    t('News overview (source)'),
    t('<p class="meta text-secondary"><a href="/nyheder/kilde/[tid]">[field_source]</a> | <span class="date">[created]</span></p>'),
    t('News overview (source parameter)'),
    t('News overview, which takes source as parameter'),
    t('News overview (import)'),
    t('<a rel="external" href="[field_external_url]">[view_node]</a>'),
    t('List all news'),
    t('Featured news'),
    t('<p class="meta text-secondary"><a href="/nyheder/emne/[field_subject-tid]" title="[field_subject]">[field_subject]</a> | <span class="date">[created]</span></p>'),
    t('News articles that are promoted to front page'),
    t('Feed (source)'),
    t('Feed (all)'),
    t('Feed (subject)'),
  );
  $export['news_lists'] = $view;

  $view = new view();
  $view->name = 'news_taxonomy_blocks';
  $view->description = 'Used as menus to subjects and sources for news';
  $view->tag = 'news';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'News taxonomy blocks';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Kilde';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elementer pr. side';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'næste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'sidste »';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = 'menu-item';
  $handler->display->display_options['style_options']['class'] = 'menu';
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Felt: Ord i ordforråd: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['alter']['path'] = 'nyheder/kilde/[tid]';
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['tid']['separator'] = '';
  /* Felt: Ord i ordforråd: Navn */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['path'] = 'nyheder/kilde/[tid]';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['hide_alter_empty'] = FALSE;
  /* Sorteringskriterie: Ord i ordforråd: Navn */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  /* Filterkriterie: Ordforråd: Maskinnavn */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';

  /* Display: News subject links */
  $handler = $view->new_display('block', 'News subject links', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Emne';
  $handler->display->display_options['display_description'] = 'Taxonomy links to news displayed in panels (/nyheder/kilde/<tag>)';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Ord i ordforråd: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid']['hide_alter_empty'] = FALSE;
  /* Felt: Ord i ordforråd: Navn */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['path'] = 'nyheder/emne/[tid]';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['name']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Ordforråd: Maskinnavn */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'subject' => 'subject',
  );

  /* Display: News source links */
  $handler = $view->new_display('block', 'News source links', 'block_2');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Ord i ordforråd: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['tid']['separator'] = '';
  /* Felt: Ord i ordforråd: Navn */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['path'] = 'nyheder/kilde/[tid]';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Ordforråd: Maskinnavn */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'source' => 'source',
  );
  $translatables['news_taxonomy_blocks'] = array(
    t('Master'),
    t('Kilde'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Elementer pr. side'),
    t('- Alle -'),
    t('Forskydning'),
    t('« første'),
    t('‹ forrige'),
    t('næste ›'),
    t('sidste »'),
    t('.'),
    t('News subject links'),
    t('Emne'),
    t('Taxonomy links to news displayed in panels (/nyheder/kilde/<tag>)'),
    t(','),
    t('News source links'),
  );
  $export['news_taxonomy_blocks'] = $view;

  return $export;
}
