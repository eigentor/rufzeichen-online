<?php
/**
 * @file
 * rufzeichen_zitat_der_woche.features.fe_block_settings.inc
 */

/**
 * Implementation of hook_default_fe_block_settings().
 */
function rufzeichen_zitat_der_woche_default_fe_block_settings() {
  $export = array();

  // bartik
  $theme = array();

  $theme['views-zitat_der_woche-block'] = array(
    'module' => 'views',
    'delta' => 'zitat_der_woche-block',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
    'css' => NULL,
    'js' => NULL,
  );

  $export['bartik'] = $theme;

  // basic
  $theme = array();

  $theme['views-zitat_der_woche-block'] = array(
    'module' => 'views',
    'delta' => 'zitat_der_woche-block',
    'theme' => 'basic',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
    'css' => NULL,
    'js' => NULL,
  );

  $export['basic'] = $theme;

  // dandelion_rufzeichen
  $theme = array();

  $theme['views-zitat_der_woche-block'] = array(
    'module' => 'views',
    'delta' => 'zitat_der_woche-block',
    'theme' => 'dandelion_rufzeichen',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
    'css' => NULL,
    'js' => NULL,
  );

  $export['dandelion_rufzeichen'] = $theme;

  // garland
  $theme = array();

  $theme['views-zitat_der_woche-block'] = array(
    'module' => 'views',
    'delta' => 'zitat_der_woche-block',
    'theme' => 'garland',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
    'css' => NULL,
    'js' => NULL,
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
