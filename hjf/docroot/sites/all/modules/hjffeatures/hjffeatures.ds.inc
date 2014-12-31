<?php
/**
 * @file
 * hjffeatures.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function hjffeatures_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|contact|department_view';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'contact';
  $ds_fieldsetting->view_mode = 'department_view';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h6',
        'class' => '',
      ),
    ),
  );
  $export['node|contact|department_view'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|events|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'events';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'forward_ds_field' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|events|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|job_post|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'job_post';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'forward_ds_field' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|job_post|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|services|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'services';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|services|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function hjffeatures_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'add_program';
  $ds_field->label = 'add program';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<a href="http://hjfdev.devcloud.acquia-sites.com/node/add/program">Add Program</a>',
      'format' => 'popup_tags',
    ),
    'use_token' => 0,
  );
  $export['add_program'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function hjffeatures_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'field_collection_item|field_guide_alerts|default';
  $ds_layout->entity_type = 'field_collection_item';
  $ds_layout->bundle = 'field_guide_alerts';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'panels-foundation_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'middle' => array(
        0 => 'field_alert_title',
        1 => 'field_alert_description',
        2 => 'field_alert_files',
        3 => 'field_alert_links',
        4 => 'field_alert_links_guide',
      ),
    ),
    'fields' => array(
      'field_alert_title' => 'middle',
      'field_alert_description' => 'middle',
      'field_alert_files' => 'middle',
      'field_alert_links' => 'middle',
      'field_alert_links_guide' => 'middle',
    ),
    'classes' => array(),
    'wrappers' => array(
      'middle' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['field_collection_item|field_guide_alerts|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|contact|department_view';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'contact';
  $ds_layout->view_mode = 'department_view';
  $ds_layout->layout = 'zf_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_phone',
        2 => 'field_dpt_e_mail',
        3 => 'field_web_link',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_phone' => 'ds_content',
      'field_dpt_e_mail' => 'ds_content',
      'field_web_link' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|contact|department_view'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|events|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'events';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'zf_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'forward_ds_field',
        1 => 'field_events_image',
        2 => 'field_date',
        3 => 'field_location',
        4 => 'body',
        5 => 'field_map',
        6 => 'field_price',
      ),
    ),
    'fields' => array(
      'forward_ds_field' => 'ds_content',
      'field_events_image' => 'ds_content',
      'field_date' => 'ds_content',
      'field_location' => 'ds_content',
      'body' => 'ds_content',
      'field_map' => 'ds_content',
      'field_price' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|events|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|funding_opportunity|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'funding_opportunity';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col_fluid';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_relate_sponsor',
        1 => 'field_related_program',
        4 => 'field_proposal_deadline',
        5 => 'field_proposal_required',
        7 => 'field_opportunity_number',
      ),
      'right' => array(
        2 => 'field_related_announcement_type',
        3 => 'field_related_url',
        6 => 'field_proposal_invitation',
        8 => 'field_preproposal_loideadline',
        9 => 'field_prepropsal_loideadline_dat',
        10 => 'field_funding_related_services',
      ),
    ),
    'fields' => array(
      'field_relate_sponsor' => 'left',
      'field_related_program' => 'left',
      'field_related_announcement_type' => 'right',
      'field_related_url' => 'right',
      'field_proposal_deadline' => 'left',
      'field_proposal_required' => 'left',
      'field_proposal_invitation' => 'right',
      'field_opportunity_number' => 'left',
      'field_preproposal_loideadline' => 'right',
      'field_prepropsal_loideadline_dat' => 'right',
      'field_funding_related_services' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|funding_opportunity|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|job_post|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'job_post';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'zf_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'forward_ds_field',
        1 => 'field_job_id',
        2 => 'field_job_location',
        3 => 'field_fultime_partime',
        4 => 'field_job_regular_temporary',
        5 => 'field_minimum_education_training',
        6 => 'body',
        7 => 'field_required_licenses_certific',
        8 => 'field_required_knowledge_skills_',
        9 => 'field_job_minimum_experience',
        10 => 'field_job_physical_capabilities',
        11 => 'field_job_work_environment',
        12 => 'field_job_disclaimer',
        13 => 'field_job_apply',
      ),
    ),
    'fields' => array(
      'forward_ds_field' => 'ds_content',
      'field_job_id' => 'ds_content',
      'field_job_location' => 'ds_content',
      'field_fultime_partime' => 'ds_content',
      'field_job_regular_temporary' => 'ds_content',
      'field_minimum_education_training' => 'ds_content',
      'body' => 'ds_content',
      'field_required_licenses_certific' => 'ds_content',
      'field_required_knowledge_skills_' => 'ds_content',
      'field_job_minimum_experience' => 'ds_content',
      'field_job_physical_capabilities' => 'ds_content',
      'field_job_work_environment' => 'ds_content',
      'field_job_disclaimer' => 'ds_content',
      'field_job_apply' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|job_post|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|research_program|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'research_program';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'zf_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_research_image',
        1 => 'body',
        2 => 'field_mission',
        3 => 'field_organization',
        4 => 'field_research_effort',
        5 => 'field_research_other_topics',
        6 => 'field_research_website',
      ),
    ),
    'fields' => array(
      'field_research_image' => 'ds_content',
      'body' => 'ds_content',
      'field_mission' => 'ds_content',
      'field_organization' => 'ds_content',
      'field_research_effort' => 'ds_content',
      'field_research_other_topics' => 'ds_content',
      'field_research_website' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|research_program|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|services|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'services';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'zf_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_category',
        1 => 'title',
        2 => 'body',
        3 => 'field_icon',
        4 => 'field_contact_email',
        5 => 'field_contact_phone',
      ),
    ),
    'fields' => array(
      'field_category' => 'ds_content',
      'title' => 'ds_content',
      'body' => 'ds_content',
      'field_icon' => 'ds_content',
      'field_contact_email' => 'ds_content',
      'field_contact_phone' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|services|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|webform|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'webform';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'zf_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'body',
        1 => 'webform',
      ),
    ),
    'fields' => array(
      'body' => 'ds_content',
      'webform' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|webform|default'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function hjffeatures_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'another_client_view';
  $ds_view_mode->label = 'another_client_view';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['another_client_view'] = $ds_view_mode;

  return $export;
}
