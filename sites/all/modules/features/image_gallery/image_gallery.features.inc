<?php
/**
 * @file
 * image_gallery.features.inc
 */

/**
 * Implementation of hook_ctools_plugin_api().
 */
function image_gallery_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implementation of hook_views_api().
 */
function image_gallery_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}

/**
 * Implementation of hook_image_default_styles().
 */
function image_gallery_image_default_styles() {
  $styles = array();

  // Exported image style: gallery-overview-thumb
  $styles['gallery-overview-thumb'] = array(
    'name' => 'gallery-overview-thumb',
    'effects' => array(
      5 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '165',
          'height' => '165',
        ),
        'weight' => '1',
      ),
    ),
  );

  // Exported image style: mini-thumb-block
  $styles['mini-thumb-block'] = array(
    'name' => 'mini-thumb-block',
    'effects' => array(
      3 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '65',
          'height' => '65',
        ),
        'weight' => '1',
      ),
    ),
  );

  // Exported image style: square-image-gallery-node
  $styles['square-image-gallery-node'] = array(
    'name' => 'square-image-gallery-node',
    'effects' => array(
      1 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '145',
          'height' => '145',
        ),
        'weight' => '1',
      ),
    ),
  );

  return $styles;
}

/**
 * Implementation of hook_node_info().
 */
function image_gallery_node_info() {
  $items = array(
    'image_gallery' => array(
      'name' => t('Bildergalerie'),
      'base' => 'node_content',
      'description' => t('As the name sais, for creating Image galleries.'),
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
  );
  return $items;
}
