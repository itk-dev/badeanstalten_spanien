<?php
/**
 * @file
 * employee_pages.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function employee_pages_user_default_roles() {
  $roles = array();

  // Exported role: medarbejder
  $roles['medarbejder'] = array(
    'name' => 'medarbejder',
    'weight' => '2',
  );

  return $roles;
}
