<?php
/**
 * @file
 * rufzeichen_zitat_der_woche.features.inc
 */

/**
 * Implementation of hook_ctools_plugin_api().
 */
function rufzeichen_zitat_der_woche_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implementation of hook_views_api().
 */
function rufzeichen_zitat_der_woche_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}

/**
 * Implementation of hook_node_info().
 */
function rufzeichen_zitat_der_woche_node_info() {
  $items = array(
    'zitat' => array(
      'name' => t('Zitat der Woche'),
      'base' => 'node_content',
      'description' => t('Für das Zitat der Woche auf der Startseite'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
