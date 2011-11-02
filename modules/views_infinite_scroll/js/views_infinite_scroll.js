// $Id:

(function ($) {

var views_infinite_scroll_was_initialised = false;
var views_infinite_scroll_page_loads = 1;
Drupal.behaviors.views_infinite_scroll = {
  attach:function() {
    // Make sure that autopager plugin is loaded.
    if($.autopager) {
      if(!views_infinite_scroll_was_initialised) {
        views_infinite_scroll_was_initialised = true;
        // There should not be multiple Infinite Scroll Views on the same page.
        if(Drupal.settings.views_infinite_scroll.length == 1) { 
          var settings = Drupal.settings.views_infinite_scroll[0];
          var use_ajax = false;
          // Make sure that views ajax is disabled.
          if(Drupal.settings.views && Drupal.settings.views.ajaxViews) {
            $.each(Drupal.settings.views.ajaxViews, function(key, value) {
              if((value.view_name == settings.view_name) && (value.view_display_id == settings.display)) {
                use_ajax = true;
              }
            });
          }
          if(!use_ajax) {
            // Create the configuration for autopager.
            var content_selector = 'div.view-id-' + settings.view_name + '.view-display-id-' + settings.display + ' ' + settings.content_selector;
            var items_selector   = content_selector + ' ' + settings.items_selector;
            var next_selector    = settings.next_selector;
            var img_path         = settings.img_path;
            var img              = '<div id="views_infinite_scroll-ajax-loader"><img src="' + img_path + '" alt="loading..."/></div>';
            var img_location     = 'div.view-id-' + settings.view_name + '.view-display-id-' + settings.display + ' div.view-content';
            var pager_selector   = 'div.view-id-' + settings.view_name + '.view-display-id-' + settings.display + ' div.item-list ' + settings.pager_selector;
            var next_link        = $('<div id="views_infinite_scroll_ajax_load_link"><a href="#">'+settings.link_text+'</a></div>');

            // Hide the fallback pager.
            $(pager_selector).hide();

            // Check which pager method that should be used.
            var autoload = true;
            if (settings.method == 1) {
              autoload = false;
              // Create next link and add click event.
              $(pager_selector).after(next_link);
              next_link.click(function() {
                $.autopager('load');
                return false;
              });
            }

            $.autopager({
              appendTo: content_selector,
              content: items_selector,
              link: next_selector,
              page: 0,
              autoLoad: autoload,
              start: function() {
                // Add the loader image.
                $(img_location).after(img);

                // Remove load link.
                if (settings.method == 1) {
                  next_link.hide();
                }
              },
              load: function() {
                // Remove the loader image.
                $('div#views_infinite_scroll-ajax-loader').remove();

                // Show more link, if it's not the last page.
                views_infinite_scroll_page_loads++;
                if (settings.pager_total > views_infinite_scroll_page_loads) {
                  next_link.show();
                }

                Drupal.attachBehaviors();
              }    
            });
          }
          else {  
            alert(Drupal.t('Views infinite scroll pager is not compatible with Ajax Views. Please disable "Use Ajax" option.'));
          }
        }
        else if(Drupal.settings.views_infinite_scroll.length > 1) {
          alert(Drupal.t('Views Infinite Scroll module can\'t handle more than one infinite view in the same page.'));
        }
      }
    }
    else {
      alert(Drupal.t('Autopager jquery plugin in not loaded.'));
    }
  }
}

})(jQuery);
