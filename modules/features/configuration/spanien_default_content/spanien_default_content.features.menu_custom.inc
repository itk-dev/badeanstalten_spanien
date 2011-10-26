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
    'title' => 'Footer links first',
    'description' => 'This is the second block of links displayed in the footer.',
  );
  // Exported menu: menu-footer-links-second
  $menus['menu-footer-links-second'] = array(
    'menu_name' => 'menu-footer-links-second',
    'title' => 'Footer links second',
    'description' => 'This is the second block of links displayed in the footer.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Footer links first');
  t('Footer links second');
  t('This is the second block of links displayed in the footer.');


  return $menus;
}
