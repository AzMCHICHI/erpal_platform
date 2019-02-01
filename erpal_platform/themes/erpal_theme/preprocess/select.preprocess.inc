<?php

/**
 * Implements hook_preprocess_select().
 */

function erpal_theme_preprocess_select(&$variables) {
  drupal_add_library('system', 'ui.widget');
}
