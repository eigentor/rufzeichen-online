<?php
/**
 * @file
 * rufzeichen_projekte.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function rufzeichen_projekte_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|projekt|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'projekt';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|projekt|full'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function rufzeichen_projekte_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'ds_views|images_project-block-fields|default';
  $ds_layout->entity_type = 'ds_views';
  $ds_layout->bundle = 'images_project-block-fields';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'regions' => array(),
    'fields' => array(),
    'classes' => array(),
    'wrappers' => array(),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
  );
  $export['ds_views|images_project-block-fields|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|projekt|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'projekt';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_2col_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'header' => array(
        0 => 'title',
        8 => 'images_project_entity_view_1',
      ),
      'left' => array(
        1 => 'body',
      ),
      'right' => array(
        2 => 'field_project_url',
        3 => 'group_properties_icons',
        4 => 'field_project_business_area',
        5 => 'field_project_text_secondary',
        6 => 'field_project_task',
        7 => 'field_project_technical_details',
      ),
    ),
    'fields' => array(
      'title' => 'header',
      'body' => 'left',
      'field_project_url' => 'right',
      'group_properties_icons' => 'right',
      'field_project_business_area' => 'right',
      'field_project_text_secondary' => 'right',
      'field_project_task' => 'right',
      'field_project_technical_details' => 'right',
      'images_project_entity_view_1' => 'header',
    ),
    'classes' => array(),
    'wrappers' => array(
      'header' => 'div',
      'left' => 'div',
      'right' => 'div',
      'footer' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'hide_page_title' => '1',
    'page_option_title' => '',
  );
  $export['node|projekt|full'] = $ds_layout;

  return $export;
}
