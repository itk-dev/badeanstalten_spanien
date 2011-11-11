<?php
/**
 * @file
 * spanien_activities.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function spanien_activities_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'activities_configuration';
  $context->description = '';
  $context->tag = 'configuration';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'holdbooking' => 'holdbooking',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu_block-1' => array(
          'module' => 'menu_block',
          'delta' => 1,
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('configuration');
  $export['activities_configuration'] = $context;

  return $export;
}
