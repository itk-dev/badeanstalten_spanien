<?php

/**
 * @file
 * Implements the context inline editor administration filter interface.
 */

function context_inline_editor_filter_form() {
  $form = array();

  $defaults = variable_get('context_inline_editor_filter', array());

  $form['context_inline_editor_filter'] = array(
    '#type' => 'fieldset',
    '#title' => t('Context inline editor filter'),
    '#description' => t('Select the contexts that you want to <strong>hide</strong> in the inline editor.'),
    '#collapsible' => FALSE,
    '#collapsed' => FALSE,
    '#tree' => TRUE,
  );

  // Build options list(s) of contexts grouped by tag (we need to build the
  // options first, as they are not load be tag name).
  $options = array();
  $contexts = context_load();
  foreach ($contexts as $key => $context) {
    $tag = empty($context->tag) ? 'untagged' : $context->tag;
    $options[$tag][$key] = check_plain($context->name);
  }

  // Build fieldset based on tagging with the contexts available inside.
  foreach ($options as $tag => $values) {
    $form['context_inline_editor_filter'][$tag] = array(
      '#type' => 'fieldset',
      '#title' => check_plain($tag),
      '#collapsible' => FALSE,
      '#collapsed' => FALSE,
    );
    $form['context_inline_editor_filter'][$tag]['options'] = array(
      '#type' => 'checkboxes',
      '#options' => $values,
      '#default_value' => isset($defaults[$tag]['options']) ? $defaults[$tag]['options'] : array(),
    );
  }

  return system_settings_form($form);
}
