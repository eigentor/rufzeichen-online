<?php
/**
 * @file
 * sidebar_and_footer_blocks.box.inc
 */

/**
 * Implements hook_default_box().
 */
function sidebar_and_footer_blocks_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'footer_drupal_box';
  $box->plugin_key = 'simple';
  $box->title = 'Unsere Software';
  $box->description = 'Drupal Box Footer';
  $box->options = array(
    'body' => array(
      'value' => '<p class="footer-drupal-box-left">Wir setzen auf das Open-Source Content-Management-System Drupal. Die vieljährige Projekterfahrung mit der Software und enge Einbindung in die Community kommt Ihnen zu Gute. Wir benutzen nur dieses CMS, aber damit kennen wir uns wirklich aus.</p>
<p class="footer-drupal-box-right">[[{"type":"media","view_mode":"media_large","fid":"382","attributes":{"alt":"","class":"media-image","style":"width: 163px; height: 123px;"}}]]</p>
',
      'format' => '3',
    ),
    'additional_classes' => '',
  );
  $export['footer_drupal_box'] = $box;

  return $export;
}
