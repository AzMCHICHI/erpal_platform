<?php

/**
 * @file
 * erpal_payment_modality.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function erpal_payment_modality_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'erpal_payment_modality';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'erpal_payment_modality';
  $view->human_name = 'ERPAL payment modality';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'ERPAL payment modality';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'payment_modality_id' => 'payment_modality_id',
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'payment_modality_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: ERPAL payment modality: Amount */
  $handler->display->display_options['fields']['field_amount']['id'] = 'field_amount';
  $handler->display->display_options['fields']['field_amount']['table'] = 'field_data_field_amount';
  $handler->display->display_options['fields']['field_amount']['field'] = 'field_amount';
  $handler->display->display_options['fields']['field_amount']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: ERPAL payment modality: Amount type */
  $handler->display->display_options['fields']['field_amount_type']['id'] = 'field_amount_type';
  $handler->display->display_options['fields']['field_amount_type']['table'] = 'field_data_field_amount_type';
  $handler->display->display_options['fields']['field_amount_type']['field'] = 'field_amount_type';
  /* Field: ERPAL payment modality: Due with */
  $handler->display->display_options['fields']['field_due_with']['id'] = 'field_due_with';
  $handler->display->display_options['fields']['field_due_with']['table'] = 'field_data_field_due_with';
  $handler->display->display_options['fields']['field_due_with']['field'] = 'field_due_with';
  /* Field: ERPAL payment modality: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'erpal_payment_modality';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Label';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Contextual filter: ERPAL payment modality: Payment modality ID */
  $handler->display->display_options['arguments']['payment_modality_id']['id'] = 'payment_modality_id';
  $handler->display->display_options['arguments']['payment_modality_id']['table'] = 'erpal_payment_modality';
  $handler->display->display_options['arguments']['payment_modality_id']['field'] = 'payment_modality_id';
  $handler->display->display_options['arguments']['payment_modality_id']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['payment_modality_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['payment_modality_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['payment_modality_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['payment_modality_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['payment_modality_id']['break_phrase'] = TRUE;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['erpal_payment_modality'] = $view;

  $view = new view();
  $view->name = 'erpal_line_items';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'commerce_line_item';
  $view->human_name = 'ERPAL line items';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Create invoice';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'rendered_entity' => 'rendered_entity',
    'views_bulk_operations' => 'views_bulk_operations',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'rendered_entity' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Not have line items which not added to invoice...';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Relationship: Commerce Line Item: Order ID */
  $handler->display->display_options['relationships']['order_id']['id'] = 'order_id';
  $handler->display->display_options['relationships']['order_id']['table'] = 'commerce_line_item';
  $handler->display->display_options['relationships']['order_id']['field'] = 'order_id';
  /* Field: Bulk operations: Commerce Line Item */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'commerce_line_item';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::erpal_invoice_create_invoice' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_revision' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_script_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          '_all_' => '_all_',
        ),
      ),
    ),
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'url' => '',
      ),
    ),
    'action::system_send_email_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Commerce Line Item: Title */
  $handler->display->display_options['fields']['line_item_title']['id'] = 'line_item_title';
  $handler->display->display_options['fields']['line_item_title']['table'] = 'commerce_line_item';
  $handler->display->display_options['fields']['line_item_title']['field'] = 'line_item_title';
  /* Field: Commerce Line item: Total */
  $handler->display->display_options['fields']['commerce_total']['id'] = 'commerce_total';
  $handler->display->display_options['fields']['commerce_total']['table'] = 'field_data_commerce_total';
  $handler->display->display_options['fields']['commerce_total']['field'] = 'commerce_total';
  $handler->display->display_options['fields']['commerce_total']['click_sort_column'] = 'amount';
  $handler->display->display_options['fields']['commerce_total']['settings'] = array(
    'calculation' => FALSE,
  );
  /* Contextual filter: Commerce Line item: Order (field_line_item_order) */
  $handler->display->display_options['arguments']['field_line_item_order_target_id']['id'] = 'field_line_item_order_target_id';
  $handler->display->display_options['arguments']['field_line_item_order_target_id']['table'] = 'field_data_field_line_item_order';
  $handler->display->display_options['arguments']['field_line_item_order_target_id']['field'] = 'field_line_item_order_target_id';
  $handler->display->display_options['arguments']['field_line_item_order_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_line_item_order_target_id']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['field_line_item_order_target_id']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['field_line_item_order_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_line_item_order_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_line_item_order_target_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Commerce Line Item: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'commerce_line_item';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'invoice' => 'invoice',
  );
  /* Filter criterion: Commerce Order: Order type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'commerce_order';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['relationship'] = 'order_id';
  $handler->display->display_options['filters']['type_1']['operator'] = 'not in';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'invoice' => 'invoice',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No line items found.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Commerce Line item: Payment modality */
  $handler->display->display_options['fields']['field_payment_modality']['id'] = 'field_payment_modality';
  $handler->display->display_options['fields']['field_payment_modality']['table'] = 'field_data_field_payment_modality';
  $handler->display->display_options['fields']['field_payment_modality']['field'] = 'field_payment_modality';
  $handler->display->display_options['fields']['field_payment_modality']['label'] = '';
  $handler->display->display_options['fields']['field_payment_modality']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_payment_modality']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_payment_modality']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_payment_modality']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_payment_modality']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_payment_modality']['separator'] = '+';
  /* Field: Commerce Line Item: Line item ID */
  $handler->display->display_options['fields']['line_item_id']['id'] = 'line_item_id';
  $handler->display->display_options['fields']['line_item_id']['table'] = 'commerce_line_item';
  $handler->display->display_options['fields']['line_item_id']['field'] = 'line_item_id';
  $handler->display->display_options['fields']['line_item_id']['label'] = 'ID';
  $handler->display->display_options['fields']['line_item_id']['exclude'] = TRUE;
  /* Field: Commerce Line Item: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'commerce_line_item';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  /* Field: Commerce Line Item: Title */
  $handler->display->display_options['fields']['line_item_title']['id'] = 'line_item_title';
  $handler->display->display_options['fields']['line_item_title']['table'] = 'commerce_line_item';
  $handler->display->display_options['fields']['line_item_title']['field'] = 'line_item_title';
  /* Field: Commerce Line item: Unit price */
  $handler->display->display_options['fields']['commerce_unit_price']['id'] = 'commerce_unit_price';
  $handler->display->display_options['fields']['commerce_unit_price']['table'] = 'field_data_commerce_unit_price';
  $handler->display->display_options['fields']['commerce_unit_price']['field'] = 'commerce_unit_price';
  $handler->display->display_options['fields']['commerce_unit_price']['click_sort_column'] = 'amount';
  $handler->display->display_options['fields']['commerce_unit_price']['settings'] = array(
    'calculation' => FALSE,
  );
  /* Field: Commerce Line Item: Quantity */
  $handler->display->display_options['fields']['quantity']['id'] = 'quantity';
  $handler->display->display_options['fields']['quantity']['table'] = 'commerce_line_item';
  $handler->display->display_options['fields']['quantity']['field'] = 'quantity';
  $handler->display->display_options['fields']['quantity']['precision'] = '0';
  /* Field: Global: View */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['label'] = 'Payment modality';
  $handler->display->display_options['fields']['view']['view'] = 'erpal_payment_modality';
  $handler->display->display_options['fields']['view']['display'] = 'block';
  $handler->display->display_options['fields']['view']['arguments'] = '[%field_payment_modality]';
  /* Field: Commerce Line item: Total */
  $handler->display->display_options['fields']['commerce_total_1']['id'] = 'commerce_total_1';
  $handler->display->display_options['fields']['commerce_total_1']['table'] = 'field_data_commerce_total';
  $handler->display->display_options['fields']['commerce_total_1']['field'] = 'commerce_total';
  $handler->display->display_options['fields']['commerce_total_1']['click_sort_column'] = 'amount';
  $handler->display->display_options['fields']['commerce_total_1']['settings'] = array(
    'calculation' => FALSE,
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Commerce Line Item: Line item ID */
  $handler->display->display_options['arguments']['line_item_id']['id'] = 'line_item_id';
  $handler->display->display_options['arguments']['line_item_id']['table'] = 'commerce_line_item';
  $handler->display->display_options['arguments']['line_item_id']['field'] = 'line_item_id';
  $handler->display->display_options['arguments']['line_item_id']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['line_item_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['line_item_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['line_item_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['line_item_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['line_item_id']['break_phrase'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  $export['erpal_line_items'] = $view;

  return $export;
}