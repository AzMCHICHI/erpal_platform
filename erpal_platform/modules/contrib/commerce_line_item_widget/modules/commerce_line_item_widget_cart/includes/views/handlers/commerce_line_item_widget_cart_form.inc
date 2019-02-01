<?php

/**
 * Field handler to present an add to cart form for the product.
 */
class commerce_line_item_widget_cart_form extends commerce_cart_handler_field_add_to_cart_form {

  function option_definition() {
    $options = parent::option_definition();

    // Add new options to "add to cart" handle.

    // User can use settings from "commerce_line_items" field widget for decide
    // which line item type we should use for which product.
    $options['order_line_item_settings'] = array('default' => FALSE);

    // If we have several order types on site, user should and choose from which
    // order type we should use settings from "commerce_line_items" field
    // widget.
    $options['order_line_item_settings_type'] = array('commerce_order' => t('Order'));

    return $options;
  }

  /**
   * Provide the add to cart display options.
   */
  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);

    $form['order_line_item_settings'] = array(
      '#type' => 'checkbox',
      '#title' => t('Attempt to take settings from line item field widget.'),
      '#description' => t('Attempt find line item type for product in settings of line item field widget.'),
      '#default_value' => $this->options['order_line_item_settings'],
    );

    $types = array('commerce_order' => t('Order'));
    if (module_exists('commerce_order_types') && $commerce_order_types = commerce_order_types_order_types()) {
      if (is_array($commerce_order_types)) {
        foreach ($commerce_order_types as $type => $settings) {
          $types[$type] = $settings->name;
        }
      }
      elseif (is_object($commerce_order_types)) {
        $types[$commerce_order_types->type] = $commerce_order_types->name;
      }
    }

    // If we have more than 1 type of commerce order type, use should choose
    // which need to use.
    if (count($types) > 1) {
      $form['order_line_item_settings_type'] = array(
        '#type' => 'select',
        '#title' => t('Add to Cart line item type'),
        '#options' => $types,
        '#default_value' => !empty($this->options['order_line_item_settings_type']) ? $this->options['order_line_item_settings_type'] : 'commerce_order',
        '#states' => array(
          'visible' => array(
            ':input[name="options[order_line_item_settings]"]' => array('checked' => TRUE),
          ),
        ),
      );
    }
    else {
      $form['order_line_item_settings_type'] = array(
        '#type' => 'hidden',
        '#value' => key($types),
      );
    }
  }

  function render($values) {

    // Attempt to load the specified product.
    $product = $this->get_value($values);

    // Check if use decide use settings from widget.
    if (!empty($product) && !empty($this->options['order_line_item_settings'])) {

      // Just check if we have widget "commerce_line_item_widget", and after
      // try to find correct line item type for product.
      $settings = field_info_instance('commerce_order', 'commerce_line_items', $this->options['order_line_item_settings_type']);
      if ($settings['widget']['type'] == 'commerce_line_item_widget') {
        $widget_settings = $settings['widget']['settings'];
        foreach ($widget_settings as $type => $type_settings) {
          if (is_array($type_settings) && $type_settings['product_type'] && $type_settings['product_type'] == $product->type) {
            $this->options['line_item_type'] = $type;
            break;
          }
        }
      }
    }

    // After just try to use default logic of "add to cart" handler from
    // commerce cart module.
    return parent::render($values);
  }
}
