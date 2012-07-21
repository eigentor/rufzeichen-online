<?php
/**
 * @file
 * front_header_slideshow.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function front_header_slideshow_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'front_header_slider';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Front Header Slider';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Front Header Slider';
  $handler->display->display_options['use_more_text'] = 'Weiter';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Zurücksetzen';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['label'] = 'Nodequeue Slider Startseite';
  $handler->display->display_options['relationships']['nodequeue_rel']['required'] = 0;
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'header_slider_front' => 'header_slider_front',
    'projekte_queue' => 0,
    'queue_startseite' => 0,
  );
  /* Feld: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = '';
  $handler->display->display_options['fields']['counter']['exclude'] = TRUE;
  $handler->display->display_options['fields']['counter']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['counter']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['counter']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['counter']['alter']['external'] = 0;
  $handler->display->display_options['fields']['counter']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['counter']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['counter']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['counter']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['counter']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['counter']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['counter']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['counter']['alter']['html'] = 0;
  $handler->display->display_options['fields']['counter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['counter']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['counter']['hide_empty'] = 0;
  $handler->display->display_options['fields']['counter']['empty_zero'] = 0;
  $handler->display->display_options['fields']['counter']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  /* Feld: Inhalt: Link manuell */
  $handler->display->display_options['fields']['field_link_manual']['id'] = 'field_link_manual';
  $handler->display->display_options['fields']['field_link_manual']['table'] = 'field_data_field_link_manual';
  $handler->display->display_options['fields']['field_link_manual']['field'] = 'field_link_manual';
  $handler->display->display_options['fields']['field_link_manual']['label'] = '';
  $handler->display->display_options['fields']['field_link_manual']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_link_manual']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_link_manual']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_link_manual']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_link_manual']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_link_manual']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_link_manual']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_link_manual']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_link_manual']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_link_manual']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_link_manual']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_link_manual']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_link_manual']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_link_manual']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_link_manual']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_link_manual']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_link_manual']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_link_manual']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_link_manual']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_link_manual']['field_api_classes'] = 0;
  /* Feld: Inhalt: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Feld: Inhalt: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  /* Feld: Inhalt: Bild Header Slider */
  $handler->display->display_options['fields']['field_front_image_header_slider']['id'] = 'field_front_image_header_slider';
  $handler->display->display_options['fields']['field_front_image_header_slider']['table'] = 'field_data_field_front_image_header_slider';
  $handler->display->display_options['fields']['field_front_image_header_slider']['field'] = 'field_front_image_header_slider';
  $handler->display->display_options['fields']['field_front_image_header_slider']['label'] = '';
  $handler->display->display_options['fields']['field_front_image_header_slider']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_front_image_header_slider']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['field_front_image_header_slider']['alter']['path'] = '[field_link_manual]';
  $handler->display->display_options['fields']['field_front_image_header_slider']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_front_image_header_slider']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_front_image_header_slider']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_front_image_header_slider']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_front_image_header_slider']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_front_image_header_slider']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_front_image_header_slider']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_front_image_header_slider']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_front_image_header_slider']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_front_image_header_slider']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_front_image_header_slider']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_front_image_header_slider']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_front_image_header_slider']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_front_image_header_slider']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_front_image_header_slider']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_front_image_header_slider']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_front_image_header_slider']['settings'] = array(
    'image_style' => 'front_header_slider',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_front_image_header_slider']['field_api_classes'] = 0;
  /* Sort criterion: Nodequeue: Position */
  $handler->display->display_options['sorts']['position']['id'] = 'position';
  $handler->display->display_options['sorts']['position']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['sorts']['position']['field'] = 'position';
  $handler->display->display_options['sorts']['position']['relationship'] = 'nodequeue_rel';
  /* Filter criterion: Inhalt: Veröffentlicht */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Inhalt: Typ */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'slideshow_header_front' => 'slideshow_header_front',
  );

  /* Display: Block mit Display Suite Fields */
  $handler = $view->new_display('block', 'Block mit Display Suite Fields', 'block_2');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['slideshow_type'] = 'views_slideshow_cycle';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Standard',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'counter' => 0,
    'field_link_manual' => 0,
    'title' => 0,
    'body' => 0,
    'field_front_image_header_slider' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['enable'] = 1;
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'counter' => 'counter',
    'field_link_manual' => 0,
    'title' => 0,
    'body' => 0,
    'field_front_image_header_slider' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '5000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['pause_on_click'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '3000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['advanced_options'] = '{"cleartype":"$.support.opacity"}';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'ds_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $translatables['front_header_slider'] = array(
    t('Master'),
    t('Front Header Slider'),
    t('Weiter'),
    t('Anwenden'),
    t('Zurücksetzen'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Nodequeue Slider Startseite'),
    t('[field_link_manual]'),
    t('Block mit Display Suite Fields'),
  );
  $export['front_header_slider'] = $view;

  return $export;
}
