<?php
/**
 * @file
 * rufzeichen_projekte.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function rufzeichen_projekte_taxonomy_default_vocabularies() {
  return array(
    'aufgaben_rufzeichen' => array(
      'name' => 'Aufgaben Rufzeichen',
      'machine_name' => 'aufgaben_rufzeichen',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'branche_des_kunden' => array(
      'name' => 'Branche des Kunden',
      'machine_name' => 'branche_des_kunden',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'technische_besonderheiten' => array(
      'name' => 'Technische Besonderheiten',
      'machine_name' => 'technische_besonderheiten',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
  );
}
