<?php

/**
 * @file
 * This file is empty by default because the base theme chain (Alpha & Omega) provides
 * all the basic functionality. However, in case you wish to customize the output that Drupal
 * generates through Alpha & Omega this file is a good place to do so.
 * 
 * Alpha comes with a neat solution for keeping this file as clean as possible while the code
 * for your subtheme grows. Please read the README.txt in the /preprocess and /process subfolders
 * for more information on this topic.
 */

function spanien_preprocess_html(&$variables) { 
  // Add conditional CSS for IE7 and below.
  drupal_add_css(path_to_theme() . '/css/ie7.css', array('group' => CSS_THEME, 'browsers' => array('IE' => 'lte IE 7', '!IE' => FALSE), 'weight' => 999, 'preprocess' => FALSE));
}

/**
 * Implements hook_process_region().
 *
 * Makes breadcrumb,title and tabs available in content region for printing.
 */
function spanien_alpha_process_zone(&$vars) {
    $theme = alpha_get_theme();
    switch ($vars['elements']['#zone']) {
      case 'header':
        $vars['breadcrumb'] = $theme->page['breadcrumb'];
        break;
    }
}

/**
 * Implements hook_preprocess_block().
 */
function spanien_preprocess_block(&$vars) {
  // Load region
  $current_region = $vars['elements']['#block']->region;

  // Add classes based on module & region
  if ($current_region != 'footer_sitemap' &&
      $current_region != 'user_first' && 
      $current_region != 'user_second' && 
      $current_region != 'menu' && 
      $current_region != 'footer_first' && 
      $current_region != 'footer_second') {
    
    switch($vars['elements']['#block']->module) {
      case 'menu_block':
        $vars['attributes_array']['class'][] = 'block-style-menu';
        break;
      
      default:
        break;
    };
  };
}

/*
 * Implements hook_breadcrumb().
 */
function spanien_breadcrumb($variables) {
  $output = '';
  $breadcrumb = $variables['breadcrumb'];

  // Build breadcrumb.
  if (!empty($breadcrumb)) {
    // Add current page title to the end of the breadcrumb.
    $breadcrumb[] = '<span>' . drupal_get_title() . '</span>';
  }

  // Create the output
  $output .= implode(' › ', $breadcrumb);

  return $output;
}
