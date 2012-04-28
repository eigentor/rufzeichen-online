<?php
/**
 * @file
 * rufzeichen_projekte.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function rufzeichen_projekte_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function rufzeichen_projekte_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function rufzeichen_projekte_node_info() {
  $items = array(
    'projekt' => array(
      'name' => t('Projekt'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
