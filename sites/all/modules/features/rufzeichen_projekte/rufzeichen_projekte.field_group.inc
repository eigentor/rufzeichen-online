<?php
/**
 * @file
 * rufzeichen_projekte.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function rufzeichen_projekte_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_properties_icons|node|projekt|full';
  $field_group->group_name = 'group_properties_icons';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'projekt';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Properties with Icons',
    'weight' => '4',
    'children' => array(
      0 => 'field_project_business_area',
      1 => 'field_project_task',
      2 => 'field_project_technical_details',
      3 => 'field_project_url',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Properties with Icons',
      'instance_settings' => array(
        'classes' => ' group-properties-icons field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'id' => 'node_projekt_full_group_properties_icons',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_properties_icons|node|projekt|full'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Properties with Icons');

  return $field_groups;
}
