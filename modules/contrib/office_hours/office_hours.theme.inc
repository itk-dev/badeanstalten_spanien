<?php
/**
 * @file
 * Themes the Office hours formatter and widget.
 *
 */

/**
 * Theme function for 'default' text field formatter.
 */
function office_hours_field_formatter_view($entity_type, $entity, $field, $instance, $langcode, $items, $display) {
  $element = array();
  $settings = $display['settings'];
  $formatter = $display['type'];
  $element[0] = array(
    '#markup' => theme($display['type'] . '_formatter_default', array('element' => $items, 'field' => $instance)),
  );
  return $element;
}

/**
 * Theme function for 'default' text field formatter.
 */
function theme_office_hours_formatter_default($vars) {
  $output = '';
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
        $additional = ' , <span class="oh-display-hours">' . $strhrs2 . ' - ' . $endhrs2 . '</span>';
      } 
    }

    $output_line = $closed . $regular . $additional ;  
    if (!empty($output_line)) {
      $output .= '<div class="oh-display">' . $dayname . ': ' . $output_line . '</div>';  
    }
  }
  return $output;
}

function theme_office_hours($vars) {
  return $vars['element']['#children'];
}

/**
 * Theme function for the office hours selector element.
 */
function theme_office_hours_select($vars) {
  return $vars['element']['#children'];
}

/**
 * copied from content module's theme_content_multiple_values- we're taking out the draggable feature.
 *
 * Theme the hour table form
 *
 */
function theme_office_hours_multiple_values($vars) {
 $element = $vars['element'];
 $output = '';
 if (isset($element['#cardinality']) and  $element['#cardinality'] >= 1) {
    $table_id = $element['#field_name'] . '_values';
    $order_class = $element['#field_name'] . '-delta-order';
    $required = !empty($element['#required']) ? '<span class="form-required" title="' . t('This field is required.') . '">*</span>' : '';

    $header = array(
      array(
        'data' => t('!title: !required', array('!title' => $element['#title'], '!required' => $required)),
        'colspan' => 2,
      ),
    );
    $rows = array();

    // Sort items according to '_weight' (needed when the form comes back after
    // preview or failed validation)
    $items = array();
    foreach (element_children($element) as $key => $value) {
      if ($key !== $element['#field_name'] . '_add_more') {
         $items[] = &$element[$key];
      }
    }

    $items = _office_hours_arrange_day($items); //this calls the function that arranges the first day of the week.
    // Add the items as table rows.
    foreach ($items as $key => $item) {
      //$item['#type'] = 'office_hours';
      $delta_element = drupal_render($item['_weight']);
      if (!($key % 2)) { //this is an even row, start a new row array_keys
        $cells = array(
           drupal_render($item),
        );
     }
      else { //this is an odd row
        $cells[] = drupal_render($item);  //we've add the second cell;
        $rows[] = array(
          'data' => $cells,
        );
      }
    }

    $output .= theme('table', array('header' => $header, 'rows' => $rows, 'id' => $table_id, 'class' => 'office_hours_table content-multiple-table'));
    $output .= $element['#description'] ? '<div class="description">' . $element['#description'] . '</div>' : '';
  //  $output .= drupal_render($element[$element['#field_name'] .'_add_more']);

  //  drupal_add_tabledrag($table_id, 'order', 'sibling', $order_class);
  }
  else {
    foreach (element_children($element) as $key => $value) {
      $output .= theme_office_hours_multiple_values(array('element' => $element[$value]));
    }
  }

  return $output;
}
