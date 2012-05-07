<?php
/**
 * @file
 * sidebar_and_footer_blocks.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function sidebar_and_footer_blocks_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'footer_neu';
  $context->description = 'Footer mit Teaser-Content';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '~projekt/*' => '~projekt/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-Newsblock_Startseite-block_2' => array(
          'module' => 'views',
          'delta' => 'Newsblock_Startseite-block_2',
          'region' => 'footer',
          'weight' => '-10',
        ),
        'views-Newsblock_Startseite-block_3' => array(
          'module' => 'views',
          'delta' => 'Newsblock_Startseite-block_3',
          'region' => 'footer',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Footer mit Teaser-Content');
  $export['footer_neu'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'sidebar_new';
  $context->description = 'Rechte Seitenleiste';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '~<front>' => '~<front>',
        '~projekt/*' => '~projekt/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-Newsblock_Startseite-block_4' => array(
          'module' => 'views',
          'delta' => 'Newsblock_Startseite-block_4',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Rechte Seitenleiste');
  $export['sidebar_new'] = $context;

  return $export;
}
