<?php

/**
 * @file
 * Unit suggester plugin that always suggests the same unit.
 */

$plugin = array(
  'title' => t('Hard Coded'),
  'description' => t('Always output one pre-configured unit.'),
  'applicable callback' => TRUE,
  'enabled callback' => NULL,
  'disabled callback' => NULL,
  'settings form callback' => 'mvf_unit_suggester_hardcoded_form',
  'suggest unit callback' => 'mvf_unit_suggester_hardcoded_unit',
);

/**
 * Settings form for 'hardcoded' mvf unit suggester plugin.
 *
 * @param object $measure
 *   Fully loaded 'units_measure' entity, on which the MVF field is set up
 * @param array $field
 *   Field API field definition array of MVF field
 * @param array $instance
 *   Field API instance definition array of MVF field
 * @param array $settings
 *   Array of currently stored settings in the provided $instance, you are
 *   encouraged to use it as source of #default_value for the form elements
 *   you are defining in this form
 * @param array $plugin
 *   cTools plugin definition array of your unit suggester plugin
 *
 * @return array
 *   Field API form elements definition representing additional settings that
 *   this unit suggester needs for its functionality
 */
function mvf_unit_suggester_hardcoded_form($measure, $field, $instance, $settings = array(), $plugin) {
  $form = array();

  $options = array();
  if ($instance['entity_type'] == 'ctools') {
    foreach ($field['bundles'] as $type => $bundles) {
      foreach ($bundles as $bundle) {
        $instance = field_read_instance($type, $field['field_name'], $bundle);
        mvf_target_bundle($field, $instance);
        $measure = mvf_measure_extract($field);
        foreach (units_unit_by_measure_load_multiple($measure) as $unit) {
          $options[reset(entity_extract_ids('units_unit', $unit))] = entity_label('units_unit', $unit);
        }
      }
    }
  }
  else {
    foreach (units_unit_by_measure_load_multiple($measure) as $unit) {
      $options[reset(entity_extract_ids('units_unit', $unit))] = entity_label('units_unit', $unit);
    }
  }

  $form['unit'] = array(
    '#type' => 'select',
    '#title' => t('Output Unit'),
    '#options' => $options,
    '#default_value' => isset($settings['unit']) ? $settings['unit'] : NULL,
  );

  return $form;
}

/**
 * Suggest output unit for a MVF field.
 *
 * @param array $items
 *   Array of MVF field items for which you are requested to suggest output
 *   unit
 * @param array $field
 *   Field API field definition array of MVF field
 * @param array $instance
 *   Field API instance definition array of MVF field
 * @param object $entity
 *   Fully loaded entity, for which you are requested to suggest output unit
 * @param string $entity_type
 *   Entity type of $entity
 * @param array $settings
 *   Array of currently stored settings in the provided $instance, you are
 *   encouraged to use it when deciding what output unit to suggest
 * @param array $plugin
 *   cTools plugin definition array of your unit suggester plugin
 *
 * @return int
 *   ID of a 'units_unit' entity, that you suggest as output unit. Two
 *   additional constants can be used as output here:
 *   - MVF_UNIT_ORIGINAL: means to output $items as they are, in whatever
 *     units they were entered
 *   - MVF_UNIT_UNKNOWN: means you cannot make any good suggestion for output
 *     unit
 */
function mvf_unit_suggester_hardcoded_unit($items, $field, $instance, $entity, $entity_type, $settings = array(), $plugin) {
  return isset($settings['unit']) ? $settings['unit'] : MVF_UNIT_UNKNOWN;
}
