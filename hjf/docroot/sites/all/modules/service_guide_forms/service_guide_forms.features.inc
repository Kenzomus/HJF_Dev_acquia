<?php
/**
 * @file
 * service_guide_forms.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function service_guide_forms_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function service_guide_forms_node_info() {
  $items = array(
    'service_guide_forms' => array(
      'name' => t('service_guide_forms'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
