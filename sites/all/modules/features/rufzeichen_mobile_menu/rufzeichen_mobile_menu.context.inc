<?php
/**
 * @file
 * rufzeichen_mobile_menu.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function rufzeichen_mobile_menu_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'main_menu_mobile';
  $context->description = 'Das mobile Menü';
  $context->tag = 'rufzeichen';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-primary-links' => array(
          'module' => 'menu',
          'delta' => 'primary-links',
          'region' => 'main_menu_mobile',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Das mobile Menü');
  t('rufzeichen');
  $export['main_menu_mobile'] = $context;

  return $export;
}
