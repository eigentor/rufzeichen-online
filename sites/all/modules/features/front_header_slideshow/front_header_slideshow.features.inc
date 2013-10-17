<?php
/**
 * @file
 * front_header_slideshow.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function front_header_slideshow_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function front_header_slideshow_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_fe_nodequeue_export_fields().
 */
function front_header_slideshow_fe_nodequeue_export_fields() {
  $nodequeues = array();

  // Exported nodequeues: header_slider_front
  $nodequeues['header_slider_front'] = array(
    'qid' => 3,
    'name' => 'header_slider_front',
    'title' => 'Header Slider Startseite',
    'subqueue_title' => '',
    'size' => 0,
    'link' => '',
    'link_remove' => '',
    'owner' => 'nodequeue',
    'show_in_ui' => 1,
    'show_in_tab' => 1,
    'show_in_links' => 0,
    'reference' => 0,
    'reverse' => 0,
    'i18n' => 0,
    'subqueues' => 1,
    'types' => array(
      0 => 'slideshow_header_front',
    ),
    'roles' => array(),
    'count' => 0,
  );

  return $nodequeues;
}

/**
 * Implements hook_image_default_styles().
 */
function front_header_slideshow_image_default_styles() {
  $styles = array();

  // Exported image style: front_header_slider.
  $styles['front_header_slider'] = array(
    'name' => 'front_header_slider',
    'effects' => array(
      15 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 480,
          'height' => 332,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function front_header_slideshow_node_info() {
  $items = array(
    'slideshow_header_front' => array(
      'name' => t('Slideshow Header Startseite'),
      'base' => 'node_content',
      'description' => t('Für die Slideshow im Header der Startseite'),
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
  );
  return $items;
}
