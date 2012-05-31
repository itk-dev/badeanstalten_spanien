<?php
/**
 * @file
 * spanien_default_content.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function spanien_default_content_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-footer-links-first
  $menus['menu-footer-links-first'] = array(
    'menu_name' => 'menu-footer-links-first',
    'title' => 'Nyttige informationer',
    'description' => 'This is the second block of links displayed in the footer.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Nyttige informationer');
  t('This is the second block of links displayed in the footer.');


  return $menus;
}
