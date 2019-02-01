<?php

/**
 * Provide dynamic widget setting use in cart.
 */

/**
 * Implements hook_views_data_alter().
 */
function commerce_line_item_widget_cart_views_data_alter(&$data) {
  $data['views_entity_commerce_product']['add_to_cart_form']['field']['handler'] = 'commerce_line_item_widget_cart_form';
}

