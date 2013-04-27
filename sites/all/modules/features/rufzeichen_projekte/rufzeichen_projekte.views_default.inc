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
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Kopfbereich: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Titel zur Anzeige über den Bildern';
  $handler->display->display_options['header']['area']['empty'] = FALSE;
  $handler->display->display_options['header']['area']['content'] = '<h2>Beispiele umgesetzter Projekte</h2>';
  $handler->display->display_options['header']['area']['format'] = '3';
  $handler->display->display_options['header']['area']['tokenize'] = 0;
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'projekt',
  );
  $translatables['images_project'] = array(
    t('Master'),
    t('images_project'),
    t('Weiter'),
    t('Apply'),
    t('Zurücksetzen'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Alle'),
    t('Block'),
    t('Entity content'),
    t('Titel zur Anzeige über den Bildern'),
    t('<h2>Beispiele umgesetzter Projekte</h2>'),
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
  /* Kopfbereich: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = FALSE;
  $handler->display->display_options['header']['area']['content'] = '<p>Wir haben Websites der verschiedensten Kategorien und Größenordnungen erfolgreich umgesetzt. Hier einige Beispiele, anhand derer Sie einen Eindruck gewinnen können.
</p>
';
  $handler->display->display_options['header']['area']['format'] = '3';
  $handler->display->display_options['header']['area']['tokenize'] = 0;
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['label'] = 'Nodequeue Projekte';
  $handler->display->display_options['relationships']['nodequeue_rel']['required'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'projekte_queue' => 'projekte_queue',
  );
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
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Feld: Inhalt: Bilder */
  $handler->display->display_options['fields']['field_project_images']['id'] = 'field_project_images';
  $handler->display->display_options['fields']['field_project_images']['table'] = 'field_data_field_project_images';
  $handler->display->display_options['fields']['field_project_images']['field'] = 'field_project_images';
  $handler->display->display_options['fields']['field_project_images']['label'] = '';
  $handler->display->display_options['fields']['field_project_images']['exclude'] = TRUE;
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
  $handler->display->display_options['fields']['field_project_images']['settings'] = array(
    'image_style' => 'project-tooltip',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_project_images']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_project_images']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_project_images']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_project_images']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_project_images']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_project_images']['field_api_classes'] = 0;
  /* Feld: Inhalt: Thumb für Übersicht */
  $handler->display->display_options['fields']['field_project_thumb_overview']['id'] = 'field_project_thumb_overview';
  $handler->display->display_options['fields']['field_project_thumb_overview']['table'] = 'field_data_field_project_thumb_overview';
  $handler->display->display_options['fields']['field_project_thumb_overview']['field'] = 'field_project_thumb_overview';
  $handler->display->display_options['fields']['field_project_thumb_overview']['label'] = '';
  $handler->display->display_options['fields']['field_project_thumb_overview']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_project_thumb_overview']['alter']['text'] = '<div class="overview-thumb-wrapper beautytips" title=\'[field_project_images]\'>
[field_project_thumb_overview]
</div>';
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
  /* Sort criterion: Nodequeue: Position */
  $handler->display->display_options['sorts']['position']['id'] = 'position';
  $handler->display->display_options['sorts']['position']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['sorts']['position']['field'] = 'position';
  $handler->display->display_options['sorts']['position']['relationship'] = 'nodequeue_rel';
  /* Contextual filter: Inhalt: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  /* Filter criterion: Inhalt: Typ */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'projekt' => 'projekt',
  );
  /* Filter criterion: Inhalt: Published or admin */
  $handler->display->display_options['filters']['status_extra']['id'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['table'] = 'node';
  $handler->display->display_options['filters']['status_extra']['field'] = 'status_extra';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Beispiele umgesetzter Projekte';
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  $handler->display->display_options['fields']['field_project_images']['settings'] = array(
    'image_style' => 'project-overview-thumb',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_project_images']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_project_images']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_project_images']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_project_images']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_project_images']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_project_images']['field_api_classes'] = 0;
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
  $handler->display->display_options['fields']['title']['element_type'] = 'h4';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Feld: Inhalt: Thumb für Übersicht */
  $handler->display->display_options['fields']['field_project_thumb_overview']['id'] = 'field_project_thumb_overview';
  $handler->display->display_options['fields']['field_project_thumb_overview']['table'] = 'field_data_field_project_thumb_overview';
  $handler->display->display_options['fields']['field_project_thumb_overview']['field'] = 'field_project_thumb_overview';
  $handler->display->display_options['fields']['field_project_thumb_overview']['label'] = '';
  $handler->display->display_options['fields']['field_project_thumb_overview']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_project_thumb_overview']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_project_thumb_overview']['alter']['text'] = '<div class="overview-thumb-wrapper beautytips" title=\'[field_project_images]\'>
[field_project_thumb_overview]
</div>';
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
    'image_style' => 'project-tooltip',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_project_thumb_overview']['field_api_classes'] = 0;
  $handler->display->display_options['path'] = 'projekte';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Referenzen';
  $handler->display->display_options['menu']['weight'] = '1';
  $handler->display->display_options['menu']['name'] = 'primary-links';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Navigation Projekte unten */
  $handler = $view->new_display('block', 'Navigation Projekte unten', 'block_1');
  $handler->display->display_options['defaults']['header'] = FALSE;

  /* Display: Projekte nach Term */
  $handler = $view->new_display('page', 'Projekte nach Term', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Beispiele unserer Arbeiten';
  $handler->display->display_options['display_description'] = 'View mit Arguments';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Feld: Inhalt: Bilder */
  $handler->display->display_options['fields']['field_project_images']['id'] = 'field_project_images';
  $handler->display->display_options['fields']['field_project_images']['table'] = 'field_data_field_project_images';
  $handler->display->display_options['fields']['field_project_images']['field'] = 'field_project_images';
  $handler->display->display_options['fields']['field_project_images']['label'] = '';
  $handler->display->display_options['fields']['field_project_images']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_project_images']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['field_project_images']['alter']['path'] = '[view_node] ';
  $handler->display->display_options['fields']['field_project_images']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_project_images']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_project_images']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_project_images']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_project_images']['alter']['alt'] = '[field_project_images-title]';
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
  $handler->display->display_options['fields']['field_project_images']['settings'] = array(
    'image_style' => 'project-overview-thumb',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_project_images']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_project_images']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_project_images']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_project_images']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_project_images']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_project_images']['field_api_classes'] = 0;
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
  $handler->display->display_options['fields']['title']['element_type'] = 'h4';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Feld: Inhalt: Thumb für Übersicht */
  $handler->display->display_options['fields']['field_project_thumb_overview']['id'] = 'field_project_thumb_overview';
  $handler->display->display_options['fields']['field_project_thumb_overview']['table'] = 'field_data_field_project_thumb_overview';
  $handler->display->display_options['fields']['field_project_thumb_overview']['field'] = 'field_project_thumb_overview';
  $handler->display->display_options['fields']['field_project_thumb_overview']['label'] = '';
  $handler->display->display_options['fields']['field_project_thumb_overview']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_project_thumb_overview']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_project_thumb_overview']['alter']['text'] = '<div class="overview-thumb-wrapper beautytips" title=\'[field_project_images]\'>
[field_project_thumb_overview]
</div>';
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
    'image_style' => 'project-page',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_project_thumb_overview']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Inhalt: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['term_page'] = 1;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['node'] = 0;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['limit'] = 0;
  $handler->display->display_options['arguments']['tid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['break_phrase'] = 1;
  $handler->display->display_options['arguments']['tid']['add_table'] = 0;
  $handler->display->display_options['arguments']['tid']['require_value'] = 0;
  $handler->display->display_options['arguments']['tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['arguments']['tid']['set_breadcrumb'] = 0;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Inhalt: Typ */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'projekt' => 'projekt',
  );
  /* Filter criterion: Inhalt: Published or admin */
  $handler->display->display_options['filters']['status_extra']['id'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['table'] = 'node';
  $handler->display->display_options['filters']['status_extra']['field'] = 'status_extra';
  $handler->display->display_options['path'] = 'projekte/%';

  /* Display: Slideshow Startseite */
  $handler = $view->new_display('block', 'Slideshow Startseite', 'block_2');
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
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['enable'] = 1;
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_project_images' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['enable'] = 1;
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_project_images' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['effect'] = 'scrollHorz';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '5000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '3000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  $handler->display->display_options['fields']['field_project_images']['settings'] = array(
    'image_style' => 'project-slideshow',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_project_images']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_project_images']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_project_images']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_project_images']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_project_images']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_project_images']['field_api_classes'] = 0;
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
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Feld: Inhalt: Kurzbeschreibung */
  $handler->display->display_options['fields']['field_pr_short_description']['id'] = 'field_pr_short_description';
  $handler->display->display_options['fields']['field_pr_short_description']['table'] = 'field_data_field_pr_short_description';
  $handler->display->display_options['fields']['field_pr_short_description']['field'] = 'field_pr_short_description';
  $handler->display->display_options['fields']['field_pr_short_description']['label'] = '';
  $handler->display->display_options['fields']['field_pr_short_description']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_pr_short_description']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_pr_short_description']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_pr_short_description']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_pr_short_description']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_pr_short_description']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_pr_short_description']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_pr_short_description']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_pr_short_description']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_pr_short_description']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_pr_short_description']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_pr_short_description']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_pr_short_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pr_short_description']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_pr_short_description']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_pr_short_description']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_pr_short_description']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_pr_short_description']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Inhalt: Typ */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'projekt' => 'projekt',
  );
  /* Filter criterion: Inhalt: Published or admin */
  $handler->display->display_options['filters']['status_extra']['id'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['table'] = 'node';
  $handler->display->display_options['filters']['status_extra']['field'] = 'status_extra';
  /* Filter criterion: Inhalt: Auf der Startseite */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '1';
  $translatables['projekte_overview'] = array(
    t('Master'),
    t('Projekte Übersicht'),
    t('Weiter'),
    t('Apply'),
    t('Zurücksetzen'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('<p>Wir haben Websites der verschiedensten Kategorien und Größenordnungen erfolgreich umgesetzt. Hier einige Beispiele, anhand derer Sie einen Eindruck gewinnen können.
</p>
'),
    t('Nodequeue Projekte'),
    t('<div class="overview-thumb-wrapper beautytips" title=\'[field_project_images]\'>
[field_project_thumb_overview]
</div>'),
    t('Alle'),
    t('Page'),
    t('Beispiele umgesetzter Projekte'),
    t('Navigation Projekte unten'),
    t('Projekte nach Term'),
    t('Beispiele unserer Arbeiten'),
    t('View mit Arguments'),
    t('[view_node] '),
    t('[field_project_images-title]'),
    t('Slideshow Startseite'),
  );
  $export['projekte_overview'] = $view;

  return $export;
}
