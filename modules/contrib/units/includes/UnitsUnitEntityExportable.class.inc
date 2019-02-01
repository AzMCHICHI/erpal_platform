<?php

/**
 * Controller class for entity type 'units_unit'.
 */
class UnitsUnitEntityExportable extends EntityAPIControllerExportable {
  
  /**
   * Override create method.
   */
  public function create(array $values = array()) {
    $measure = menu_get_object('units_measure_machine_name', 3);
    if (!empty($measure)) {
      $values['measure'] = $measure->measure;
    }
    return parent::create($values);
  }
}
