<?php
/**
 * @file
 * Template for erpalactivitydetails.
 *
 * This template provides a two column panel display layout, with
 * additional areas for the top and the bottom.
 *
 * Variables:
 * - $id: An optional CSS id to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 *   panel of the layout. This layout supports the following sections:
 */
?>
<div class="erpal-activity-details">
  <div class="clearfix erpal-activity-details-header">
    <div class="erpal-activity-details-header-left">
      <?php print $content['header-left']; ?>
    </div>
    <div class="erpal-activity-details-header-right">
      <?php print $content['header-right']; ?>
    </div>
  </div>

  <div class="erpal-activity-details-body">
    <?php print $content['body']; ?>
  </div>
</div>

