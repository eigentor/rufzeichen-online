<?php
/**
 * @file
 * rufzeichen_mobile_menu.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function rufzeichen_mobile_menu_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Mobile Menu Button';
  $fe_block_boxes->format = '3';
  $fe_block_boxes->machine_name = 'mobile_menu_button';
  $fe_block_boxes->body = '<p><a href="#">&nbsp;</a></p>
';

  $export['mobile_menu_button'] = $fe_block_boxes;

  return $export;
}
