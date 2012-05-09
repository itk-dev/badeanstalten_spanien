<?php
/**
 * @file
 * delta_layouts_spanien.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function delta_layouts_spanien_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'spanien_homepage';
  $context->description = 'Delta layout controls for <front>';
  $context->tag = 'delta';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'delta' => array(
      'delta_template' => 'spanien_homepage',
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Delta layout controls for <front>');
  t('delta');
  $export['spanien_homepage'] = $context;

  return $export;
}
