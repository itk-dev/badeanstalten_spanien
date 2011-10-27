<?php
/**
 * @file
 * spanien_default_content.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function spanien_default_content_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'default_content';
  $context->description = 'Default content for regions - eg. menus, search etc.';
  $context->tag = 'configuration';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'search-form' => array(
          'module' => 'search',
          'delta' => 'form',
          'region' => 'search',
          'weight' => '-10',
        ),
        'menu-menu-footer-links-first' => array(
          'module' => 'menu',
          'delta' => 'menu-footer-links-first',
          'region' => 'footer_first',
          'weight' => '-10',
        ),
        'menu-menu-footer-links-second' => array(
          'module' => 'menu',
          'delta' => 'menu-footer-links-second',
          'region' => 'footer_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Default content for regions - eg. menus, search etc.');
  t('configuration');
  $export['default_content'] = $context;

  return $export;
}
