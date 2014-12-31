<?php
/**
 * @file
 * hjffeatures.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function hjffeatures_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'custom_rad_test';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Custom_Rad_test';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Custom_Rad_test';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'rads' => 'rads',
  );

  /* Display: testRad */
  $handler = $view->new_display('page', 'testRad', 'page');
  $handler->display->display_options['path'] = 'custom-rad-test';
  $export['custom_rad_test'] = $view;

  $view = new view();
  $view->name = 'funding_opportunities';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Funding Opportunities';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Funding Opportunities';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title_1' => 'title_1',
    'field_opportunity_number' => 'field_opportunity_number',
    'field_related_url' => 'field_related_url',
    'field_relate_sponsor' => 'field_relate_sponsor',
    'field_related_program' => 'field_related_program',
    'field_related_announcement_type' => 'field_related_announcement_type',
    'field_prepropsal_loideadline_dat' => 'field_prepropsal_loideadline_dat',
    'field_proposal_deadline' => 'field_proposal_deadline',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_opportunity_number' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_related_url' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_relate_sponsor' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_related_program' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_related_announcement_type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_prepropsal_loideadline_dat' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_proposal_deadline' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: opportunity_number */
  $handler->display->display_options['fields']['field_opportunity_number']['id'] = 'field_opportunity_number';
  $handler->display->display_options['fields']['field_opportunity_number']['table'] = 'field_data_field_opportunity_number';
  $handler->display->display_options['fields']['field_opportunity_number']['field'] = 'field_opportunity_number';
  $handler->display->display_options['fields']['field_opportunity_number']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_opportunity_number']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_opportunity_number']['alter']['external'] = TRUE;
  /* Field: Content: related_url */
  $handler->display->display_options['fields']['field_related_url']['id'] = 'field_related_url';
  $handler->display->display_options['fields']['field_related_url']['table'] = 'field_data_field_related_url';
  $handler->display->display_options['fields']['field_related_url']['field'] = 'field_related_url';
  $handler->display->display_options['fields']['field_related_url']['label'] = 'Opportunity number';
  $handler->display->display_options['fields']['field_related_url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_related_url']['alter']['text'] = '<a href ="[field_related_url-url] " >[field_opportunity_number] - [field_related_url]</a>

';
  $handler->display->display_options['fields']['field_related_url']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_related_url']['click_sort_column'] = 'url';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
  /* Field: Content: Sponsor */
  $handler->display->display_options['fields']['field_relate_sponsor']['id'] = 'field_relate_sponsor';
  $handler->display->display_options['fields']['field_relate_sponsor']['table'] = 'field_data_field_relate_sponsor';
  $handler->display->display_options['fields']['field_relate_sponsor']['field'] = 'field_relate_sponsor';
  $handler->display->display_options['fields']['field_relate_sponsor']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Programs */
  $handler->display->display_options['fields']['field_related_program']['id'] = 'field_related_program';
  $handler->display->display_options['fields']['field_related_program']['table'] = 'field_data_field_related_program';
  $handler->display->display_options['fields']['field_related_program']['field'] = 'field_related_program';
  $handler->display->display_options['fields']['field_related_program']['label'] = 'Program';
  $handler->display->display_options['fields']['field_related_program']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_related_program']['delta_offset'] = '0';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_related_announcement_type']['id'] = 'field_related_announcement_type';
  $handler->display->display_options['fields']['field_related_announcement_type']['table'] = 'field_data_field_related_announcement_type';
  $handler->display->display_options['fields']['field_related_announcement_type']['field'] = 'field_related_announcement_type';
  $handler->display->display_options['fields']['field_related_announcement_type']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Prepropsal Loi deadline date */
  $handler->display->display_options['fields']['field_prepropsal_loideadline_dat']['id'] = 'field_prepropsal_loideadline_dat';
  $handler->display->display_options['fields']['field_prepropsal_loideadline_dat']['table'] = 'field_data_field_prepropsal_loideadline_dat';
  $handler->display->display_options['fields']['field_prepropsal_loideadline_dat']['field'] = 'field_prepropsal_loideadline_dat';
  $handler->display->display_options['fields']['field_prepropsal_loideadline_dat']['label'] = 'Preproposal/ LOI Deadline ';
  $handler->display->display_options['fields']['field_prepropsal_loideadline_dat']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Proposal deadline */
  $handler->display->display_options['fields']['field_proposal_deadline']['id'] = 'field_proposal_deadline';
  $handler->display->display_options['fields']['field_proposal_deadline']['table'] = 'field_data_field_proposal_deadline';
  $handler->display->display_options['fields']['field_proposal_deadline']['field'] = 'field_proposal_deadline';
  $handler->display->display_options['fields']['field_proposal_deadline']['label'] = 'Proposal Deadline ';
  $handler->display->display_options['fields']['field_proposal_deadline']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'funding_opportunity' => 'funding_opportunity',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'funding-opportunities';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Funding';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'tab';
  $handler->display->display_options['tab_options']['title'] = 'Funding';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Page_grid */
  $handler = $view->new_display('page', 'Page_grid', 'page_1');
  $handler->display->display_options['path'] = 'funding_opportunity_grid';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;

  /* Display: ContextFunding_opportunities */
  $handler = $view->new_display('ctools_context', 'ContextFunding_opportunities', 'ctools_context_1');
  $handler->display->display_options['display_description'] = 'create a panel using the context view';
  $handler->display->display_options['style_plugin'] = 'ctools_context';
  $handler->display->display_options['row_plugin'] = 'fields';
  $export['funding_opportunities'] = $view;

  $view = new view();
  $view->name = 'funding_opportunities_parameter';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'funding_opportunities_parameter';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'funding_opportunities_parameter';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_opportunity_number' => 'field_opportunity_number',
    'title' => 'title',
    'field_relate_sponsor' => 'field_relate_sponsor',
    'field_related_program' => 'field_related_program',
    'field_related_announcement_type' => 'field_related_announcement_type',
    'field_proposal_deadline' => 'field_proposal_deadline',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_opportunity_number' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_relate_sponsor' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_related_program' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_related_announcement_type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_proposal_deadline' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: opportunity_number */
  $handler->display->display_options['fields']['field_opportunity_number']['id'] = 'field_opportunity_number';
  $handler->display->display_options['fields']['field_opportunity_number']['table'] = 'field_data_field_opportunity_number';
  $handler->display->display_options['fields']['field_opportunity_number']['field'] = 'field_opportunity_number';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Sponsor */
  $handler->display->display_options['fields']['field_relate_sponsor']['id'] = 'field_relate_sponsor';
  $handler->display->display_options['fields']['field_relate_sponsor']['table'] = 'field_data_field_relate_sponsor';
  $handler->display->display_options['fields']['field_relate_sponsor']['field'] = 'field_relate_sponsor';
  $handler->display->display_options['fields']['field_relate_sponsor']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Programs */
  $handler->display->display_options['fields']['field_related_program']['id'] = 'field_related_program';
  $handler->display->display_options['fields']['field_related_program']['table'] = 'field_data_field_related_program';
  $handler->display->display_options['fields']['field_related_program']['field'] = 'field_related_program';
  $handler->display->display_options['fields']['field_related_program']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_related_program']['delta_offset'] = '0';
  /* Field: Content: Proposal deadline */
  $handler->display->display_options['fields']['field_proposal_deadline']['id'] = 'field_proposal_deadline';
  $handler->display->display_options['fields']['field_proposal_deadline']['table'] = 'field_data_field_proposal_deadline';
  $handler->display->display_options['fields']['field_proposal_deadline']['field'] = 'field_proposal_deadline';
  $handler->display->display_options['fields']['field_proposal_deadline']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'OR',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'funding_opportunity' => 'funding_opportunity',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Sponsor (field_relate_sponsor) */
  $handler->display->display_options['filters']['field_relate_sponsor_target_id']['id'] = 'field_relate_sponsor_target_id';
  $handler->display->display_options['filters']['field_relate_sponsor_target_id']['table'] = 'field_data_field_relate_sponsor';
  $handler->display->display_options['filters']['field_relate_sponsor_target_id']['field'] = 'field_relate_sponsor_target_id';
  $handler->display->display_options['filters']['field_relate_sponsor_target_id']['group'] = 1;
  $handler->display->display_options['filters']['field_relate_sponsor_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_relate_sponsor_target_id']['expose']['operator_id'] = 'field_relate_sponsor_target_id_op';
  $handler->display->display_options['filters']['field_relate_sponsor_target_id']['expose']['label'] = 'Filter by Sponsor ';
  $handler->display->display_options['filters']['field_relate_sponsor_target_id']['expose']['operator'] = 'field_relate_sponsor_target_id_op';
  $handler->display->display_options['filters']['field_relate_sponsor_target_id']['expose']['identifier'] = 'field_relate_sponsor_target_id';
  $handler->display->display_options['filters']['field_relate_sponsor_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    6 => 0,
  );
  /* Filter criterion: Content: Programs (field_related_program) */
  $handler->display->display_options['filters']['field_related_program_target_id']['id'] = 'field_related_program_target_id';
  $handler->display->display_options['filters']['field_related_program_target_id']['table'] = 'field_data_field_related_program';
  $handler->display->display_options['filters']['field_related_program_target_id']['field'] = 'field_related_program_target_id';
  $handler->display->display_options['filters']['field_related_program_target_id']['group'] = 1;
  $handler->display->display_options['filters']['field_related_program_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_related_program_target_id']['expose']['operator_id'] = 'field_related_program_target_id_op';
  $handler->display->display_options['filters']['field_related_program_target_id']['expose']['label'] = 'Filter by Programs ';
  $handler->display->display_options['filters']['field_related_program_target_id']['expose']['operator'] = 'field_related_program_target_id_op';
  $handler->display->display_options['filters']['field_related_program_target_id']['expose']['identifier'] = 'field_related_program_target_id';
  $handler->display->display_options['filters']['field_related_program_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    6 => 0,
  );
  /* Filter criterion: Content: Type (field_related_announcement_type) */
  $handler->display->display_options['filters']['field_related_announcement_type_target_id']['id'] = 'field_related_announcement_type_target_id';
  $handler->display->display_options['filters']['field_related_announcement_type_target_id']['table'] = 'field_data_field_related_announcement_type';
  $handler->display->display_options['filters']['field_related_announcement_type_target_id']['field'] = 'field_related_announcement_type_target_id';
  $handler->display->display_options['filters']['field_related_announcement_type_target_id']['group'] = 1;
  $handler->display->display_options['filters']['field_related_announcement_type_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_related_announcement_type_target_id']['expose']['operator_id'] = 'field_related_announcement_type_target_id_op';
  $handler->display->display_options['filters']['field_related_announcement_type_target_id']['expose']['label'] = 'Type (field_related_announcement_type)';
  $handler->display->display_options['filters']['field_related_announcement_type_target_id']['expose']['operator'] = 'field_related_announcement_type_target_id_op';
  $handler->display->display_options['filters']['field_related_announcement_type_target_id']['expose']['identifier'] = 'field_related_announcement_type_target_id';
  $handler->display->display_options['filters']['field_related_announcement_type_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    6 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'funding-opportunities-parameter';

  /* Display: Facets block */
  $handler = $view->new_display('search_api_views_facets_block', 'Facets block', 'search_api_views_facets_block_1');
  $handler->display->display_options['pager']['type'] = 'some';

  /* Display: Facets block 2 */
  $handler = $view->new_display('search_api_views_facets_block', 'Facets block 2', 'search_api_views_facets_block_2');
  $handler->display->display_options['pager']['type'] = 'some';

  /* Display: Dynamic Select */
  $handler = $view->new_display('dynamic_select', 'Dynamic Select', 'dynamic_select_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'dynamic_select_style';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'dynamic_select_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;

  /* Display: Context */
  $handler = $view->new_display('ctools_context', 'Context', 'ctools_context_1');
  $handler->display->display_options['style_plugin'] = 'ctools_context';
  $handler->display->display_options['row_plugin'] = 'fields';
  $export['funding_opportunities_parameter'] = $view;

  $view = new view();
  $view->name = 'rads_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'rads_view';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Related RADS';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Published';
  $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['status']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'rads' => 'rads',
  );

  /* Display: Context */
  $handler = $view->new_display('ctools_context', 'Context', 'ctools_context_1');
  $handler->display->display_options['style_plugin'] = 'ctools_context';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'context',
      'context' => 'entity:node.field_related_services',
      'context_optional' => 0,
    ),
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'context',
      'context' => 'entity:node.field_related_rads',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Nid',
    ),
  );
  $export['rads_view'] = $view;

  $view = new view();
  $view->name = 'service_clients';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'service_clients';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'service_clients';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Broken/missing handler */
  $handler->display->display_options['relationships']['field_rads_target_id']['id'] = 'field_rads_target_id';
  $handler->display->display_options['relationships']['field_rads_target_id']['table'] = 'field_data_field_rads';
  $handler->display->display_options['relationships']['field_rads_target_id']['field'] = 'field_rads_target_id';
  $handler->display->display_options['relationships']['field_rads_target_id']['label'] = 'Content entity referenced from field_rads';
  $handler->display->display_options['relationships']['field_rads_target_id']['required'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_rads']['id'] = 'field_rads';
  $handler->display->display_options['fields']['field_rads']['table'] = 'field_data_field_rads';
  $handler->display->display_options['fields']['field_rads']['field'] = 'field_rads';
  $handler->display->display_options['fields']['field_rads']['label'] = 'RADS';
  /* Field: Content: rad_related_client */
  $handler->display->display_options['fields']['field_related_client']['id'] = 'field_related_client';
  $handler->display->display_options['fields']['field_related_client']['table'] = 'field_data_field_related_client';
  $handler->display->display_options['fields']['field_related_client']['field'] = 'field_related_client';
  $handler->display->display_options['fields']['field_related_client']['relationship'] = 'field_rads_target_id';
  $handler->display->display_options['fields']['field_related_client']['label'] = 'related_client';
  $handler->display->display_options['fields']['field_related_client']['type'] = 'entityreference_entity_view';
  $handler->display->display_options['fields']['field_related_client']['settings'] = array(
    'view_mode' => 'another_client_view',
    'links' => 1,
  );
  $handler->display->display_options['fields']['field_related_client']['delta_offset'] = '0';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'service-clients';
  $export['service_clients'] = $view;

  $view = new view();
  $view->name = 'service_entity_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'file_managed';
  $view->human_name = 'service_entity_view';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: File Usage: Entity ID */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'file_usage';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  $handler->display->display_options['fields']['id']['exclude'] = TRUE;
  /* Field: File Usage: Entity type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'file_usage';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  /* Field: Entity Reference View Widget Checkbox: File */
  $handler->display->display_options['fields']['entityreference_view_widget']['id'] = 'entityreference_view_widget';
  $handler->display->display_options['fields']['entityreference_view_widget']['table'] = 'file_managed';
  $handler->display->display_options['fields']['entityreference_view_widget']['field'] = 'entityreference_view_widget';
  $handler->display->display_options['fields']['entityreference_view_widget']['ervw']['force_single'] = 0;

  /* Display: Entity Reference View Widget */
  $handler = $view->new_display('entityreference_view_widget', 'Entity Reference View Widget', 'entityreference_view_widget_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;

  /* Display: related funding opportunities */
  $handler = $view->new_display('entityreference_view_widget', 'related funding opportunities', 'entityreference_view_widget_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $export['service_entity_view'] = $view;

  $view = new view();
  $view->name = 'services';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Services';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Services';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'body' => 'title',
    'field_contact_email' => 'field_contact_email',
    'field_contact_phone' => 'field_contact_phone',
    'field_icon' => 'field_icon',
    'field_rads' => 'field_rads',
    'field_related_services' => 'field_related_services',
    'field_category' => 'field_category',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'body' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_contact_email' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_contact_phone' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_icon' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_rads' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_related_services' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_category' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: icon */
  $handler->display->display_options['fields']['field_icon']['id'] = 'field_icon';
  $handler->display->display_options['fields']['field_icon']['table'] = 'field_data_field_icon';
  $handler->display->display_options['fields']['field_icon']['field'] = 'field_icon';
  $handler->display->display_options['fields']['field_icon']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_icon']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Content: contact_email */
  $handler->display->display_options['fields']['field_contact_email']['id'] = 'field_contact_email';
  $handler->display->display_options['fields']['field_contact_email']['table'] = 'field_data_field_contact_email';
  $handler->display->display_options['fields']['field_contact_email']['field'] = 'field_contact_email';
  $handler->display->display_options['fields']['field_contact_email']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_contact_email']['element_label_colon'] = FALSE;
  /* Field: Content: contact_phone */
  $handler->display->display_options['fields']['field_contact_phone']['id'] = 'field_contact_phone';
  $handler->display->display_options['fields']['field_contact_phone']['table'] = 'field_data_field_contact_phone';
  $handler->display->display_options['fields']['field_contact_phone']['field'] = 'field_contact_phone';
  $handler->display->display_options['fields']['field_contact_phone']['exclude'] = TRUE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_rads']['id'] = 'field_rads';
  $handler->display->display_options['fields']['field_rads']['table'] = 'field_data_field_rads';
  $handler->display->display_options['fields']['field_rads']['field'] = 'field_rads';
  $handler->display->display_options['fields']['field_rads']['label'] = 'RADS';
  /* Field: Content: service_category */
  $handler->display->display_options['fields']['field_category']['id'] = 'field_category';
  $handler->display->display_options['fields']['field_category']['table'] = 'field_data_field_category';
  $handler->display->display_options['fields']['field_category']['field'] = 'field_category';
  $handler->display->display_options['fields']['field_category']['settings'] = array(
    'link' => 0,
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'services' => 'services',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'services';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: icon */
  $handler->display->display_options['fields']['field_icon']['id'] = 'field_icon';
  $handler->display->display_options['fields']['field_icon']['table'] = 'field_data_field_icon';
  $handler->display->display_options['fields']['field_icon']['field'] = 'field_icon';
  $handler->display->display_options['fields']['field_icon']['label'] = '';
  $handler->display->display_options['fields']['field_icon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_icon']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_icon']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<h3>[title]</h3>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Content: contact_email */
  $handler->display->display_options['fields']['field_contact_email']['id'] = 'field_contact_email';
  $handler->display->display_options['fields']['field_contact_email']['table'] = 'field_data_field_contact_email';
  $handler->display->display_options['fields']['field_contact_email']['field'] = 'field_contact_email';
  $handler->display->display_options['fields']['field_contact_email']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_contact_email']['element_label_colon'] = FALSE;
  /* Field: Content: contact_phone */
  $handler->display->display_options['fields']['field_contact_phone']['id'] = 'field_contact_phone';
  $handler->display->display_options['fields']['field_contact_phone']['table'] = 'field_data_field_contact_phone';
  $handler->display->display_options['fields']['field_contact_phone']['field'] = 'field_contact_phone';
  $handler->display->display_options['fields']['field_contact_phone']['exclude'] = TRUE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_rads']['id'] = 'field_rads';
  $handler->display->display_options['fields']['field_rads']['table'] = 'field_data_field_rads';
  $handler->display->display_options['fields']['field_rads']['field'] = 'field_rads';
  $handler->display->display_options['fields']['field_rads']['label'] = 'RADS';
  $handler->display->display_options['fields']['field_rads']['exclude'] = TRUE;
  /* Field: Content: related_services */
  $handler->display->display_options['fields']['field_related_services']['id'] = 'field_related_services';
  $handler->display->display_options['fields']['field_related_services']['table'] = 'field_data_field_related_services';
  $handler->display->display_options['fields']['field_related_services']['field'] = 'field_related_services';
  $handler->display->display_options['fields']['field_related_services']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_related_services']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: service_category */
  $handler->display->display_options['fields']['field_category']['id'] = 'field_category';
  $handler->display->display_options['fields']['field_category']['table'] = 'field_data_field_category';
  $handler->display->display_options['fields']['field_category']['field'] = 'field_category';
  $handler->display->display_options['fields']['field_category']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_category']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'services' => 'services',
  );
  $handler->display->display_options['path'] = 'content/Services';
  $handler->display->display_options['menu']['title'] = 'Services';
  $handler->display->display_options['menu']['weight'] = '6';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Services';
  $handler->display->display_options['tab_options']['weight'] = '0';
  $handler->display->display_options['tab_options']['name'] = 'main-menu';

  /* Display: Context */
  $handler = $view->new_display('ctools_context', 'Context', 'ctools_context_1');
  $handler->display->display_options['style_plugin'] = 'ctools_context';
  $handler->display->display_options['row_plugin'] = 'fields';
  $export['services'] = $view;

  $view = new view();
  $view->name = 'success_story_bis';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'success_story_bis';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Related Success Stories';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: node id of the related success story */
  $handler->display->display_options['arguments']['field_related_services_target_id']['id'] = 'field_related_services_target_id';
  $handler->display->display_options['arguments']['field_related_services_target_id']['table'] = 'field_data_field_related_services';
  $handler->display->display_options['arguments']['field_related_services_target_id']['field'] = 'field_related_services_target_id';
  $handler->display->display_options['arguments']['field_related_services_target_id']['ui_name'] = 'node id of the related success story';
  $handler->display->display_options['arguments']['field_related_services_target_id']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_related_services_target_id']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['field_related_services_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_related_services_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_related_services_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_related_services_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_related_services_target_id']['specify_validation'] = TRUE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'succes_story' => 'succes_story',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['argument_input'] = array(
    'field_related_services_target_id' => array(
      'type' => 'context',
      'context' => 'entity:node.field_related_services',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'node id of the related success story',
    ),
    'nid' => array(
      'type' => 'none',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Nid',
    ),
  );

  /* Display: success_story_view_widget */
  $handler = $view->new_display('entityreference_view_widget', 'success_story_view_widget', 'entityreference_view_widget_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'succes_story' => 'succes_story',
  );
  $export['success_story_bis'] = $view;

  $view = new view();
  $view->name = 'success_story_view_widget';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'success_story_view_widget';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Entity Reference View Widget Checkbox: Content */
  $handler->display->display_options['fields']['entityreference_view_widget']['id'] = 'entityreference_view_widget';
  $handler->display->display_options['fields']['entityreference_view_widget']['table'] = 'node';
  $handler->display->display_options['fields']['entityreference_view_widget']['field'] = 'entityreference_view_widget';
  $handler->display->display_options['fields']['entityreference_view_widget']['ervw']['force_single'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'succes_story' => 'succes_story',
  );

  /* Display: Entity Reference View Widget */
  $handler = $view->new_display('entityreference_view_widget', 'Entity Reference View Widget', 'entityreference_view_widget_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $export['success_story_view_widget'] = $view;

  $view = new view();
  $view->name = 'test_client';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'test_client';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'test_client';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_related_rads']['id'] = 'field_related_rads';
  $handler->display->display_options['fields']['field_related_rads']['table'] = 'field_data_field_related_rads';
  $handler->display->display_options['fields']['field_related_rads']['field'] = 'field_related_rads';
  $handler->display->display_options['fields']['field_related_rads']['label'] = 'related_rads';
  /* Field: Content: tags_bis */
  $handler->display->display_options['fields']['field_tags_bis']['id'] = 'field_tags_bis';
  $handler->display->display_options['fields']['field_tags_bis']['table'] = 'field_data_field_tags_bis';
  $handler->display->display_options['fields']['field_tags_bis']['field'] = 'field_tags_bis';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'clients' => 'clients',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'content/test-client';
  $export['test_client'] = $view;

  $view = new view();
  $view->name = 'test_entity_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'test_entity_view';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Entity Reference View Widget Checkbox: Content */
  $handler->display->display_options['fields']['entityreference_view_widget']['id'] = 'entityreference_view_widget';
  $handler->display->display_options['fields']['entityreference_view_widget']['table'] = 'node';
  $handler->display->display_options['fields']['entityreference_view_widget']['field'] = 'entityreference_view_widget';
  $handler->display->display_options['fields']['entityreference_view_widget']['ervw']['force_single'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'funding_opportunity' => 'funding_opportunity',
  );

  /* Display: Entity Reference View Widget */
  $handler = $view->new_display('entityreference_view_widget', 'Entity Reference View Widget', 'entityreference_view_widget_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'related funding opportunities';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $export['test_entity_view'] = $view;

  $view = new view();
  $view->name = 'test_funding_filters';
  $view->description = 'check the filters ';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'test_funding_filters';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'test_funding_filters';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_opportunity_number' => 'field_opportunity_number',
    'field_related_url' => 'field_related_url',
    'title_1' => 'title_1',
    'field_relate_sponsor' => 'field_relate_sponsor',
    'field_related_program' => 'field_related_program',
    'field_related_announcement_type' => 'field_related_announcement_type',
    'field_prepropsal_loideadline_dat' => 'field_prepropsal_loideadline_dat',
    'field_proposal_deadline' => 'field_proposal_deadline',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_opportunity_number' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_related_url' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_relate_sponsor' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_related_program' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_related_announcement_type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_prepropsal_loideadline_dat' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_proposal_deadline' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* No results behavior: No data message */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['ui_name'] = 'No data message';
  $handler->display->display_options['empty']['area']['label'] = 'No data message';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'There were no data .Please refine your criteria.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['empty']['area']['tokenize'] = TRUE;
  /* Field: Content: opportunity_number */
  $handler->display->display_options['fields']['field_opportunity_number']['id'] = 'field_opportunity_number';
  $handler->display->display_options['fields']['field_opportunity_number']['table'] = 'field_data_field_opportunity_number';
  $handler->display->display_options['fields']['field_opportunity_number']['field'] = 'field_opportunity_number';
  $handler->display->display_options['fields']['field_opportunity_number']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_opportunity_number']['alter']['external'] = TRUE;
  /* Field: Content: related_url */
  $handler->display->display_options['fields']['field_related_url']['id'] = 'field_related_url';
  $handler->display->display_options['fields']['field_related_url']['table'] = 'field_data_field_related_url';
  $handler->display->display_options['fields']['field_related_url']['field'] = 'field_related_url';
  $handler->display->display_options['fields']['field_related_url']['label'] = 'Opportunity number';
  $handler->display->display_options['fields']['field_related_url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_related_url']['alter']['text'] = '<a href="[field_related_url-url]">[field_opportunity_number]</a>';
  $handler->display->display_options['fields']['field_related_url']['click_sort_column'] = 'url';
  /* Field: Content revision: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node_revision';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  /* Field: Content: Sponsor */
  $handler->display->display_options['fields']['field_relate_sponsor']['id'] = 'field_relate_sponsor';
  $handler->display->display_options['fields']['field_relate_sponsor']['table'] = 'field_data_field_relate_sponsor';
  $handler->display->display_options['fields']['field_relate_sponsor']['field'] = 'field_relate_sponsor';
  $handler->display->display_options['fields']['field_relate_sponsor']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_relate_sponsor']['delta_offset'] = '0';
  /* Field: Content: Programs */
  $handler->display->display_options['fields']['field_related_program']['id'] = 'field_related_program';
  $handler->display->display_options['fields']['field_related_program']['table'] = 'field_data_field_related_program';
  $handler->display->display_options['fields']['field_related_program']['field'] = 'field_related_program';
  $handler->display->display_options['fields']['field_related_program']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_related_program']['delta_offset'] = '0';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_related_announcement_type']['id'] = 'field_related_announcement_type';
  $handler->display->display_options['fields']['field_related_announcement_type']['table'] = 'field_data_field_related_announcement_type';
  $handler->display->display_options['fields']['field_related_announcement_type']['field'] = 'field_related_announcement_type';
  $handler->display->display_options['fields']['field_related_announcement_type']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Prepropsal Loi deadline date */
  $handler->display->display_options['fields']['field_prepropsal_loideadline_dat']['id'] = 'field_prepropsal_loideadline_dat';
  $handler->display->display_options['fields']['field_prepropsal_loideadline_dat']['table'] = 'field_data_field_prepropsal_loideadline_dat';
  $handler->display->display_options['fields']['field_prepropsal_loideadline_dat']['field'] = 'field_prepropsal_loideadline_dat';
  $handler->display->display_options['fields']['field_prepropsal_loideadline_dat']['settings'] = array(
    'format_type' => 'rich_snippets_published_date',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Proposal deadline */
  $handler->display->display_options['fields']['field_proposal_deadline']['id'] = 'field_proposal_deadline';
  $handler->display->display_options['fields']['field_proposal_deadline']['table'] = 'field_data_field_proposal_deadline';
  $handler->display->display_options['fields']['field_proposal_deadline']['field'] = 'field_proposal_deadline';
  $handler->display->display_options['fields']['field_proposal_deadline']['settings'] = array(
    'format_type' => 'rich_snippets_published_date',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'funding_opportunity' => 'funding_opportunity',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Sponsor (field_relate_sponsor) */
  $handler->display->display_options['filters']['field_relate_sponsor_target_id']['id'] = 'field_relate_sponsor_target_id';
  $handler->display->display_options['filters']['field_relate_sponsor_target_id']['table'] = 'field_data_field_relate_sponsor';
  $handler->display->display_options['filters']['field_relate_sponsor_target_id']['field'] = 'field_relate_sponsor_target_id';
  $handler->display->display_options['filters']['field_relate_sponsor_target_id']['group'] = 1;
  $handler->display->display_options['filters']['field_relate_sponsor_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_relate_sponsor_target_id']['expose']['operator_id'] = 'field_relate_sponsor_target_id_op';
  $handler->display->display_options['filters']['field_relate_sponsor_target_id']['expose']['label'] = 'Filter by Sponsor ';
  $handler->display->display_options['filters']['field_relate_sponsor_target_id']['expose']['operator'] = 'field_relate_sponsor_target_id_op';
  $handler->display->display_options['filters']['field_relate_sponsor_target_id']['expose']['identifier'] = 'field_relate_sponsor_target_id';
  $handler->display->display_options['filters']['field_relate_sponsor_target_id']['expose']['remember_roles'] = array(
    2 => 0,
    1 => 0,
    3 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_relate_sponsor_target_id']['group_info']['label'] = 'Sponsor (field_relate_sponsor)';
  $handler->display->display_options['filters']['field_relate_sponsor_target_id']['group_info']['identifier'] = 'field_relate_sponsor_target_id';
  $handler->display->display_options['filters']['field_relate_sponsor_target_id']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['field_relate_sponsor_target_id']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  /* Filter criterion: Content: Programs (field_related_program) */
  $handler->display->display_options['filters']['field_related_program_target_id']['id'] = 'field_related_program_target_id';
  $handler->display->display_options['filters']['field_related_program_target_id']['table'] = 'field_data_field_related_program';
  $handler->display->display_options['filters']['field_related_program_target_id']['field'] = 'field_related_program_target_id';
  $handler->display->display_options['filters']['field_related_program_target_id']['group'] = 1;
  $handler->display->display_options['filters']['field_related_program_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_related_program_target_id']['expose']['operator_id'] = 'field_related_program_target_id_op';
  $handler->display->display_options['filters']['field_related_program_target_id']['expose']['label'] = 'Filter by Programs ';
  $handler->display->display_options['filters']['field_related_program_target_id']['expose']['operator'] = 'field_related_program_target_id_op';
  $handler->display->display_options['filters']['field_related_program_target_id']['expose']['identifier'] = 'field_related_program_target_id';
  $handler->display->display_options['filters']['field_related_program_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    6 => 0,
  );
  /* Filter criterion: Content: Type (field_related_announcement_type) */
  $handler->display->display_options['filters']['field_related_announcement_type_target_id']['id'] = 'field_related_announcement_type_target_id';
  $handler->display->display_options['filters']['field_related_announcement_type_target_id']['table'] = 'field_data_field_related_announcement_type';
  $handler->display->display_options['filters']['field_related_announcement_type_target_id']['field'] = 'field_related_announcement_type_target_id';
  $handler->display->display_options['filters']['field_related_announcement_type_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_related_announcement_type_target_id']['expose']['operator_id'] = 'field_related_announcement_type_target_id_op';
  $handler->display->display_options['filters']['field_related_announcement_type_target_id']['expose']['label'] = 'Filter by announcement Type';
  $handler->display->display_options['filters']['field_related_announcement_type_target_id']['expose']['operator'] = 'field_related_announcement_type_target_id_op';
  $handler->display->display_options['filters']['field_related_announcement_type_target_id']['expose']['identifier'] = 'field_related_announcement_type_target_id';
  $handler->display->display_options['filters']['field_related_announcement_type_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    6 => 0,
  );
  /* Filter criterion: Content: Proposal deadline (field_proposal_deadline) */
  $handler->display->display_options['filters']['field_proposal_deadline_value']['id'] = 'field_proposal_deadline_value';
  $handler->display->display_options['filters']['field_proposal_deadline_value']['table'] = 'field_data_field_proposal_deadline';
  $handler->display->display_options['filters']['field_proposal_deadline_value']['field'] = 'field_proposal_deadline_value';
  $handler->display->display_options['filters']['field_proposal_deadline_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_proposal_deadline_value']['expose']['operator_id'] = 'field_proposal_deadline_value_op';
  $handler->display->display_options['filters']['field_proposal_deadline_value']['expose']['label'] = 'Filter by Proposal deadline';
  $handler->display->display_options['filters']['field_proposal_deadline_value']['expose']['operator'] = 'field_proposal_deadline_value_op';
  $handler->display->display_options['filters']['field_proposal_deadline_value']['expose']['identifier'] = 'field_proposal_deadline_value';
  $handler->display->display_options['filters']['field_proposal_deadline_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_proposal_deadline_value']['granularity'] = 'month';
  $handler->display->display_options['filters']['field_proposal_deadline_value']['form_type'] = 'date_popup';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'test-funding-filters';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'test_funding_filters';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $export['test_funding_filters'] = $view;

  return $export;
}
