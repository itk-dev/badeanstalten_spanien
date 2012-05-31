<?php
/**
 * @file views-view-list.tpl.php
 * Default simple view template to display a list of rows.
 *
 * - $title : The title of this group of rows.  May be empty.
 * - $options['type'] will either be ul or ol.
 * @ingroup views_templates
 */
?>
<fieldset>
  <?php if (!empty($title)) : ?>
    <legend><?php print $title; ?></legend>
  <?php endif; ?>
  <?php foreach ($rows as $id => $row): ?>
    <div class="text-content"><?php print $row; ?></div>
  <?php endforeach; ?>
</fieldset>
