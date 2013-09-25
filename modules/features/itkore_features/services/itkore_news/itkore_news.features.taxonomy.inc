<?php
/**
 * @file
 * itkore_news.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function itkore_news_taxonomy_default_vocabularies() {
  return array(
    'source' => array(
      'name' => 'Source',
      'machine_name' => 'source',
      'description' => 'News sources',
      'hierarchy' => 1,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
