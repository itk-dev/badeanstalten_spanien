<?php

/**
 * The plugin to handle full pager.
 *
 * @ingroup views_pager_plugins
 */
class views_plugin_pager_infinite_scroll extends views_plugin_pager_full {
  function init(&$view, &$display, $options = array()) {
    parent::init($view, $display, $options);
  }

  function summary_title() {
    return "Infinite Scroll";
    if (!empty($this->options['offset'])) {
      return format_plural($this->options['items_per_page'], 'Infinite scroll pager, @count item, skip @skip', 'Infinite scroll pager, @count items, skip @skip', array('@count' => $this->options['items_per_page'], '@skip' => $this->options['offset']));
    }
    return format_plural($this->options['items_per_page'], 'Infinite scroll pager, @count item', 'Infinite scroll pager, @count items', array('@count' => $this->options['items_per_page']));
  }

  function option_definition() {
    $options = parent::option_definition();

    // Added extra options
    $options['infinite_scroll'] = array(
      'method' => array('default' => 0),
      'link_text' => array('default' => 'Load more items'),
    );

    return $options;
  }

  /**
   * Provide the default form for setting options.
   */
  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);

    $form['infinite_scroll'] = array (
      '#type' => 'fieldset',
      '#collapsible' => FALSE,
      '#collapsed' => FALSE,
      '#tree' => TRUE,
      '#title' => t('Infinite scroll options'),
      '#input' => TRUE,
    );

    $form['infinite_scroll']['method'] = array(
      '#type' => 'radios',
      '#title' => t('Scroll method'),
      '#description' => t('The method to use when loading more elements. Automatically will load more elments when the page is scroll to the buttom of the page. The Link method requires the user to click a link below the view to load more elements.'),
      '#options' => array(t('Automatically'), t('Link')),
      '#default_value' => $this->options['infinite_scroll']['method'],
    );

    $form['infinite_scroll']['content_selector'] = array(
      '#type' => 'textfield',
      '#title' => t('Content selector'),
      '#description' => t('The selector to use when appending content (e.g for lists: div.view-content .item-list > *). If not defined an autodetection will be used.'),
      '#default_value' => $this->options['infinite_scroll']['content_selector'],
    );

    $form['infinite_scroll']['link_text'] = array(
      '#type' => 'textfield',
      '#title' => t('Link text'),
      '#description' => t('The link tekst to display, which user will click to load more elements.'),
      '#default_value' => $this->options['infinite_scroll']['link_text'],
      '#states' => array(
        'visible' => array(
          ':input[name="pager_options[infinite_scroll][method]"]' => array('value' => '1'),
        ),
      ),
    );
  }

  function render($input) {
    global $base_url;
    $style_plugin = $this->view->display_handler->default_display->options['style_plugin'];
    $content_selector = $this->options['infinite_scroll']['content_selector'];
    $items_selector = '';
    $img_path = $base_url . '/' . drupal_get_path('module', 'views_infinite_scroll') . '/images/ajax-loader.gif';
    switch ($this->view->plugin_name) {
      case 'default':
        $content_selector = empty($content_selector) ? 'div.view-content' : $content_selector;
        $items_selector = '.views-row';
        break;
      case 'grid':
        $content_selector = empty($content_selector) ? 'div.view-content tbody' : $content_selector;
        $items_selector = 'tr';
        break;
      case 'list':
        $content_selector = empty($content_selector) ? 'div.view-content .item-list > *' : $content_selector;
        $items_selector = '.views-row';
        break;
      case 'table':
        $content_selector = empty($content_selector) ? 'div.view-content tbody' : $content_selector;
        $items_selector = 'tr';
        break;
    }

    $pager_theme = views_theme_functions('views_infinite_scroll_pager', $this->view, $this->display);
    return theme($pager_theme,
              array(
                'tags' => $input,
                'quantity' => $this->options['items_per_page'],
                'view_name' => $this->view->name,
                'current_display' => $this->view->current_display,
                'content_selector' => $content_selector,
                'items_selector' => $items_selector,
                'img_path' => $img_path,
                'element' => $this->options['id'],
                'infinite_options' => $this->options['infinite_scroll'],
              )
            );
  }
}
