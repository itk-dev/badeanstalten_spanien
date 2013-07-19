<?php
/**
 * @file
 * itkore_news_display.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function itkore_news_display_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'news_configuration';
  $context->description = 'Places news related blocks on news pages';
  $context->tag = 'configuration';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'news' => 'news',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'path' => array(
      'values' => array(
        'nyheder' => 'nyheder',
        'nyheder/*' => 'nyheder/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-news_taxonomy_blocks-block_2' => array(
          'module' => 'views',
          'delta' => 'news_taxonomy_blocks-block_2',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'views-news_taxonomy_blocks-block_1' => array(
          'module' => 'views',
          'delta' => 'news_taxonomy_blocks-block_1',
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Places news related blocks on news pages');
  t('configuration');
  $export['news_configuration'] = $context;

  return $export;
}
