<?php
/**
 * @file
 * rufzeichen_projekte.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function rufzeichen_projekte_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'projekte_footer';
  $context->description = 'Footer mit Navigation für Projekt Full Node';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'projekt/*' => 'projekt/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-projekte_overview-block_1' => array(
          'module' => 'views',
          'delta' => 'projekte_overview-block_1',
          'region' => 'footer',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Footer mit Navigation für Projekt Full Node');
  $export['projekte_footer'] = $context;

  return $export;
}
