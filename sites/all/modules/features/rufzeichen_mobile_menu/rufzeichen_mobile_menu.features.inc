<?php
/**
 * @file
 * rufzeichen_mobile_menu.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function rufzeichen_mobile_menu_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}
