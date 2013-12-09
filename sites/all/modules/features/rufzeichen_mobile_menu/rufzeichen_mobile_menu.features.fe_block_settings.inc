<?php
/**
 * @file
 * rufzeichen_mobile_menu.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function rufzeichen_mobile_menu_default_fe_block_settings() {
  $export = array();

  // bartik
  $theme = array();

  $theme['block-mobile_menu_button'] = array(
    'module' => 'block',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => 0,
    'region' => '',
    'custom' => 0,
    'visibility' => 0,
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
    'css' => NULL,
    'js' => NULL,
    'machine_name' => 'mobile_menu_button',
  );

  $export['bartik'] = $theme;

  // basic
  $theme = array();

  $theme['block-mobile_menu_button'] = array(
    'module' => 'block',
    'theme' => 'basic',
    'status' => 0,
    'weight' => 0,
    'region' => '',
    'custom' => 0,
    'visibility' => 0,
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
    'css' => NULL,
    'js' => NULL,
    'machine_name' => 'mobile_menu_button',
  );

  $export['basic'] = $theme;

  // dandelion_rufzeichen
  $theme = array();

  $theme['block-mobile_menu_button'] = array(
    'module' => 'block',
    'theme' => 'dandelion_rufzeichen',
    'status' => 1,
    'weight' => 0,
    'region' => 'mobile_menu_controls',
    'custom' => 0,
    'visibility' => 0,
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
    'css' => NULL,
    'js' => NULL,
    'machine_name' => 'mobile_menu_button',
  );

  $export['dandelion_rufzeichen'] = $theme;

  // garland
  $theme = array();

  $theme['block-mobile_menu_button'] = array(
    'module' => 'block',
    'theme' => 'garland',
    'status' => 0,
    'weight' => 0,
    'region' => '',
    'custom' => 0,
    'visibility' => 0,
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
    'css' => NULL,
    'js' => NULL,
    'machine_name' => 'mobile_menu_button',
  );

  $export['garland'] = $theme;

  $theme_default = variable_get('theme_default', 'garland');
  $themes = list_themes();
  foreach ($export as $theme_key => $settings) {
    if ($theme_key != $theme_default && empty($themes[$theme_key]->status)) {
      unset($export[$theme_key]);
    }
  }
  return $export;
}
