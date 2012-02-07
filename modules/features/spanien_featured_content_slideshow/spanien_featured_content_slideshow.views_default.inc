<?php
/**
 * @file
 * spanien_featured_content_slideshow.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function spanien_featured_content_slideshow_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'spanien_custom_featured_content';
  $view->description = 'Slideshows for featured content';
  $view->tag = 'featuredcontent';
  $view->base_table = 'node';
  $view->human_name = 'Spanien custom featured content: Slidehow';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Featured Content';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['style_options']['slideshow_type'] = 'views_slideshow_cycle';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Default',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'title' => 0,
    'field_featured_text' => 0,
    'field_featured_link' => 0,
    'field_featured_image' => 0,
    'counter' => 0,
    'nothing' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['enable'] = 1;
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['enable'] = 1;
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'counter' => 'counter',
    'title' => 0,
    'field_featured_text' => 0,
    'field_featured_link' => 0,
    'field_featured_image' => 0,
    'nothing' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '5000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '3000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 1;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 1;
  $handler->display->display_options['row_options']['default_field_elements'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_featured_link']['id'] = 'field_featured_link';
  $handler->display->display_options['fields']['field_featured_link']['table'] = 'field_data_field_featured_link';
  $handler->display->display_options['fields']['field_featured_link']['field'] = 'field_featured_link';
  $handler->display->display_options['fields']['field_featured_link']['label'] = '';
  $handler->display->display_options['fields']['field_featured_link']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_featured_link']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_featured_link']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_featured_link']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_featured_link']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_featured_link']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_featured_link']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_featured_link']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_featured_link']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_featured_link']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_featured_link']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_featured_link']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_featured_link']['element_type'] = 'p';
  $handler->display->display_options['fields']['field_featured_link']['element_class'] = 'link';
  $handler->display->display_options['fields']['field_featured_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_featured_link']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_featured_link']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_featured_link']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_featured_link']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_featured_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_featured_link']['field_api_classes'] = 0;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_featured_text']['id'] = 'field_featured_text';
  $handler->display->display_options['fields']['field_featured_text']['table'] = 'field_data_field_featured_text';
  $handler->display->display_options['fields']['field_featured_text']['field'] = 'field_featured_text';
  $handler->display->display_options['fields']['field_featured_text']['label'] = '';
  $handler->display->display_options['fields']['field_featured_text']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_featured_text']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_featured_text']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_featured_text']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_featured_text']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_featured_text']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_featured_text']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_featured_text']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_featured_text']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_featured_text']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_featured_text']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_featured_text']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_featured_text']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_featured_text']['element_class'] = 'teaser';
  $handler->display->display_options['fields']['field_featured_text']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_featured_text']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_featured_text']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_featured_text']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_featured_text']['hide_alter_empty'] = 0;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_featured_image']['id'] = 'field_featured_image';
  $handler->display->display_options['fields']['field_featured_image']['table'] = 'field_data_field_featured_image';
  $handler->display->display_options['fields']['field_featured_image']['field'] = 'field_featured_image';
  $handler->display->display_options['fields']['field_featured_image']['label'] = '';
  $handler->display->display_options['fields']['field_featured_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_featured_image']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['field_featured_image']['alter']['path'] = '[field_featured_link]';
  $handler->display->display_options['fields']['field_featured_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_featured_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_featured_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_featured_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_featured_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_featured_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_featured_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_featured_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_featured_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_featured_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_featured_image']['element_class'] = 'image';
  $handler->display->display_options['fields']['field_featured_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_featured_image']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_featured_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_featured_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_featured_image']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_featured_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_featured_image']['settings'] = array(
    'image_style' => 'featuredcontent_slideshow_large',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_featured_image']['field_api_classes'] = 0;
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = '';
  $handler->display->display_options['fields']['counter']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['counter']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['counter']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['counter']['alter']['external'] = 0;
  $handler->display->display_options['fields']['counter']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['counter']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['counter']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['counter']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['counter']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['counter']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['counter']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['counter']['alter']['html'] = 0;
  $handler->display->display_options['fields']['counter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['counter']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['counter']['hide_empty'] = 0;
  $handler->display->display_options['fields']['counter']['empty_zero'] = 0;
  $handler->display->display_options['fields']['counter']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'featured_content' => 'featured_content',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'spanien_featured_content');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Spanien forside Slideshow';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'slideshow-panorama';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Link */
  $handler->display->display_options['fields']['field_featured_link']['id'] = 'field_featured_link';
  $handler->display->display_options['fields']['field_featured_link']['table'] = 'field_data_field_featured_link';
  $handler->display->display_options['fields']['field_featured_link']['field'] = 'field_featured_link';
  $handler->display->display_options['fields']['field_featured_link']['ui_name'] = 'Link';
  $handler->display->display_options['fields']['field_featured_link']['label'] = '';
  $handler->display->display_options['fields']['field_featured_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_featured_link']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_featured_link']['alter']['text'] = '<a class="content" href="[field_featured_link-url]">
<h2>[title]</h2>
<div class="teaser">[field_featured_text]</div>
<p class="link">[field_featured_link-title]</p>
</a>';
  $handler->display->display_options['fields']['field_featured_link']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_featured_link']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_featured_link']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_featured_link']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_featured_link']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_featured_link']['alter']['link_class'] = 'content';
  $handler->display->display_options['fields']['field_featured_link']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_featured_link']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_featured_link']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_featured_link']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_featured_link']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_featured_link']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_featured_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_featured_link']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_featured_link']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_featured_link']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_featured_link']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_featured_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_featured_link']['type'] = 'link_url';
  $handler->display->display_options['fields']['field_featured_link']['field_api_classes'] = 0;
  /* Field: Title (excluded) */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['ui_name'] = 'Title (excluded)';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_featured_link]';
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
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Field: Image (excluded) */
  $handler->display->display_options['fields']['field_featured_image']['id'] = 'field_featured_image';
  $handler->display->display_options['fields']['field_featured_image']['table'] = 'field_data_field_featured_image';
  $handler->display->display_options['fields']['field_featured_image']['field'] = 'field_featured_image';
  $handler->display->display_options['fields']['field_featured_image']['ui_name'] = 'Image (excluded)';
  $handler->display->display_options['fields']['field_featured_image']['label'] = '';
  $handler->display->display_options['fields']['field_featured_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_featured_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_featured_image']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['field_featured_image']['alter']['path'] = '[field_featured_link]';
  $handler->display->display_options['fields']['field_featured_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_featured_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_featured_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_featured_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_featured_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_featured_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_featured_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_featured_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_featured_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_featured_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_featured_image']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_featured_image']['element_class'] = 'panorama-image';
  $handler->display->display_options['fields']['field_featured_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_featured_image']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_featured_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_featured_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_featured_image']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_featured_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_featured_image']['settings'] = array(
    'image_style' => 'spanien_featured_content',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_featured_image']['field_api_classes'] = 0;
  /* Field: Title and image */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Title and image';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="panorama-image">[field_featured_image]</div>
<div class="coverlayer">
  <div class="coverlayer-inner"><h2 class="block-title">[title]</h2></div>
</div>';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = '[field_featured_link]';
  $handler->display->display_options['fields']['nothing']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['nothing']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nothing']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nothing']['hide_alter_empty'] = 1;
  /* Field: Counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['ui_name'] = 'Counter';
  $handler->display->display_options['fields']['counter']['label'] = '';
  $handler->display->display_options['fields']['counter']['exclude'] = TRUE;
  $handler->display->display_options['fields']['counter']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['counter']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['counter']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['counter']['alter']['external'] = 0;
  $handler->display->display_options['fields']['counter']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['counter']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['counter']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['counter']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['counter']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['counter']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['counter']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['counter']['alter']['html'] = 0;
  $handler->display->display_options['fields']['counter']['element_type'] = '0';
  $handler->display->display_options['fields']['counter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['counter']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['counter']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['counter']['hide_empty'] = 0;
  $handler->display->display_options['fields']['counter']['empty_zero'] = 0;
  $handler->display->display_options['fields']['counter']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  $handler->display->display_options['pane_title'] = 'Spanien Featured Content Slideshow';
  $handler->display->display_options['pane_category']['name'] = 'Featured Content';
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
  $translatables['spanien_custom_featured_content'] = array(
    t('Master'),
    t('Featured Content'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('[field_featured_link]'),
    t('Content pane'),
    t('Spanien forside Slideshow'),
    t('<a class="content" href="[field_featured_link-url]">
<h2>[title]</h2>
<div class="teaser">[field_featured_text]</div>
<p class="link">[field_featured_link-title]</p>
</a>'),
    t('<div class="panorama-image">[field_featured_image]</div>
<div class="coverlayer">
  <div class="coverlayer-inner"><h2 class="block-title">[title]</h2></div>
</div>'),
    t('Spanien Featured Content Slideshow'),
  );
  $export['spanien_custom_featured_content'] = $view;

  return $export;
}
