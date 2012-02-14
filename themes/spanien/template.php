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
    $path = drupal_get_path_alias();

    // Add breadcrumb for news.
    if (preg_match('/^nyheder\//', $path)) {
      $breadcrumb[] = l('Nyheder', 'nyheder');
    }

    // Add breadcrumb for activities.
    if (preg_match('/^aktiviteter\/hold\/(\d+)/', $path)) {
      $breadcrumb[] = l('Aktiviteter', 'aktiviteter');
    }

    // Add current page title to the end of the breadcrumb.
    $breadcrumb[] = '<span>' . drupal_get_title() . '</span>';
  }

  // Create the output
  $output .= implode('', $breadcrumb);

  return $output;
}

/**
 * Implements hook_preprocess_panels_pane().
 */
function spanien_preprocess_panels_pane(&$vars) {
  // Suggestions base on sub-type.
  $vars['theme_hook_suggestions'][] = 'panels_pane__' . str_replace('-', '__', $vars['pane']->subtype);

  // Suggestions on panel pane
  $vars['theme_hook_suggestions'][] = 'panels_pane__' . $vars['pane']->panel;  
}

/**
 * Implements hook_preprocess_region().
 *
 * Add region template suggestions based on first part of the current path alias.
 */
function spanien_preprocess_region(&$vars) {
  // Only create templet suggestions for panels.
  if (page_manager_get_current_page()) {
    $path = explode('/', drupal_get_path_alias());
    $vars['theme_hook_suggestions'][] = 'region__' . $vars['region'] . '__' . $path[0];
  }
}

/**
 * Theme function for 'default' text field formatter.
 */
function spanien_office_hours_formatter_default($vars) {
  $output = '';
  $counter = 0;
  $items = array();
  $first = variable_get('date_first_day', 0); 
  $field = field_info_field($vars['field']['field_name']);
  $element = $vars['element'];
  $weekdays = array(0 => t('Sunday'), 1 => t('Monday'), 2 => t('Tuesday'), 3 => t('Wednesday'), 4 => t('Thursday'), 5 => t('Friday'), 6 => t('Saturday') );

  foreach (element_children($element) as $key => $arraykey) {
    $item = $element[$arraykey];
    $day = (int)($item['day'] / 2); // Keys are 0+1 for sunday, 2+3 for monday, etc. Each day may have normal hours + extra hours.
    if (isset($day)) {
      $strhrs = _office_hours_mil_to_tf(check_plain($item['starthours']));  
      $endhrs = _office_hours_mil_to_tf(check_plain($item['endhours']));
      if ($field['settings']['hoursformat']) {
        $strhrs = _office_hours_convert_to_ampm($strhrs);
        $endhrs = _office_hours_convert_to_ampm($endhrs);
      }
      $items[$day][] = array('strhrs' => $strhrs, 'endhrs' => $endhrs) ; //we're aggregating hours for days together.
    }   
  }

  // add the closed days again, to 1) sort by first_day_of_week and 2) toggle show on/off
  foreach ($weekdays as $key => $day) {
    if (!array_key_exists($key, $items)) {
        $items[$key][]= array('closed' => 'closed'); //silly, but we need this as an array because we can't use a string offset later
    }
  }
  ksort($items);
  $items = date_week_days_ordered($items);
  $weekdays = date_week_days_ordered($weekdays);

  foreach ($items as $day => $hours) {
    $counter++;
    $dayname = $weekdays[$day];
    $closed = '';
    $regular = '';
    $additional = '';
    if ( isset($hours[0]['closed']) ) {
      if ( !empty($field['settings']['showclosed']) ) { // don't output unnecessary fields
        $closed = '<span class="oh-display-hours">' . t('Closed') . '</span>';  
      }
    }
    else {
      $strhrs1 = $hours[0]['strhrs'];
      $endhrs1 = $hours[0]['endhrs'];
      $regular    = '<span class="oh-display-hours">' . $strhrs1 . ' - ' . $endhrs1 . '</span>';
      if (isset($hours[1])) {
        $strhrs2 = $hours[1]['strhrs'];
        $endhrs2 = $hours[1]['endhrs'];
        $additional = '<span class="oh-display-sep">' . t('and') . '</span><span class="oh-display-hours">' . $strhrs2 . ' - ' . $endhrs2 . '</span>';
      } 
    }

    $output_line = $closed . $regular . $additional ;
    $odd_even = 'odd';
    if ($counter % 2 == 0) {
      $odd_even = 'even';
    }
    if (!empty($output_line)) {
      $output .= '<div class="oh-display ' . $odd_even . '"><span class="oh-display-day">' . $dayname . ':</span> ' . $output_line . '</div>';  
    }
  }
  
  return $output;
}
