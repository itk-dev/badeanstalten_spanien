<?php 
/**
 * @file
 * Alpha's theme implementation to display zone header.
 */
?>
<?php if ($wrapper): ?><div<?php print $attributes; ?>><?php endif; ?>  
  <div<?php print $content_attributes; ?>>
    <?php print $content; ?>
    <?php if ($breadcrumb): ?>
      <div id="breadcrumb" class="breadcrumb grid-<?php print $columns; ?>"><?php print $breadcrumb; ?></div>
    <?php endif; ?>
  </div>
<?php if ($wrapper): ?></div><?php endif; ?>
