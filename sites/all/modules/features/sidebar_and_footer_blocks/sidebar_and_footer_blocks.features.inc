<?php
/**
 * @file
 * sidebar_and_footer_blocks.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function sidebar_and_footer_blocks_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "boxes" && $api == "box") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}

/**
 * Implements hook_views_api().
 */
function sidebar_and_footer_blocks_views_api() {
  return array("version" => "3.0");
}
