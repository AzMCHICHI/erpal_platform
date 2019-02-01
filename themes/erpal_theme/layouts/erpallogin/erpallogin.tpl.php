<?php
/**
 * @file
 * Template for erpallogin.
 *
 * This template provides a two row panel display layout.
 *
 * Variables:
 * - $id: An optional CSS id to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 *   panel of the layout. This layout supports the following sections:
 *   - $content['body']: well.. the only place to put content into.
 */
?>

<div class="erpal-login">
  <div class="erpal-login-wrap">
    <?php print $content['body']; ?>
  </div>
</div>
