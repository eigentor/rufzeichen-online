<?php
/**
 * @file
 * image_gallery.views_default.inc
 */

/**
 * Implementation of hook_views_default_views().
 */
function image_gallery_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'gallery_list';
  $view->description = 'Overview of Rally Galleries';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Gallery Overview';
  $view->core = 7;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Latest Images';
  $handler->display->display_options['use_more_text'] = 'Weiter';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Zurücksetzen';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '15';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Beträge pro Seite';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Feld: Inhalt: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Feld: Inhalt: Image */
  $handler->display->display_options['fields']['field_gallery_image']['id'] = 'field_gallery_image';
  $handler->display->display_options['fields']['field_gallery_image']['table'] = 'field_data_field_gallery_image';
  $handler->display->display_options['fields']['field_gallery_image']['field'] = 'field_gallery_image';
  $handler->display->display_options['fields']['field_gallery_image']['label'] = '';
  $handler->display->display_options['fields']['field_gallery_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_gallery_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_gallery_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_gallery_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_gallery_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_gallery_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_gallery_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_gallery_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_gallery_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_gallery_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_gallery_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_gallery_image']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_gallery_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_gallery_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_gallery_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_gallery_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_gallery_image']['settings'] = array(
    'image_style' => 'gallery-overview-thumb',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_gallery_image']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_gallery_image']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_gallery_image']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_gallery_image']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_gallery_image']['field_api_classes'] = 0;
  /* Sort criterion: Inhalt: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Inhalt: Typ */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'image_gallery' => 'image_gallery',
  );
  /* Filter criterion: Inhalt: Published or admin */
  $handler->display->display_options['filters']['status_extra']['id'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['table'] = 'node';
  $handler->display->display_options['filters']['status_extra']['field'] = 'status_extra';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'galerien';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Feld: Inhalt: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Feld: Inhalt: Image */
  $handler->display->display_options['fields']['field_gallery_image']['id'] = 'field_gallery_image';
  $handler->display->display_options['fields']['field_gallery_image']['table'] = 'field_data_field_gallery_image';
  $handler->display->display_options['fields']['field_gallery_image']['field'] = 'field_gallery_image';
  $handler->display->display_options['fields']['field_gallery_image']['label'] = '';
  $handler->display->display_options['fields']['field_gallery_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_gallery_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_gallery_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_gallery_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_gallery_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_gallery_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_gallery_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_gallery_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_gallery_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_gallery_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_gallery_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_gallery_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_gallery_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_gallery_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_gallery_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_gallery_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_gallery_image']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_gallery_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_gallery_image']['settings'] = array(
    'image_style' => 'mini-thumb-block',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_gallery_image']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_gallery_image']['delta_limit'] = '2';
  $handler->display->display_options['fields']['field_gallery_image']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_gallery_image']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_gallery_image']['separator'] = '';
  $handler->display->display_options['fields']['field_gallery_image']['field_api_classes'] = 0;
  $handler->display->display_options['block_description'] = 'Neueste Bildergalerien';
  $translatables['gallery_list'] = array(
    t('Master'),
    t('Latest Images'),
    t('Weiter'),
    t('Anwenden'),
    t('Zurücksetzen'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Beträge pro Seite'),
    t('- All -'),
    t('Offset'),
    t('Page'),
    t('Block'),
    t('Neueste Bildergalerien'),
  );
  $export['gallery_list'] = $view;

  return $export;
}
