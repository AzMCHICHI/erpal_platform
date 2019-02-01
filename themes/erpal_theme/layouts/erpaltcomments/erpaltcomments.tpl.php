<?php
/**
 * @file
 * Template for erpalcomments.
 *
 * This template provides a two column panel display layout, with
 * additional areas for the top and the bottom inside the right column.
 */
?>
<div class="erpalcomments">
  <div class="erpalcomments-avatar">
    <?php print $content['avatar']; ?>
  </div>
  <div class="erpalcomments-wrap">
    <div class="erpalcomments-header">
      <?php print $content['header']; ?>
    </div>
    <div class="erpalcomments-body">
      <?php print $content['body']; ?>
    </div>
    <div class="erpalcomments-footer">
      <?php print $content['footer']; ?>
    </div>
  </div>
</div>
