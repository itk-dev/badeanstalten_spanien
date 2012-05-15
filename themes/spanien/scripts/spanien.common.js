(function ($) {

  /**
   * Defines function().
   * Adds a toggle link for menu and search.
   */
  
  function addMenuLink(elements) {
    $(elements).each(function(index,value) {
      $(value).toggle();
    });
  }

  /**
   * Defines function().
   * Creates <select /> from menu block.
   */
  function menuToSelect(source, destination) {
    
    // Make sure there is a reason to create the menu.
    if ($(source).find("ul").length) {
      // Create wrapper for mobile menu.
      $("<div />", {
        "class" : "mobile-menu"
      }).appendTo(destination);
      
      // Create menu-title
      $("<h2 />", {
        "class" : "menu-title block-title",
        "text"  : Drupal.t('Navigation')
      }).appendTo(".mobile-menu", $(destination));

      // Create the dropdown base
      $("<select />", {
      }).appendTo(".mobile-menu", $(destination));

      // Create default option "Go to..."
      $("<option />", {
         "selected": "selected",
         "value"   : "",
         "text"    : Drupal.t('Select page')
      }).appendTo($("select", destination));

      // Populate dropdown with menu items
      $(source).each(function() {

        var el = $(this);

        children    = el.find("li");

        $("<option />", {
          "value" : el.find("> h2 > a").attr("href"),
          "text"  : el.find("> h2 > a").text()
        }).appendTo("select:last");

        children.find("a").each(function() {
          $("<option />", {
            "value" : $(this).attr("href"),
            "text": " - " + $(this).text()
          }).appendTo("select:last");
        });

      });

      // To make dropdown actually work
      $("select", destination).change(function() {
        window.location = $(this).find("option:selected").val();
      });
        
    }
  }
  
  /**
   * Run functions on document ready.
   */
  $(document).ready(function() {
    $('.menu-link').click(function(){
      addMenuLink(['#zone-menu','#region-search']);      
    });
    
    menuToSelect("#block-menu-block-spanien-default-content-1", "#section-content");
    
    /**
     * Add equal heights to spotboxes.
     */
    if (!Drupal.behaviors.hasOwnProperty('omegaMediaQueries') || Drupal.omega.getCurrentLayout() != 'mobile') {
      //$(".block-nodespotbox").equalHeights();
    }
  });

})(jQuery);
