<?php

/**
 * Plugins are described by creating a $plugin array which will be used
 * by the system that includes this file.
 */

$plugin = array(
  'title' => t('Create Node'),
  'description' => t('Allows the creation of a particular node type.  This circumvents the typical drupal access controls on node creation.'),
  'required context' => new ctools_context_optional(t('Node'), 'node'),
  'content form' => 'context_admin_node_create_menu_content_form',
  'content form submit' => 'context_admin_node_create_menu_content_form_submit',
  'render' => 'context_admin_node_create_menu_render_page',
  'node insert' => 'context_admin_node_create_menu_node_insert',
);


function context_admin_node_create_menu_content_form($form, $form_state, $cache = NULL) {
  ctools_include('dependent');
  $context_options = $form['context']['#options'];
  unset($context_options['empty']);
  $context_dependencies = array();
  foreach ($context_options as $c_key => $c_option) {
    $context_dependencies[] = $c_key;
  }
  if (isset($form_state['page']->handlers[$form_state['handler_id']]->conf['context_admin_options_items'])) {
    $default = $form_state['page']->handlers[$form_state['handler_id']]->conf['context_admin_options_items'];
  }
  elseif (isset($cache->handlers[$form_state['handler_id']]->conf['context_admin_options_items'])) {
    $default = $cache->handlers[$form_state['handler_id']]->conf['context_admin_options_items'];
  }
  else {
    $default = '';
  }
  $options = node_type_get_names();
  $form['context_admin_options_items'] = array(
    '#type' => 'radios',
    '#title' => t('Select the node type you would like to create'),
    '#required' => TRUE,
    '#options' => $options,
    '#default_value' => $default,
  );

  if (isset($form_state['page']->handlers[$form_state['handler_id']]->conf['context_admin_sub_page'])) {
    $sub = $form_state['page']->handlers[$form_state['handler_id']]->conf['context_admin_sub_page'];
  }
  elseif (isset($cache->handlers[$form_state['handler_id']]->conf['context_admin_sub_page'])) {
    $sub = $cache->handlers[$form_state['handler_id']]->conf['context_admin_sub_page'];
  }
  else {
    $sub = 0;
  }
  $form['context_admin_sub_page'] = array(
    '#type' => 'checkbox',
    '#title' => t('Create as sub node'),
    '#description' => t('Creates a node as a sub node of the currently viewed node within the menu system.'),
    '#default_value' => $sub,
    '#process' => array('ctools_dependent_process'),
    '#dependency' => array('edit-context' => array(implode(', ', $context_dependencies))),
  );

  return $form;
}

function context_admin_node_create_menu_content_form_submit($form, &$form_state) {
  $cache = context_admin_get_page_cache($form_state['page']->subtask_id);
  if (!is_null($form_state['handler_id'])) {
    $form_state['page']->handlers[$form_state['handler_id']]->conf['context_admin_options_items'] = $form_state['values']['context_admin_options_items'];
  }
  else {
    $form_state['page']->new_handler->conf['context_admin_options_items'] = $form_state['values']['context_admin_options_items'];
  }
  if ($form_state['values']['context_admin_sub_page']) {
    if (!is_null($form_state['handler_id'])) {
      $form_state['page']->handlers[$form_state['handler_id']]->conf['context_admin_sub_page'] = $form_state['values']['context_admin_sub_page'];
    }
    else {
      $form_state['page']->new_handler->conf['context_admin_sub_page'] = $form_state['values']['context_admin_sub_page'];
    }
  }
  context_admin_set_page_cache($form_state['page']->subtask_id, $form_state['page']);
  return $form_state;
}

function context_admin_node_create_menu_render_page($handler, $base_contexts, $args, $test = TRUE) {
  $type = $handler->conf['context_admin_options_items'];
  module_load_include('inc', 'node', 'node.pages');

  return node_add($type);
}

function context_admin_node_create_menu_node_insert($node, $page) {
  if (isset($page['handler']->conf['context_admin_sub_page']) && $page['handler']->conf['context_admin_sub_page']) {
    $context = $page['contexts'][$page['handler']->conf['submitted_context']];
    $parent_id = $context->argument;
    $query = db_select('menu_links', 'ml')
      ->fields('ml', array('menu_name', 'mlid'))
      ->condition('link_path', 'node/' . $parent_id, '=')
      ->condition('module', 'menu', '=')
      ->range(0, 1);
    $results = $query->execute();
    foreach ($results as $result) {
      if ($result) {
        $item = array(
          'link_title' => $node->title,
          'menu_name' => $result->menu_name,
          'plid' => $result->mlid,
          'link_path' => 'node/'. $node->nid,
        );
        menu_link_save($item);
      }
    }
  }
}