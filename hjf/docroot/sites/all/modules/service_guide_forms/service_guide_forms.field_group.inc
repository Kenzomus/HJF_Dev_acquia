<?php
/**
 * @file
 * service_guide_forms.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function service_guide_forms_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_forms|field_collection_item|field_forms|default';
  $field_group->group_name = 'group_forms';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_forms';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Related Forms',
    'weight' => '1',
    'children' => array(
      0 => 'field_form_title',
      1 => 'field_form_description',
      2 => 'field_upload_forms',
    ),
    'format_type' => 'accordion',
    'format_settings' => array(
      'label' => 'Related Forms',
      'instance_settings' => array(
        'classes' => 'group-forms field-group-fieldset',
        'description' => '',
        'effect' => 'bounceslide',
      ),
    ),
  );
  $export['group_forms|field_collection_item|field_forms|default'] = $field_group;

  return $export;
}
