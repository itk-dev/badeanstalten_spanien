<?php
 /**
  * @file
  * Wraps menu blocks in a <nav> and strips out unnecessary markup.
  */
?>

<nav<?php print $attributes; ?>>
  <?php if ($block->subject) : ?>
    <h2 class="block-title"><?php print $block->subject ?></h2>
  <?php endif; ?>
  <?php print $content ?>
</nav>
