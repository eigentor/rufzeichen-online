<?php
/**
 * @file
 * front_header_slideshow.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function front_header_slideshow_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'ds_views|front_header_slider-block_2-fields|default';
  $ds_fieldsetting->entity_type = 'ds_views';
  $ds_fieldsetting->bundle = 'front_header_slider-block_2-fields';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'body' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_front_image_header_slider' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['ds_views|front_header_slider-block_2-fields|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|slideshow_header_front|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'slideshow_header_front';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|slideshow_header_front|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|slideshow_header_front|front_header_slider';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'slideshow_header_front';
  $ds_fieldsetting->view_mode = 'front_header_slider';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|slideshow_header_front|front_header_slider'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|slideshow_header_front|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'slideshow_header_front';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|slideshow_header_front|full'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function front_header_slideshow_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'ds_views|front_header_slider-block_2-fields|default';
  $ds_layout->entity_type = 'ds_views';
  $ds_layout->bundle = 'front_header_slider-block_2-fields';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_front_image_header_slider',
      ),
      'right' => array(
        1 => 'title',
        2 => 'body',
      ),
    ),
    'fields' => array(
      'field_front_image_header_slider' => 'left',
      'title' => 'right',
      'body' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'hide_page_title' => '0',
    'page_option_title' => '',
  );
  $export['ds_views|front_header_slider-block_2-fields|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|slideshow_header_front|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'slideshow_header_front';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'right' => array(
        0 => 'title',
        1 => 'body',
      ),
    ),
    'fields' => array(
      'title' => 'right',
      'body' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
  );
  $export['node|slideshow_header_front|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|slideshow_header_front|front_header_slider';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'slideshow_header_front';
  $ds_layout->view_mode = 'front_header_slider';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_front_image_header_slider',
      ),
      'right' => array(
        1 => 'title',
        2 => 'body',
      ),
    ),
    'fields' => array(
      'field_front_image_header_slider' => 'left',
      'title' => 'right',
      'body' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
  );
  $export['node|slideshow_header_front|front_header_slider'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|slideshow_header_front|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'slideshow_header_front';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_front_image_header_slider',
      ),
      'right' => array(
        1 => 'title',
        2 => 'body',
        3 => 'field_link_manual',
      ),
    ),
    'fields' => array(
      'field_front_image_header_slider' => 'left',
      'title' => 'right',
      'body' => 'right',
      'field_link_manual' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'hide_page_title' => '0',
    'page_option_title' => '',
  );
  $export['node|slideshow_header_front|full'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function front_header_slideshow_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'front_header_slider';
  $ds_view_mode->label = 'Front Header Slider';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['front_header_slider'] = $ds_view_mode;

  return $export;
}
