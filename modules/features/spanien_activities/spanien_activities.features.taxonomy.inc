<?php
/**
 * @file
 * spanien_activities.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function spanien_activities_taxonomy_default_vocabularies() {
  return array(
    'activities' => array(
      'name' => 'Activities',
      'machine_name' => 'activities',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
  );
}
