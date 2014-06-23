<?php

/**
 * @file
 * Contains default fields and field instances for ERPAL CRM module.
 */

/**
 * Provides base fields for all activity bundles.
 */
function _erpal_crm_activity_type_common_fields() {

  $fields['field_activity_customer'] = array(
    'field_name' => 'field_activity_customer',
    'active' => TRUE,
    'cardinality' => 1,
    'deleted' => FALSE,
    'entity_types' => array('crm_core_activity'),
    'locked' => FALSE,
    'module' => 'entityreference',
    'settings' => array(
      'handler' => 'base',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'sort' => array(
          'type' => 'none',
        ),
        'target_bundles' => array(),
      ),
      'target_type' => 'crm_core_contact',
    ),
    'translatable' => FALSE,
    'type' => 'entityreference',
  );

  $fields['field_activity_next_contact_date'] = array(
    'field_name' => 'field_activity_next_contact_date',
    'active' => TRUE,
    'cardinality' => 1,
    'deleted' => FALSE,
    'entity_types' => array('crm_core_activity'),
    'locked' => FALSE,
    'module' => 'entityreference',
    'settings' => array(
      'handler' => 'base',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'sort' => array(
          'type' => 'none',
        ),
        'target_bundles' => array(
          0 => 'single',
        ),
      ),
      'target_type' => 'date_item',
    ),
    'translatable' => FALSE,
    'type' => 'entityreference',
  );

  return $fields;
}

/**
 * Provides base fields.
 *
 * for all activity bundles except "sales_process" bundle.
 */
function _erpal_crm_activity_type_default_fields() {

  $fields['field_activity_sales_process'] = array(
    'field_name' => 'field_activity_sales_process',
    'active' => TRUE,
    'cardinality' => 1,
    'deleted' => FALSE,
    'entity_types' => array('crm_core_activity'),
    'locked' => FALSE,
    'module' => 'entityreference',
    'settings' => array(
      'handler' => 'base',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'sort' => array(
          'type' => 'none',
        ),
        'target_bundles' => array(
          'sales_process' => 'sales_process',
        ),
      ),
      'target_type' => 'crm_core_activity',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  $fields['field_activity_references'] = array(
    'field_name' => 'field_activity_references',
    'active' => TRUE,
    'cardinality' => 1,
    'deleted' => FALSE,
    'entity_types' => array('crm_core_activity'),
    'locked' => FALSE,
    'module' => 'entityreference',
    'settings' => array(
      'handler' => 'base',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'sort' => array(
          'type' => 'none',
        ),
        'target_bundles' => array(),
      ),
      'target_type' => 'node',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  $fields['field_activity_event_date'] = array(
    'field_name' => 'field_activity_event_date',
    'active' => TRUE,
    'cardinality' => 1,
    'deleted' => FALSE,
    'entity_types' => array('crm_core_activity'),
    'locked' => FALSE,
    'module' => 'entityreference',
    'settings' => array(
      'handler' => 'base',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'sort' => array(
          'type' => 'none',
        ),
        'target_bundles' => array(
          0 => 'single',
        ),
      ),
      'target_type' => 'date_item',
    ),
    'translatable' => FALSE,
    'type' => 'entityreference',
  );

  return $fields;
}

/**
 * Provides base fields for all sales process bundle of activity entity.
 */
function _erpal_crm_activity_type_sales_process_fields() {

  $fields['field_activity_main_contact'] = array(
    'field_name' => 'field_activity_main_contact',
    'active' => TRUE,
    'cardinality' => 1,
    'deleted' => FALSE,
    'entity_types' => array('crm_core_activity'),
    'locked' => FALSE,
    'module' => 'entityreference',
    'settings' => array(
      'handler' => 'base',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'sort' => array(
          'type' => 'none',
        ),
        'target_bundles' => array(),
      ),
      'target_type' => 'crm_core_contact',
    ),
    'translatable' => FALSE,
    'type' => 'entityreference',
  );

  $fields['field_activity_status'] = array(
    'field_name' => 'field_activity_status',
    'active' => TRUE,
    'cardinality' => 1,
    'deleted' => FALSE,
    'entity_types' => array('crm_core_activity'),
    'locked' => FALSE,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        1 => 'In progress',
        2 => 'Completed',
        3 => 'Aborted',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );
  $fields['field_activity_sales_forecast'] = array(
    'active' => TRUE,
    'cardinality' => 1,
    'deleted' => FALSE,
    'entity_types' => array(),
    'field_name' => 'field_activity_sales_forecast',
    'foreign keys' => array(
      'erpal_budget' => array(
        'columns' => array(
          'target_id' => 'budget_id',
        ),
        'table' => 'erpal_budget',
      ),
    ),
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => FALSE,
    'module' => 'entityreference',
    'settings' => array(
      'handler' => 'base',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'sort' => array(
          'type' => 'none',
        ),
        'target_bundles' => array(
          'sales_forecast' => 'sales_forecast',
        ),
      ),
      'target_type' => 'erpal_budget',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  return $fields;
}

/**
 * Provides base fields for all contact bundles.
 */
function _erpal_crm_contact_type_default_fields() {

  $fields['field_contact_data_privacy'] = array(
    'active' => TRUE,
    'cardinality' => 1,
    'deleted' => FALSE,
    'entity_types' => array('field_collection_item'),
    'field_name' => 'field_contact_data_privacy',
    'locked' => FALSE,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        1 => 'Private',
        2 => 'Public',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => FALSE,
    'type' => 'list_text',
  );

  $fields['field_contact_email'] = array(
    'active' => TRUE,
    'cardinality' => 1,
    'deleted' => FALSE,
    'entity_types' => array('field_collection_item'),
    'field_name' => 'field_contact_email',
    'locked' => FALSE,
    'module' => 'email',
    'settings' => array(),
    'translatable' => FALSE,
    'type' => 'email',
  );

  $fields['field_contact_email_bundle'] = array(
    'active' => TRUE,
    'cardinality' => -1,
    'deleted' => FALSE,
    'entity_types' => array('crm_core_contact'),
    'field_name' => 'field_contact_email_bundle',
    'locked' => FALSE,
    'module' => 'field_collection',
    'settings' => array(
      'hide_blank_items' => 1,
      'path' => '',
    ),
    'translatable' => FALSE,
    'type' => 'field_collection',
  );

  $fields['field_contact_phone'] = array(
    'active' => TRUE,
    'cardinality' => 1,
    'deleted' => FALSE,
    'entity_types' => array('field_collection_item'),
    'field_name' => 'field_contact_phone',
    'locked' => FALSE,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => FALSE,
    'type' => 'text',
  );

  $fields['field_contact_phone_bundle'] = array(
    'active' => TRUE,
    'cardinality' => -1,
    'deleted' => FALSE,
    'entity_types' => array('crm_core_contact'),
    'field_name' => 'field_contact_phone_bundle',
    'locked' => FALSE,
    'module' => 'field_collection',
    'settings' => array(
      'hide_blank_items' => 1,
      'path' => '',
    ),
    'translatable' => FALSE,
    'type' => 'field_collection',
  );

  $fields['field_contact_picture'] = array(
    'active' => TRUE,
    'cardinality' => 1,
    'deleted' => FALSE,
    'entity_types' => array('crm_core_contact'),
    'field_name' => 'field_contact_picture',
    'locked' => FALSE,
    'module' => 'image',
    'settings' => array(
      'default_image' => 0,
      'uri_scheme' => 'public',
    ),
    'translatable' => FALSE,
    'type' => 'image',
  );

  $fields['field_contact_url'] = array(
    'active' => TRUE,
    'cardinality' => 1,
    'deleted' => FALSE,
    'entity_types' => array('field_collection_item'),
    'field_name' => 'field_contact_url',
    'locked' => FALSE,
    'module' => 'url',
    'settings' => array(),
    'translatable' => FALSE,
    'type' => 'url',
  );

  $fields['field_contact_url_bundle'] = array(
    'active' => TRUE,
    'cardinality' => -1,
    'deleted' => FALSE,
    'entity_types' => array('crm_core_contact'),
    'field_name' => 'field_contact_url_bundle',
    'locked' => FALSE,
    'module' => 'field_collection',
    'settings' => array(
      'hide_blank_items' => 1,
      'path' => '',
    ),
    'translatable' => FALSE,
    'type' => 'field_collection',
  );

  $fields['field_contact_relation'] = array(
    'active' => TRUE,
    'cardinality' => -1,
    'deleted' => FALSE,
    'entity_types' => array(),
    'field_name' => 'field_contact_relation',
    'foreign keys' => array(
      'relation' => array(
        'columns' => array(
          'target_id' => 'rid',
        ),
        'table' => 'relation',
      ),
    ),
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => FALSE,
    'module' => 'entityreference',
    'settings' => array(
      'handler' => 'base',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'sort' => array(
          'type' => 'none',
        ),
        'target_bundles' => array(
          'crm_employee' => 'crm_employee',
        ),
      ),
      'target_type' => 'relation',
    ),
    'translatable' => FALSE,
    'type' => 'entityreference',
  );

  return $fields;
}

/**
 * Provides base fields for all "sales_forecast" bundle of erpal_budget entity.
 */
function _erpal_crm_erpal_budget_type_sales_forecast_default_fields() {

  $fields['field_sales_forecast_chance'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_sales_forecast_chance',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => '0%',
        1 => '10%',
        2 => '20%',
        3 => '30%',
        4 => '40%',
        5 => '50%',
        6 => '60%',
        7 => '70%',
        8 => '80%',
        9 => '90%',
        10 => '100%',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  $fields['field_sales_forecast_date'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_sales_forecast_date',
    'foreign keys' => array(
      'date_item' => array(
        'columns' => array(
          'target_id' => 'diid',
        ),
        'table' => 'date_item',
      ),
    ),
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'handler' => 'base',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'sort' => array(
          'type' => 'none',
        ),
        'target_bundles' => array(
          0 => 'single',
        ),
      ),
      'target_type' => 'date_item',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  return $fields;
}

/**
 * Provides field instances for all activity bundles.
 */
function _erpal_crm_activity_type_common_field_instances($type) {

  $instances['field_activity_customer'] = array(
    'bundle' => $type,
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'crm_core_activity',
    'field_name' => 'field_activity_customer',
    'label' => 'Customer',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 1,
    ),
  );

  $instances['field_activity_next_contact_date'] = array(
    'bundle' => $type,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'entityreference',
        'settings' => array(
          'links' => 0,
          'view_mode' => 'default',
        ),
        'type' => 'entityreference_entity_view',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'crm_core_activity',
    'field_name' => 'field_activity_next_contact_date',
    'label' => 'Next contact date',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'inline_entity_form',
      'settings' => array(
        'fields' => array(),
        'type_settings' => array(
          'allow_existing' => 0,
          'delete_references' => 1,
          'label_plural' => 'entities',
          'label_singular' => 'entity',
          'match_operator' => 'CONTAINS',
          'override_labels' => 0,
        ),
      ),
      'type' => 'inline_entity_form_single',
      'weight' => 7,
    ),
  );

  return $instances;
}

/**
 * Provides field instances.
 *
 * for all activity bundles except "sales_process" bundle.
 */
function _erpal_crm_activity_type_default_field_instances($type) {

  $instances['field_activity_event_date'] = array(
    'bundle' => $type,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'entityreference',
        'settings' => array(
          'links' => 0,
          'view_mode' => 'default',
        ),
        'type' => 'entityreference_entity_view',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'crm_core_activity',
    'field_name' => 'field_activity_event_date',
    'label' => 'Date',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'inline_entity_form',
      'settings' => array(
        'fields' => array(),
        'type_settings' => array(
          'allow_existing' => FALSE,
          'delete_references' => 1,
          'label_plural' => 'entities',
          'label_singular' => 'entity',
          'match_operator' => 'CONTAINS',
          'override_labels' => 0,
        ),
      ),
      'type' => 'inline_entity_form_single',
      'weight' => 3,
    ),
  );

  $instances['field_activity_references'] = array(
    'bundle' => $type,
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'entityreference',
        'settings' => array(
          'link' => 1,
        ),
        'type' => 'entityreference_label',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'crm_core_activity',
    'field_name' => 'field_activity_references',
    'label' => 'Refers to',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 6,
    ),
  );

  $instances['field_activity_sales_process'] = array(
    'bundle' => $type,
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'entityreference',
        'settings' => array(
          'link' => 1,
        ),
        'type' => 'entityreference_label',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'crm_core_activity',
    'field_name' => 'field_activity_sales_process',
    'label' => 'Sales process',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 5,
    ),
  );

  return $instances;
}

/**
 * Provides field instances for "sales_process" bundle of activity entity.
 */
function _erpal_crm_activity_type_sales_process_field_instances($type) {

  $instances['field_activity_main_contact'] = array(
    'bundle' => $type,
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'crm_core_activity',
    'field_name' => 'field_activity_main_contact',
    'label' => 'Main contact',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete_tags',
      'weight' => 3,
    ),
  );

  $instances['field_activity_status'] = array(
    'bundle' => $type,
    'default_value' => array(
      0 => array(
        'value' => 1,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'crm_core_activity',
    'field_name' => 'field_activity_status',
    'label' => 'Status',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 1,
    ),
  );

  $instances['field_activity_sales_forecast'] = array(
    'bundle' => 'sales_process',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'links' => 0,
          'view_mode' => 'default',
        ),
        'type' => 'entityreference_entity_view',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'crm_core_activity',
    'field_name' => 'field_activity_sales_forecast',
    'label' => 'Sales forecast',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'inline_entity_form',
      'settings' => array(
        'fields' => array(),
        'type_settings' => array(
          'allow_existing' => FALSE,
          'delete_references' => 1,
          'label_plural' => 'budgets',
          'label_singular' => 'budget',
          'match_operator' => 'CONTAINS',
          'override_labels' => 0,
        ),
      ),
      'type' => 'inline_entity_form_single',
      'weight' => 6,
    ),
  );

  return $instances;
}

/**
 * Provides field instances for all contact bundles.
 */
function _erpal_crm_contact_type_default_instances($type) {

  $instances['field_contact_email_bundle'] = array(
    'bundle' => $type,
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'field_collection',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_fields',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'crm_core_contact',
    'field_name' => 'field_contact_email_bundle',
    'label' => 'Email',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_embed',
      'weight' => 3,
    ),
  );

  $instances['field_contact_phone_bundle'] = array(
    'bundle' => $type,
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'field_collection',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_fields',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'crm_core_contact',
    'field_name' => 'field_contact_phone_bundle',
    'label' => 'Phone',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_embed',
      'weight' => 2,
    ),
  );

  $instances['field_contact_url_bundle'] = array(
    'bundle' => $type,
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'field_collection',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_fields',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'crm_core_contact',
    'field_name' => 'field_contact_url_bundle',
    'label' => 'URL',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_embed',
      'weight' => 4,
    ),
  );

  $instances['field_contact_picture'] = array(
    'bundle' => $type,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'crm_core_contact',
    'field_name' => 'field_contact_picture',
    'label' => $type == 'individual' ? 'Picture' : 'Logo',
    'required' => 1,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => 'images/contact',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '5 MB',
      'max_resolution' => '2000x2000',
      'min_resolution' => '100x100',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 1,
    ),
  );

  $instances['field_contact_relation'] = array(
    'bundle' => $type,
    'default_value_function' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'crm_core_contact',
    'field_name' => 'field_contact_relation',
    'label' => 'Relation',
    'required' => 0,
    'settings' => array(
      'behaviors' => array(
        'prepopulate' => array(
          'status' => 0,
        ),
      ),
      'dfv' => array(
        'parent' => '',
        'status' => 0,
        'view' => '',
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'inline_entity_form',
      'settings' => array(
        'fields' => array(),
        'type_settings' => array(
          'allow_existing' => 0,
          'delete_references' => 0,
          'label_plural' => 'entities',
          'label_singular' => 'entity',
          'match_operator' => 'CONTAINS',
          'override_labels' => 0,
        ),
      ),
      'type' => 'inline_entity_form',
      'weight' => 7,
    ),
  );

  return $instances;
}

/**
 * Provides field instances.
 *
 * for all field collections that are placed in contact entity bundles.
 *
 * @param string $field_name
 *   Name of field_collection field.
 */
function _erpal_crm_contact_type_field_collection_instances($field_name) {

  $instances['field_contact_data_privacy'] = array(
    'bundle' => $field_name,
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_contact_data_privacy',
    'label' => 'Data privacy',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 1,
    ),
  );

  if ($field_name == 'field_contact_email_bundle') {

    $instances['field_contact_email'] = array(
      'bundle' => 'field_contact_email_bundle',
      'default_value' => NULL,
      'deleted' => 0,
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'email',
          'settings' => array(),
          'type' => 'email_default',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'field_collection_item',
      'field_name' => 'field_contact_email',
      'label' => 'Email',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'email',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'email_textfield',
        'weight' => 0,
      ),
    );
  }
  elseif ($field_name == 'field_contact_phone_bundle') {

    $instances['field_contact_phone'] = array(
      'bundle' => 'field_contact_phone_bundle',
      'default_value' => NULL,
      'deleted' => 0,
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'field_collection_item',
      'field_name' => 'field_contact_phone',
      'label' => 'Phone',
      'required' => 0,
      'settings' => array(
        'text_processing' => 0,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => 2,
      ),
    );
  }
  elseif ($field_name == 'field_contact_url_bundle') {

    $instances['field_contact_url'] = array(
      'bundle' => 'field_contact_url_bundle',
      'default_value' => NULL,
      'deleted' => 0,
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'url',
          'settings' => array(
            'nofollow' => FALSE,
            'trim_length' => 80,
          ),
          'type' => 'url_default',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'field_collection_item',
      'field_name' => 'field_contact_url',
      'label' => 'URL',
      'required' => 0,
      'settings' => array(
        'title_fetch' => 0,
        'title_field' => 0,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'url',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'url_external',
        'weight' => 0,
      ),
    );
  }

  return $instances;
}

/**
 * Provides field instances for "sales_forecast" bundle of erpal_budget entity.
 */
function _erpal_crm_erpal_budget_type_sales_forecast_default_instances() {

  $instances['field_sales_forecast_chance'] = array(
    'bundle' => 'sales_forecast',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'erpal_budget',
    'field_name' => 'field_sales_forecast_chance',
    'label' => 'Chance',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 1,
    ),
  );

  $instances['field_sales_forecast_date'] = array(
    'bundle' => 'sales_forecast',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'links' => 0,
          'view_mode' => 'default',
        ),
        'type' => 'entityreference_entity_view',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'erpal_budget',
    'field_name' => 'field_sales_forecast_date',
    'label' => 'Expected date',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'inline_entity_form',
      'settings' => array(
        'fields' => array(),
        'type_settings' => array(
          'allow_existing' => FALSE,
          'delete_references' => 1,
          'label_plural' => 'entities',
          'label_singular' => 'entity',
          'match_operator' => 'CONTAINS',
          'override_labels' => 0,
        ),
      ),
      'type' => 'inline_entity_form_single',
      'weight' => 2,
    ),
  );

  return $instances;
}