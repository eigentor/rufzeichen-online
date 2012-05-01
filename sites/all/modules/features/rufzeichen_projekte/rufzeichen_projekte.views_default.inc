<?php
/**
 * @file
 * rufzeichen_projekte.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function rufzeichen_projekte_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'images_project';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'images_project';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'images_project';
  $handler->display->display_options['use_more_text'] = 'Weiter';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Zurücksetzen';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
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
    'field_project_images_1' => 0,
    'field_project_images' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['enable'] = 1;
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_project_images_1' => 'field_project_images_1',
    'field_project_images' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['effect'] = 'none';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['transition_advanced'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '3000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  /* Feld: Inhalt: Bilder */
  $handler->display->display_options['fields']['field_project_images_1']['id'] = 'field_project_images_1';
  $handler->display->display_options['fields']['field_project_images_1']['table'] = 'field_data_field_project_images';
  $handler->display->display_options['fields']['field_project_images_1']['field'] = 'field_project_images';
  $handler->display->display_options['fields']['field_project_images_1']['label'] = '';
  $handler->display->display_options['fields']['field_project_images_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_project_images_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_project_images_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_project_images_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_project_images_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_project_images_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_project_images_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_project_images_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_project_images_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_project_images_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_project_images_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_project_images_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_project_images_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_project_images_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_project_images_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_project_images_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_project_images_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_project_images_1']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_project_images_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_project_images_1']['settings'] = array(
    'image_style' => 'project-thumb',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_project_images_1']['group_rows'] = 0;
  $handler->display->display_options['fields']['field_project_images_1']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_project_images_1']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_project_images_1']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_project_images_1']['field_api_classes'] = 0;
  /* Feld: Inhalt: Bilder */
  $handler->display->display_options['fields']['field_project_images']['id'] = 'field_project_images';
  $handler->display->display_options['fields']['field_project_images']['table'] = 'field_data_field_project_images';
  $handler->display->display_options['fields']['field_project_images']['field'] = 'field_project_images';
  $handler->display->display_options['fields']['field_project_images']['label'] = '';
  $handler->display->display_options['fields']['field_project_images']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_project_images']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_project_images']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_project_images']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_project_images']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_project_images']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_project_images']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_project_images']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_project_images']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_project_images']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_project_images']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_project_images']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_project_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_project_images']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_project_images']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_project_images']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_project_images']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_project_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_project_images']['type'] = 'colorbox';
  $handler->display->display_options['fields']['field_project_images']['settings'] = array(
    'colorbox_node_style' => 'project-big',
    'colorbox_image_style' => '',
    'colorbox_gallery' => 'post',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'auto',
  );
  $handler->display->display_options['fields']['field_project_images']['group_rows'] = 0;
  $handler->display->display_options['fields']['field_project_images']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_project_images']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_project_images']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_project_images']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_project_images']['field_api_classes'] = 0;
  /* Sort criterion: Inhalt: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Inhalt: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['nid']['not'] = 0;
  /* Filter criterion: Inhalt: Typ */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'projekt' => 'projekt',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');

  /* Display: Entity content */
  $handler = $view->new_display('entity_view', 'Entity content', 'entity_view_1');
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'projekt',
  );
  $translatables['images_project'] = array(
    t('Master'),
    t('images_project'),
    t('Weiter'),
    t('Anwenden'),
    t('Zurücksetzen'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Alle'),
    t('Block'),
    t('Entity content'),
  );
  $export['images_project'] = $view;

  $view = new view;
  $view->name = 'projekte_overview';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Projekte Übersicht';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Projekte Übersicht';
  $handler->display->display_options['use_more_text'] = 'Weiter';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Zurücksetzen';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Feld: Inhalt: Thumb für Übersicht */
  $handler->display->display_options['fields']['field_project_thumb_overview']['id'] = 'field_project_thumb_overview';
  $handler->display->display_options['fields']['field_project_thumb_overview']['table'] = 'field_data_field_project_thumb_overview';
  $handler->display->display_options['fields']['field_project_thumb_overview']['field'] = 'field_project_thumb_overview';
  $handler->display->display_options['fields']['field_project_thumb_overview']['label'] = '';
  $handler->display->display_options['fields']['field_project_thumb_overview']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_project_thumb_overview']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_project_thumb_overview']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_project_thumb_overview']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_project_thumb_overview']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_project_thumb_overview']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_project_thumb_overview']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_project_thumb_overview']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_project_thumb_overview']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_project_thumb_overview']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_project_thumb_overview']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_project_thumb_overview']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_project_thumb_overview']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_project_thumb_overview']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_project_thumb_overview']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_project_thumb_overview']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_project_thumb_overview']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_project_thumb_overview']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_project_thumb_overview']['settings'] = array(
    'image_style' => 'projekt-overview',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_project_thumb_overview']['field_api_classes'] = 0;
  /* Sort criterion: Inhalt: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'projekt' => 'projekt',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'projekte-bersicht';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $translatables['projekte_overview'] = array(
    t('Master'),
    t('Projekte Übersicht'),
    t('Weiter'),
    t('Anwenden'),
    t('Zurücksetzen'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Page'),
    t('Block'),
  );
  $export['projekte_overview'] = $view;

  return $export;
}
