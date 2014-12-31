<?php
/**
 * @file
 * hjffeatures.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function hjffeatures_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_http_response';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'http_response';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'node_service_edit',
    'contexts' => array(),
    'relationships' => array(),
    'code' => '301',
    'destination' => '',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'services' => 'services',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $export['node_view_http_response'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'node_service',
    'no_blocks' => 1,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'Node',
        'keyword' => 'node_2',
        'name' => 'entity:node',
        'entity_id' => '226',
        'id' => 1,
      ),
    ),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'services' => 'services',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'foundation_2col';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'd76cb731-860e-44fe-b6e2-441b77fd561c';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-664c8be1-dd6c-48b9-8eb9-ef17ee53863b';
    $pane->panel = 'left';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'custom_content_Icon_body',
      'title' => '',
      'body' => '<div><img alt="%node:title" src="%node:field_icon" />%node:body</div>
',
      'format' => 'full_html',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'stylizer:mysecondtes',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '664c8be1-dd6c-48b9-8eb9-ef17ee53863b';
    $display->content['new-664c8be1-dd6c-48b9-8eb9-ef17ee53863b'] = $pane;
    $display->panels['left'][0] = 'new-664c8be1-dd6c-48b9-8eb9-ef17ee53863b';
    $pane = new stdClass();
    $pane->pid = 'new-c1a6a4dc-17d4-49b9-a6c1-74a1761de73f';
    $pane->panel = 'left';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_icon';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'file_view_mode' => 'default',
        'image_style' => 'large',
        'image_link' => '',
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'c1a6a4dc-17d4-49b9-a6c1-74a1761de73f';
    $display->content['new-c1a6a4dc-17d4-49b9-a6c1-74a1761de73f'] = $pane;
    $display->panels['left'][1] = 'new-c1a6a4dc-17d4-49b9-a6c1-74a1761de73f';
    $pane = new stdClass();
    $pane->pid = 'new-81a48521-ff46-43a0-9547-22441bb8b403';
    $pane->panel = 'left';
    $pane->type = 'node_body';
    $pane->subtype = 'node_body';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '81a48521-ff46-43a0-9547-22441bb8b403';
    $display->content['new-81a48521-ff46-43a0-9547-22441bb8b403'] = $pane;
    $display->panels['left'][2] = 'new-81a48521-ff46-43a0-9547-22441bb8b403';
    $pane = new stdClass();
    $pane->pid = 'new-c23cff28-2e14-43d4-86dc-7e6e23c9b309';
    $pane->panel = 'left';
    $pane->type = 'node_title';
    $pane->subtype = 'node_title';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 1,
      'markup' => 'none',
      'id' => '',
      'class' => '',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'c23cff28-2e14-43d4-86dc-7e6e23c9b309';
    $display->content['new-c23cff28-2e14-43d4-86dc-7e6e23c9b309'] = $pane;
    $display->panels['left'][3] = 'new-c23cff28-2e14-43d4-86dc-7e6e23c9b309';
    $pane = new stdClass();
    $pane->pid = 'new-1ceec916-0363-40f3-ab7d-6441b29d2d84';
    $pane->panel = 'left';
    $pane->type = 'node_content';
    $pane->subtype = 'node_content';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'links' => 1,
      'no_extras' => 1,
      'override_title' => 0,
      'override_title_text' => '',
      'identifier' => '',
      'link' => 1,
      'leave_node_title' => 0,
      'build_mode' => 'full',
      'context' => 'argument_entity_id:node_1',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '1ceec916-0363-40f3-ab7d-6441b29d2d84';
    $display->content['new-1ceec916-0363-40f3-ab7d-6441b29d2d84'] = $pane;
    $display->panels['left'][4] = 'new-1ceec916-0363-40f3-ab7d-6441b29d2d84';
    $pane = new stdClass();
    $pane->pid = 'new-0bafc3ab-93de-4a3c-9fc5-5652d8215ae1';
    $pane->panel = 'right';
    $pane->type = 'views';
    $pane->subtype = 'services_all_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'page_1',
      'context' => array(
        0 => 'argument_entity_id:node_1.nid',
      ),
      'override_title' => 1,
      'override_title_text' => 'Related success stories',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'stylizer:mysecondtes',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '0bafc3ab-93de-4a3c-9fc5-5652d8215ae1';
    $display->content['new-0bafc3ab-93de-4a3c-9fc5-5652d8215ae1'] = $pane;
    $display->panels['right'][0] = 'new-0bafc3ab-93de-4a3c-9fc5-5652d8215ae1';
    $pane = new stdClass();
    $pane->pid = 'new-7ada54da-322a-49ea-8a96-3aee286692f6';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'services_all_content-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:node_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'stylizer:mysecondtes',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '7ada54da-322a-49ea-8a96-3aee286692f6';
    $display->content['new-7ada54da-322a-49ea-8a96-3aee286692f6'] = $pane;
    $display->panels['right'][1] = 'new-7ada54da-322a-49ea-8a96-3aee286692f6';
    $pane = new stdClass();
    $pane->pid = 'new-2d1ba001-9529-4bd8-8bc2-c8ae62b2681b';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'master_with_all_content-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:node_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'stylizer:mysecondtes',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '2d1ba001-9529-4bd8-8bc2-c8ae62b2681b';
    $display->content['new-2d1ba001-9529-4bd8-8bc2-c8ae62b2681b'] = $pane;
    $display->panels['right'][2] = 'new-2d1ba001-9529-4bd8-8bc2-c8ae62b2681b';
    $pane = new stdClass();
    $pane->pid = 'new-e06544e6-4de8-4f81-bea3-b30cf02a124e';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'services_all_content-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:node_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'stylizer:mysecondtes',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'e06544e6-4de8-4f81-bea3-b30cf02a124e';
    $display->content['new-e06544e6-4de8-4f81-bea3-b30cf02a124e'] = $pane;
    $display->panels['right'][3] = 'new-e06544e6-4de8-4f81-bea3-b30cf02a124e';
    $pane = new stdClass();
    $pane->pid = 'new-8f877d27-454d-4b10-82fd-0cedfbe0065a';
    $pane->panel = 'right';
    $pane->type = 'custom';
    $pane->subtype = 'contact_service';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '',
      'format' => 'filtered_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'stylizer:mysecondtes',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '8f877d27-454d-4b10-82fd-0cedfbe0065a';
    $display->content['new-8f877d27-454d-4b10-82fd-0cedfbe0065a'] = $pane;
    $display->panels['right'][4] = 'new-8f877d27-454d-4b10-82fd-0cedfbe0065a';
    $pane = new stdClass();
    $pane->pid = 'new-d9be104c-ed7a-425b-ae16-c56794a28d02';
    $pane->panel = 'right';
    $pane->type = 'forward_node';
    $pane->subtype = 'forward_node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'stylizer:mysecondtes',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = 'd9be104c-ed7a-425b-ae16-c56794a28d02';
    $display->content['new-d9be104c-ed7a-425b-ae16-c56794a28d02'] = $pane;
    $display->panels['right'][5] = 'new-d9be104c-ed7a-425b-ae16-c56794a28d02';
    $pane = new stdClass();
    $pane->pid = 'new-39587143-9fe2-48d3-9f3b-3b106cd49dd4';
    $pane->panel = 'right';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Daniel',
      'title' => 'Daniel demo',
      'body' => 'Hello word',
      'format' => 'full_html',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'stylizer:mysecondtes',
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = '39587143-9fe2-48d3-9f3b-3b106cd49dd4';
    $display->content['new-39587143-9fe2-48d3-9f3b-3b106cd49dd4'] = $pane;
    $display->panels['right'][6] = 'new-39587143-9fe2-48d3-9f3b-3b106cd49dd4';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-1ceec916-0363-40f3-ab7d-6441b29d2d84';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_2';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 2;
  $handler->conf = array(
    'title' => 'Funding Opportunity',
    'no_blocks' => 1,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'funding_opportunity' => 'funding_opportunity',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'foundation_2col';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '688b9052-3a30-423c-a969-cdb40f656491';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-4ae9dcf2-fe29-4166-ae57-92e19eda9eed';
    $pane->panel = 'left';
    $pane->type = 'node_title';
    $pane->subtype = 'node_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 1,
      'markup' => 'none',
      'id' => '',
      'class' => '',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '4ae9dcf2-fe29-4166-ae57-92e19eda9eed';
    $display->content['new-4ae9dcf2-fe29-4166-ae57-92e19eda9eed'] = $pane;
    $display->panels['left'][0] = 'new-4ae9dcf2-fe29-4166-ae57-92e19eda9eed';
    $pane = new stdClass();
    $pane->pid = 'new-dafa4bd3-f574-4e01-b62a-e918cf0e038f';
    $pane->panel = 'left';
    $pane->type = 'node_type_desc';
    $pane->subtype = 'node_type_desc';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'dafa4bd3-f574-4e01-b62a-e918cf0e038f';
    $display->content['new-dafa4bd3-f574-4e01-b62a-e918cf0e038f'] = $pane;
    $display->panels['left'][1] = 'new-dafa4bd3-f574-4e01-b62a-e918cf0e038f';
    $pane = new stdClass();
    $pane->pid = 'new-e89a65dc-9b1c-4cd4-bb12-857730db6f94';
    $pane->panel = 'left';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_related_url';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'link_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'e89a65dc-9b1c-4cd4-bb12-857730db6f94';
    $display->content['new-e89a65dc-9b1c-4cd4-bb12-857730db6f94'] = $pane;
    $display->panels['left'][2] = 'new-e89a65dc-9b1c-4cd4-bb12-857730db6f94';
    $pane = new stdClass();
    $pane->pid = 'new-fab9d119-5419-467d-9d27-e3ea9afadacd';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-cBaN9dBUMVumDA1BiijxLnEprq22gtJx';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'default',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'fab9d119-5419-467d-9d27-e3ea9afadacd';
    $display->content['new-fab9d119-5419-467d-9d27-e3ea9afadacd'] = $pane;
    $display->panels['right'][0] = 'new-fab9d119-5419-467d-9d27-e3ea9afadacd';
    $pane = new stdClass();
    $pane->pid = 'new-14078331-bb51-4bb0-addc-d632326e1483';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_relate_sponsor';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'entityreference_label',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'link' => 1,
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'stylizer:mysecondtes',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '14078331-bb51-4bb0-addc-d632326e1483';
    $display->content['new-14078331-bb51-4bb0-addc-d632326e1483'] = $pane;
    $display->panels['right'][1] = 'new-14078331-bb51-4bb0-addc-d632326e1483';
    $pane = new stdClass();
    $pane->pid = 'new-25d5d43a-45c7-49f0-8557-23f481e7f7b7';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_related_program';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'entityreference_label',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'link' => 1,
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'stylizer:mysecondtes',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '25d5d43a-45c7-49f0-8557-23f481e7f7b7';
    $display->content['new-25d5d43a-45c7-49f0-8557-23f481e7f7b7'] = $pane;
    $display->panels['right'][2] = 'new-25d5d43a-45c7-49f0-8557-23f481e7f7b7';
    $pane = new stdClass();
    $pane->pid = 'new-4a5a36f4-9f64-49c4-9957-9585c5ab8684';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_related_announcement_type';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'entityreference_label',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'link' => 0,
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'stylizer:mysecondtes',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '4a5a36f4-9f64-49c4-9957-9585c5ab8684';
    $display->content['new-4a5a36f4-9f64-49c4-9957-9585c5ab8684'] = $pane;
    $display->panels['right'][3] = 'new-4a5a36f4-9f64-49c4-9957-9585c5ab8684';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_2'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function hjffeatures_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'about';
  $page->task = 'page';
  $page->admin_title = 'About';
  $page->admin_description = 'create aan about page with panel to maximize the layout options';
  $page->path = 'content/about';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'About',
    'name' => 'main-menu',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_about_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'about';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel_About',
    'no_blocks' => 1,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'foundation_1col';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '3fef53b8-bb70-4398-a7d4-94411c9a1c2d';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-c2cd4d0e-2e52-44aa-a903-3c629ae3e9cb';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<p>The Henry M. Jackson Foundation for the Advancement of Military Medicine, Inc. (HJF) is a global organization dedicated to advancing military medical research. We serve military, medical, academic and government clients by administering, managing and supporting preeminent scientific programs that benefit members of the armed forces and civilians alike.</p>

<p>The not-for-profit Foundation is authorized by Congress to support research at the Uniformed Services University of the Health Sciences (USU) and throughout military medicine. Since its founding in 1983, HJF has served as a vital link between the military medical community and its federal and private partners. The Foundation’s support and administrative capabilities allow military medical researchers and clinicians to maintain their scientific focus and to accomplish their research goals effectively and efficiently.</p>
',
      'format' => 'filtered_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'stylizer:mysecondtes',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c2cd4d0e-2e52-44aa-a903-3c629ae3e9cb';
    $display->content['new-c2cd4d0e-2e52-44aa-a903-3c629ae3e9cb'] = $pane;
    $display->panels['middle'][0] = 'new-c2cd4d0e-2e52-44aa-a903-3c629ae3e9cb';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['about'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'combined_federal_campaign';
  $page->task = 'page';
  $page->admin_title = 'Combined Federal Campaign';
  $page->admin_description = 'Combined Federal Campaign in panel';
  $page->path = 'donation/combined_federal_campaign';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Combined Federal Campaign',
    'name' => 'main-menu',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_combined_federal_campaign_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'combined_federal_campaign';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 1,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '3f3e1cfa-eede-4946-b33b-60e31133aa1c';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-d3d479cc-b785-4c24-b24d-5d0cb989fb09';
    $pane->panel = 'center';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Combined Federal Campaign',
      'title' => 'Combined Federal Campaign',
      'body' => '<p>The Henry M. Jackson Foundation for the Advancement of Military Medicine (HJF) is pleased to participate in the Combined Federal Campaign (CFC).</p>

<p>HJF is listed in the CFC under the name, "Military Medical Research and Education Foundation," a title that helps donors locate us and understand the nature of the important work we support. CFC Number 92719 Thank you for donating to us through the CFC.</p>

<p>If you have any questions please email donate@hjf.org</p>
',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'stylizer:mysecondtes',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd3d479cc-b785-4c24-b24d-5d0cb989fb09';
    $display->content['new-d3d479cc-b785-4c24-b24d-5d0cb989fb09'] = $pane;
    $display->panels['center'][0] = 'new-d3d479cc-b785-4c24-b24d-5d0cb989fb09';
    $pane = new stdClass();
    $pane->pid = 'new-340babcc-bbe6-4839-bad5-78f098a799e0';
    $pane->panel = 'center';
    $pane->type = 'custom';
    $pane->subtype = 'donation_disclaimer';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '',
      'format' => 'popup_tags',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'stylizer:mysecondtes',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '340babcc-bbe6-4839-bad5-78f098a799e0';
    $display->content['new-340babcc-bbe6-4839-bad5-78f098a799e0'] = $pane;
    $display->panels['center'][1] = 'new-340babcc-bbe6-4839-bad5-78f098a799e0';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['combined_federal_campaign'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'contact_panel';
  $page->task = 'page';
  $page->admin_title = 'Contact_Panel';
  $page->admin_description = 'contact form in panel with possibility to ad a map';
  $page->path = 'contact_research_initiatives_office';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => '',
    'name' => 'main-menu',
    'weight' => '8',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_contact_panel_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'contact_panel';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 1,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'f2ed5240-3733-4784-a5a1-f419b47b6f85';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-3350b043-8619-40d8-9791-41d0109f9fd0';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'webform-client-block-221';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '3350b043-8619-40d8-9791-41d0109f9fd0';
    $display->content['new-3350b043-8619-40d8-9791-41d0109f9fd0'] = $pane;
    $display->panels['center'][0] = 'new-3350b043-8619-40d8-9791-41d0109f9fd0';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-3350b043-8619-40d8-9791-41d0109f9fd0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['contact_panel'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'differentview';
  $page->task = 'page';
  $page->admin_title = 'Differentview';
  $page->admin_description = 'different view of funding opportunity';
  $page->path = 'Differentview';
  $page->access = array();
  $page->menu = array(
    'type' => 'tab',
    'title' => 'Funding',
    'name' => 'navigation',
    'weight' => '4',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_differentview_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'differentview';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Paneldifferentview',
    'no_blocks' => 1,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'foundation_1col';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Different Ops';
  $display->uuid = '24759fa4-e582-4407-9064-f6ceef4dee0f';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-378a33a7-cc97-4abc-a76d-dcc01e4a4767';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '',
      'format' => 'filtered_html',
      'substitute' => TRUE,
      'name' => 'funding_folder',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '378a33a7-cc97-4abc-a76d-dcc01e4a4767';
    $display->content['new-378a33a7-cc97-4abc-a76d-dcc01e4a4767'] = $pane;
    $display->panels['middle'][0] = 'new-378a33a7-cc97-4abc-a76d-dcc01e4a4767';
    $pane = new stdClass();
    $pane->pid = 'new-cc7d441d-7b08-43b2-bf42-cca5d7bd0035';
    $pane->panel = 'middle';
    $pane->type = 'views';
    $pane->subtype = 'test_funding_filters';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '10',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'page',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'cc7d441d-7b08-43b2-bf42-cca5d7bd0035';
    $display->content['new-cc7d441d-7b08-43b2-bf42-cca5d7bd0035'] = $pane;
    $display->panels['middle'][1] = 'new-cc7d441d-7b08-43b2-bf42-cca5d7bd0035';
    $pane = new stdClass();
    $pane->pid = 'new-0accbba7-4c7a-4058-bd54-1f29e86edb98';
    $pane->panel = 'middle';
    $pane->type = 'views';
    $pane->subtype = 'funding_opportunities';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '10',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'page',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'default',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '0accbba7-4c7a-4058-bd54-1f29e86edb98';
    $display->content['new-0accbba7-4c7a-4058-bd54-1f29e86edb98'] = $pane;
    $display->panels['middle'][2] = 'new-0accbba7-4c7a-4058-bd54-1f29e86edb98';
    $pane = new stdClass();
    $pane->pid = 'new-965311c9-928c-4fc7-8beb-e8edef8f9a1b';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'tes_rads_parameter';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '',
      'format' => 'filtered_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '965311c9-928c-4fc7-8beb-e8edef8f9a1b';
    $display->content['new-965311c9-928c-4fc7-8beb-e8edef8f9a1b'] = $pane;
    $display->panels['middle'][3] = 'new-965311c9-928c-4fc7-8beb-e8edef8f9a1b';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-0accbba7-4c7a-4058-bd54-1f29e86edb98';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['differentview'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'donate_by_mail_';
  $page->task = 'page';
  $page->admin_title = 'Donate by Mail ';
  $page->admin_description = '';
  $page->path = 'donation/Donate by Mail ';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Donate by Mail ',
    'name' => 'main-menu',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_donate_by_mail__panel_context';
  $handler->task = 'page';
  $handler->subtask = 'donate_by_mail_';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Donate by Mail ',
    'no_blocks' => 1,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Donate by Mail ';
  $display->uuid = 'c6e5aeed-a93e-4f15-921c-f477807892dc';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-82e18a48-203e-49b6-becb-8c01e87ad2f8';
    $pane->panel = 'center';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Donate by Mail ',
      'title' => 'Donate by Mail ',
      'body' => '<p><a href="/sites/default/files/HJF_Donation_Form.pdf"class="alert-box alert round">Download the donation form </a>if you would like to mail your gift Please mail the form along with your check, payable to HJF, to:<br />
HJF<br />
Attn: Donations 6720-A Rockledge Drive Suite 100 Bethesda, MD 20817<br />
Federal workers can contribute to HJF via the Combined Federal Campaign. Look for us in the campaign\'s Health &amp; Medical Research Charities of America section, under the name "Military Medical Research and Education Foundation." Your contribution will enhance the medical care and education of our servicemen and women and improve the health of people worldwide.</p>

<p>If you have any questions please email donate@hjf.org</p>
',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'stylizer:mysecondtes',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '82e18a48-203e-49b6-becb-8c01e87ad2f8';
    $display->content['new-82e18a48-203e-49b6-becb-8c01e87ad2f8'] = $pane;
    $display->panels['center'][0] = 'new-82e18a48-203e-49b6-becb-8c01e87ad2f8';
    $pane = new stdClass();
    $pane->pid = 'new-64673cd6-58f3-4124-b3f1-fe0cdb21a998';
    $pane->panel = 'center';
    $pane->type = 'custom';
    $pane->subtype = 'donation_disclaimer';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '',
      'format' => 'popup_tags',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'stylizer:mysecondtes',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '64673cd6-58f3-4124-b3f1-fe0cdb21a998';
    $display->content['new-64673cd6-58f3-4124-b3f1-fe0cdb21a998'] = $pane;
    $display->panels['center'][1] = 'new-64673cd6-58f3-4124-b3f1-fe0cdb21a998';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-82e18a48-203e-49b6-becb-8c01e87ad2f8';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['donate_by_mail_'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'donation';
  $page->task = 'page';
  $page->admin_title = 'Donation';
  $page->admin_description = 'Donation main page';
  $page->path = 'donation';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Donation',
    'name' => 'main-menu',
    'weight' => '8',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_donation_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'donation';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 1,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'foundation_2col';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
      'center' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '63f90c9c-c23f-4f54-8907-1f5cdcfe0e31';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-893a0421-bd82-42e5-a213-45cf18a46dac';
    $pane->panel = 'left';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Donations',
      'title' => 'Donations',
      'body' => '<p>One percent of the U.S. population volunteers to serve in our armed forces. It is the responsibility of the remaining 99 percent of us to assure that those who protect and defend our freedom with their lives receive the best possible medical care. Your donation to the Henry M. Jackson Foundation for the Advancement of Military Medicine (HJF) will provide funds above and beyond what government dollars can support and will help to expedite critical developments in research and clinical care to benefit our nation’s battle-wounded, ill and injured warriors. Support USU Support Research &amp; Education Donate now via mail HJF supports cutting-edge research at more than 1,000 military medical programs around the world. This research is making tremendous strides in diagnosing and treating posttraumatic stress disorder and traumatic brain injury, as well as developing prosthetic and rehabilitation technologies. Now, you can help support these efforts. Funds donated to HJF will support promising military medical research and promote and enhance the education of career military and public health professionals at the Uniformed Services University of the Health Sciences. HJF is listed in the Combined Federal Campaign (CFC) under the name “Military Medical Research and Education Foundation” to better explain the nature of the important work HJF supports. Read more information about CFC.</p>
',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'stylizer:mysecondtes',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '893a0421-bd82-42e5-a213-45cf18a46dac';
    $display->content['new-893a0421-bd82-42e5-a213-45cf18a46dac'] = $pane;
    $display->panels['left'][0] = 'new-893a0421-bd82-42e5-a213-45cf18a46dac';
    $pane = new stdClass();
    $pane->pid = 'new-53527a27-4f77-4333-8621-f737cb9272a7';
    $pane->panel = 'left';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '',
      'format' => 'popup_tags',
      'substitute' => TRUE,
      'name' => 'donation_disclaimer',
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'stylizer:2ndtry_donation_disclaimer',
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '53527a27-4f77-4333-8621-f737cb9272a7';
    $display->content['new-53527a27-4f77-4333-8621-f737cb9272a7'] = $pane;
    $display->panels['left'][1] = 'new-53527a27-4f77-4333-8621-f737cb9272a7';
    $pane = new stdClass();
    $pane->pid = 'new-631ccfec-3a3e-4d64-9bdd-29820ee20e3d';
    $pane->panel = 'right';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Support USU',
      'title' => 'Support USU',
      'body' => '<div>
<p><a class="alert-box alert round" href="http://www.hjf.org/../donate/donate-for-usu" target="_blank">Support USU</a></p>
</div>
',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'stylizer:mysecondtes',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '631ccfec-3a3e-4d64-9bdd-29820ee20e3d';
    $display->content['new-631ccfec-3a3e-4d64-9bdd-29820ee20e3d'] = $pane;
    $display->panels['right'][0] = 'new-631ccfec-3a3e-4d64-9bdd-29820ee20e3d';
    $pane = new stdClass();
    $pane->pid = 'new-69a52009-a0f5-4ac5-87d5-8a102d4813cd';
    $pane->panel = 'right';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Support Research & Education',
      'title' => 'Support Research & Education',
      'body' => '<p><a class="alert-box alert round" href="http://www.hjf.org/../donate/donate-for-military-medical-research-and-education" target="_blank">Support Research &amp; Education</a></p>
',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'stylizer:mysecondtes',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '69a52009-a0f5-4ac5-87d5-8a102d4813cd';
    $display->content['new-69a52009-a0f5-4ac5-87d5-8a102d4813cd'] = $pane;
    $display->panels['right'][1] = 'new-69a52009-a0f5-4ac5-87d5-8a102d4813cd';
    $pane = new stdClass();
    $pane->pid = 'new-1d39820b-6d70-413f-933b-dbdb832fdf47';
    $pane->panel = 'right';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'donate now via mail',
      'title' => 'Donate now via mail',
      'body' => '<p><a href="/sites/default/files/HJF_Donation_Form.pdf" class = "alert-box alert round">Download the donation form </a>if you would like to mail your gift Please mail the form along with your check, payable to HJF, to: HJF Attn: Donations 6720-A Rockledge Drive Suite 100 Bethesda, MD 20817</p>
',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'stylizer:mysecondtes',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '1d39820b-6d70-413f-933b-dbdb832fdf47';
    $display->content['new-1d39820b-6d70-413f-933b-dbdb832fdf47'] = $pane;
    $display->panels['right'][2] = 'new-1d39820b-6d70-413f-933b-dbdb832fdf47';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['donation'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'events_listing';
  $page->task = 'page';
  $page->admin_title = 'events_listing';
  $page->admin_description = 'provide a list of events';
  $page->path = 'events';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Events',
    'name' => 'main-menu',
    'weight' => '6',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_events_listing_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'events_listing';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 1,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'foundation_2col';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
          1 => 'event_sidebar',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => '69.95180014355694',
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      'event_sidebar' => array(
        'type' => 'region',
        'title' => 'event-sidebar',
        'width' => '30.04819985644306',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'event_sidebar' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '1db6a692-a6f5-4f93-8d78-b79e3f092f79';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-e1b74567-4f95-4a97-a207-7c6fdfc32b6a';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'event_listing-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e1b74567-4f95-4a97-a207-7c6fdfc32b6a';
    $display->content['new-e1b74567-4f95-4a97-a207-7c6fdfc32b6a'] = $pane;
    $display->panels['left'][0] = 'new-e1b74567-4f95-4a97-a207-7c6fdfc32b6a';
    $pane = new stdClass();
    $pane->pid = 'new-4029e408-3cc3-4eeb-a298-e072aa729aaf';
    $pane->panel = 'right';
    $pane->type = 'views';
    $pane->subtype = 'events_calendar';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'stylizer:mysecondtes',
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '4029e408-3cc3-4eeb-a298-e072aa729aaf';
    $display->content['new-4029e408-3cc3-4eeb-a298-e072aa729aaf'] = $pane;
    $display->panels['right'][0] = 'new-4029e408-3cc3-4eeb-a298-e072aa729aaf';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-4029e408-3cc3-4eeb-a298-e072aa729aaf';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['events_listing'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'funding_opportunity_panels_views_context';
  $page->task = 'page';
  $page->admin_title = 'funding_opportunity_panels_views context';
  $page->admin_description = 'funding_opportunity_panels_ create from views context';
  $page->path = 'funding_opportunity_panels';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Funding Ops',
    'name' => 'navigation',
    'weight' => '3',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_funding_opportunity_panels_views_context_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'funding_opportunity_panels_views_context';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel_Funding_Opoortunities',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'View: Funding Opportunities: ContextFunding_opportunities',
        'keyword' => 'view',
        'name' => 'view:funding_opportunities-ctools_context_1',
        'id' => 1,
      ),
    ),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
          1 => 'right_side_bar',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => '53.98724082934609',
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      'right_side_bar' => array(
        'type' => 'region',
        'title' => 'right_side_bar',
        'width' => '46.01275917065391',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'right_side_bar' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'funding Opportunities';
  $display->uuid = 'c9209cab-88b8-4815-accb-a01845c8bf6b';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-f8949b00-885a-4fde-9349-63ebf9550b79';
    $pane->panel = 'center';
    $pane->type = 'views_view';
    $pane->subtype = 'views_view';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'context_view:funding_opportunities-ctools_context_1_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'f8949b00-885a-4fde-9349-63ebf9550b79';
    $display->content['new-f8949b00-885a-4fde-9349-63ebf9550b79'] = $pane;
    $display->panels['center'][0] = 'new-f8949b00-885a-4fde-9349-63ebf9550b79';
    $pane = new stdClass();
    $pane->pid = 'new-214ae269-2d4f-47e3-bd98-864e5d3e568d';
    $pane->panel = 'right_side_bar';
    $pane->type = 'custom';
    $pane->subtype = 'tes_rads_parameter';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '',
      'format' => 'filtered_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '214ae269-2d4f-47e3-bd98-864e5d3e568d';
    $display->content['new-214ae269-2d4f-47e3-bd98-864e5d3e568d'] = $pane;
    $display->panels['right_side_bar'][0] = 'new-214ae269-2d4f-47e3-bd98-864e5d3e568d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-f8949b00-885a-4fde-9349-63ebf9550b79';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['funding_opportunity_panels_views_context'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'funding_parameters';
  $page->task = 'page';
  $page->admin_title = 'Funding_parameters';
  $page->admin_description = 'create a contex view with parameters';
  $page->path = 'Funding_parameters';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => '',
    'name' => 'main-menu',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_funding_parameters_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'funding_parameters';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'View: funding_opportunities_parameter',
        'keyword' => 'view',
        'name' => 'view:funding_opportunities_parameter-ctools_context_1',
        'id' => 1,
      ),
    ),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '2442af76-b623-46d0-8616-a09dfdec0e9d';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-9ab3a4c0-bee8-40b2-a69a-fcfa30ee1060';
    $pane->panel = 'center';
    $pane->type = 'views';
    $pane->subtype = 'funding_opportunities_parameter';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '10',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'page',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'stylizer:testview',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '9ab3a4c0-bee8-40b2-a69a-fcfa30ee1060';
    $display->content['new-9ab3a4c0-bee8-40b2-a69a-fcfa30ee1060'] = $pane;
    $display->panels['center'][0] = 'new-9ab3a4c0-bee8-40b2-a69a-fcfa30ee1060';
    $pane = new stdClass();
    $pane->pid = 'new-42dba241-b599-4d2b-a1a4-a8e108a0468d';
    $pane->panel = 'center';
    $pane->type = 'views';
    $pane->subtype = 'funding_opportunities_parameter';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '10',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'ctools_context_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '42dba241-b599-4d2b-a1a4-a8e108a0468d';
    $display->content['new-42dba241-b599-4d2b-a1a4-a8e108a0468d'] = $pane;
    $display->panels['center'][1] = 'new-42dba241-b599-4d2b-a1a4-a8e108a0468d';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-42dba241-b599-4d2b-a1a4-a8e108a0468d';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['funding_parameters'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'history';
  $page->task = 'page';
  $page->admin_title = 'history';
  $page->admin_description = 'hjf history.';
  $page->path = 'about/History';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'History',
    'name' => 'main-menu',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_history_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'history';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'HJF_history',
    'no_blocks' => 1,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'foundation_2col';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
      'center' => NULL,
      'side_bar_right' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'd818a307-d9cf-4059-9623-1772cb9ff7a4';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-548277ac-fd0f-414b-ac78-cfcaa1c5e399';
    $pane->panel = 'left';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'history_main_content',
      'title' => '',
      'body' => 'Our organization dates to May 1983, when President Ronald Reagan signed into law a bill establishing the Foundation for the Advancement of Military Medicine, a private, not-for-profit organization. Five months later, the Foundation was named in honor of the late Sen. Henry M. “Scoop” Jackson, who sponsored the legislation that led to its founding.

The Foundation’s core functions as outlined in the legislation remain as relevant as ever:

    supporting research and education at the Uniformed Services University of the Health Sciences and throughout the military medical community
    serving as a link between military researchers and private medical sector.

Compared to its vast operations today, HJF was small in its early years; administering two federally sponsored research projects. Today, the Foundation manages more than 1,000 research grants and projects ranging from small bench-top projects to complex multisite programs.
Steady Growth

The Foundation has grown significantly since the early 1990s. Revenue rose from $44.1 million in 1992 to approximately $402 million in 2010, while employee ranks nearly quadrupled from 590 to 2,289 during the same period.

That growth fueled demand for new services. In 1994, the burgeoning study of new medicines and treatments at military facilities brought a realization that researchers needed assistance with the myriad and complex issues surrounding clinical trials. The Foundation responded by forming a Clinical Trials Office to offer administrative and management services to military researchers. The office helps scientists with protocol submissions and procurement services.

Six years later, HJF and USU officials formed a Joint Office of Technology Transfer to advance inventions by military, University and Foundation researchers.
Closer to Clients

The Foundation has moved its headquarters from Rockville, Md., to Bethesda, Md.

This move brings HJF closer to some key clients, including USU, the NIH, the Walter Reed Army Institute of Research and the Walter Reed National Military Medical Center.

The new building is designed and built to Leadership in Energy and Environmental Design standards for “green” buildings.
.',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'stylizer:mysecondtes',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '548277ac-fd0f-414b-ac78-cfcaa1c5e399';
    $display->content['new-548277ac-fd0f-414b-ac78-cfcaa1c5e399'] = $pane;
    $display->panels['left'][0] = 'new-548277ac-fd0f-414b-ac78-cfcaa1c5e399';
    $pane = new stdClass();
    $pane->pid = 'new-4a8d9817-6509-4d20-90a4-22ac25796fbc';
    $pane->panel = 'right';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<h3>Henry "Scoop" Jackson</h3>

<p><img alt="Henri Jackson" src="http://hjfdev.devcloud.acquia-sites.com/sites/default/files/HenryJackson.jpg" title="" /></p>

<p>Henry Martin “Scoop” Jackson was a U.S. congressman and senator from the state of Washington from 1941 until his death in 1983.</p>

<p>For more than 30 years, Jackson was deeply involved in the major issues of American political life, from the drama of the Army-McCarthy hearings in 1954 to the liberation of Soviet Jewry in the 1970s. He became an acknowledged authority on national security, energy and environmental issues.</p>

<p>Jackson sponsored the legislation that established the Foundation for the Advancement of Military Medicine, which was named in his honor after his death. He was posthumously awarded the Presidential Medal of Freedom on June 26, 1984.</p>
',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'stylizer:mysecondtes',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '4a8d9817-6509-4d20-90a4-22ac25796fbc';
    $display->content['new-4a8d9817-6509-4d20-90a4-22ac25796fbc'] = $pane;
    $display->panels['right'][0] = 'new-4a8d9817-6509-4d20-90a4-22ac25796fbc';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['history'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'hjf_donation_form_';
  $page->task = 'page';
  $page->admin_title = 'HJF Donation Form ';
  $page->admin_description = '';
  $page->path = 'donation/HJF_donation_form ';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'HJF Donation Form ',
    'name' => 'main-menu',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => TRUE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_hjf_donation_form__panel_context';
  $handler->task = 'page';
  $handler->subtask = 'hjf_donation_form_';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'HJF Donation Form ',
    'no_blocks' => 1,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '64f68cbb-82c4-48ff-afd2-e388970840d2';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-63bb24a9-3dd7-4f23-b778-c2eecf8e585e';
    $pane->panel = 'center';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'HJF Donation Form ',
      'title' => 'HJF Donation Form ',
      'body' => '<p><a href="/sites/default/files/HJF_Donation_Form.pdf">Download the donation form </a>PDF document, 259 kB (265247 bytes)</p>
',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'stylizer:mysecondtes',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '63bb24a9-3dd7-4f23-b778-c2eecf8e585e';
    $display->content['new-63bb24a9-3dd7-4f23-b778-c2eecf8e585e'] = $pane;
    $display->panels['center'][0] = 'new-63bb24a9-3dd7-4f23-b778-c2eecf8e585e';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-63bb24a9-3dd7-4f23-b778-c2eecf8e585e';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['hjf_donation_form_'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'homepage';
  $page->task = 'page';
  $page->admin_title = 'homepage';
  $page->admin_description = 'homepage ';
  $page->path = 'homepage';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Home',
    'name' => 'main-menu',
    'weight' => '1',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_homepage_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'homepage';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel_homepage',
    'no_blocks' => 1,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'foundation_1col';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '19c4129d-adb5-497a-8a65-d01e32612f60';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-190d6fe8-37e6-434b-9134-73896c3b8649';
    $pane->panel = 'middle';
    $pane->type = 'views';
    $pane->subtype = 'research_loc_openlayer';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '10',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'page',
      'override_title' => 1,
      'override_title_text' => 'Our Reach',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'stylizer:mysecondtes',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '190d6fe8-37e6-434b-9134-73896c3b8649';
    $display->content['new-190d6fe8-37e6-434b-9134-73896c3b8649'] = $pane;
    $display->panels['middle'][0] = 'new-190d6fe8-37e6-434b-9134-73896c3b8649';
    $pane = new stdClass();
    $pane->pid = 'new-c3831772-0d5f-4c0c-85be-bccc09a90b3b';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'home_text',
      'title' => '',
      'body' => '<p>The Henry M. Jackson Foundation for the Advancement of Military Medicine, Inc. (HJF) is a global organization dedicated to advancing military medical research. We serve military, medical, academic and government clients by administering, managing and supporting preeminent scientific programs that benefit members of the armed forces and civilians alike.</p>
',
      'format' => 'filtered_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'stylizer:mysecondtes',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'c3831772-0d5f-4c0c-85be-bccc09a90b3b';
    $display->content['new-c3831772-0d5f-4c0c-85be-bccc09a90b3b'] = $pane;
    $display->panels['middle'][1] = 'new-c3831772-0d5f-4c0c-85be-bccc09a90b3b';
    $pane = new stdClass();
    $pane->pid = 'new-721d32d5-4513-4455-8d4b-2fd9627895bd';
    $pane->panel = 'middle';
    $pane->type = 'views';
    $pane->subtype = 'research_carousel';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '10',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'page',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'stylizer:mysecondtes',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '721d32d5-4513-4455-8d4b-2fd9627895bd';
    $display->content['new-721d32d5-4513-4455-8d4b-2fd9627895bd'] = $pane;
    $display->panels['middle'][2] = 'new-721d32d5-4513-4455-8d4b-2fd9627895bd';
    $pane = new stdClass();
    $pane->pid = 'new-3acec521-c9f9-4220-ba04-6134b0a728de';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'tab_view_services_research_front',
      'title' => 'What we do.....',
      'body' => '<!--<?php
  $viewName = \'research_carousel\';
  print views_embed_view($viewName);
?>
-->
<dl class="tabs" data-tab> <dd class="active"><a href="#panel1">Support Research Programs</a></dd> 
<dd><a href="#panel2">Services</a></dd> 
<dd><a href="#panel3">Events</a></dd> 
<dd><a href="#panel4">Donate</a></dd> </dl> 
<div class="tabs-content"> <div class="content active" id="panel1"> <p>
HJF support research programs .
<?php
  $viewName = \'research_carousel\';
  print views_embed_view($viewName);
?>
</p> </div>
 <div class="content" id="panel2"> <p>Our Services 
The Foundation answers the needs of the military medical community with a full range of services that allow researchers and clinicians to maintain their scientific focus and accomplish their research goals effectively and efficiently.A proactive problem solver, HJF finds solutions for its valued clients.
<?php
  $viewName = \'services_carousel\';
  print views_embed_view($viewName);
?>
</p>  </div> 
<div class="content" id="panel3"> <p>

</p>  </div> 
<div class ="content" id="panel4"<p>
<div class="row">
<div class="medium-6 large-6 columns mmleft hide-for-small">
<p>One percent of the U.S. population volunteers to serve in our armed forces. It is the responsibility of the remaining 99 percent of us to assure that those who protect and defend our freedom with their lives receive the best possible medical care. Your donation to the Henry M. Jackson Foundation for the Advancement of Military Medicine (HJF) will provide funds above and beyond what government dollars can support and will help to expedite critical developments in research and clinical care to benefit our nation’s battle-wounded, ill and injured warriors. Support USU Support Research & Education Donate now via mail HJF supports cutting-edge research at more than 1,000 military medical programs around the world. .</p>
<p> </p>
<p>
<a class="button" href="#">Support USU</a>
<a class="button" href="#">Support Research & Education</a>
</p>
</div>
<div class="left medium-5 large-5 columns large-offset-1 ">
<ul id="Donate">
<li id="Support USU">
<a href="#">Donate USu</a>
<ul>
<li id="Support Education and Search">
<a href="#">SEU</a>
</li>
<li id="Donate by mail">
<a href="/give/time/in-our-community/">donate by mail</a>
</li>
</ul>
</li>
<li id="">
<a href="#">Money</a>
<ul>
<li id="give_give_money_ways-to-give">
<a href="">Ways to Donate</a>
</li>
</ul>
</li>
</ul>
</div>
</div>
</ul>
</li>
</ul>
</p></div></div>',
      'format' => 'php_code',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'stylizer:mysecondtes',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '3acec521-c9f9-4220-ba04-6134b0a728de';
    $display->content['new-3acec521-c9f9-4220-ba04-6134b0a728de'] = $pane;
    $display->panels['middle'][3] = 'new-3acec521-c9f9-4220-ba04-6134b0a728de';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['homepage'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'media';
  $page->task = 'page';
  $page->admin_title = 'Media';
  $page->admin_description = '';
  $page->path = 'media_room';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Media Room',
    'name' => 'main-menu',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_media_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'media';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 1,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'foundation_1col';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '83c7e6dd-523f-43e9-8218-8ddf1534373c';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-9b485706-a09e-4074-82cd-ec7976e776c1';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Media room',
      'title' => 'Media Room',
      'body' => 'The subject of military medicine lends itself to compelling stories ranging from battlefield injuries and treatments to civilian healthcare advances.

If you are a member of the media and would like to learn more about military medical research, please contact our Communications department. We can serve as a source of information and can facilitate interviews with military medical researchers.

Please note that we often need to coordinate with military public affairs offices so please give us as much lead time as possible.
Media Inquiries (Press Only)

    Phone: 240-694-2163
    Email: media@hjf.org

If you are a member of the news media, please contact HJF at the above phone number or email address and leave a detailed message including your name, press affiliation, phone number, questions and deadline. Messages are checked regularly each day.
Name Usage

If you are referring to the Foundation, we ask that you follow this guide for the sake of consistency.

Full name: The Henry M. Jackson Foundation for the Advancement of Military Medicine, Inc.
Second reference: HJF, the Foundation (When using "HJF" please do not insert "the" before the abbreviation.)
Websites: HJF.org

e.g. The Henry M. Jackson Foundation for the Advancement of Military Medicine (HJF) was authorized by Congress. HJF is a non-profit organization. The Foundation provides a variety of services.

When referring to the Foundation, please use the full name on first mention (The Henry M. Jackson Foundation for the Advancement of Military Medicine). In formal documents, include ", Inc." In marketing and similar copy, the ", Inc." is not necessary.

Please do not use other shortened versions of our name, such as "The Jackson Foundation" or "Jackson." There is more than one Henry M. Jackson Foundation, so we must distinguish ourselves clearly. (The other foundation, which has no affiliation with HJF, deals with environmental, international affairs, public services and human rights issues.)

We have registered HJF as our official nickname in large part to distinguish us from the other Henry M. Jackson Foundation, but also to give ourselves a single, distinct and memorable abbreviation. For this reason, please always use "HJF," never "HMJF," "HMJFAMM" or any other abbreviation.
.',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'stylizer:mysecondtes',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '9b485706-a09e-4074-82cd-ec7976e776c1';
    $display->content['new-9b485706-a09e-4074-82cd-ec7976e776c1'] = $pane;
    $display->panels['middle'][0] = 'new-9b485706-a09e-4074-82cd-ec7976e776c1';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-9b485706-a09e-4074-82cd-ec7976e776c1';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['media'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'news_listing';
  $page->task = 'page';
  $page->admin_title = 'news listing';
  $page->admin_description = 'from the view that list the news ';
  $page->path = 'pnlnews';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'News',
    'name' => 'main-menu',
    'weight' => '8',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_news_listing_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'news_listing';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'foundation_1col';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '2b738ef0-d14f-400e-b434-496c48452ec5';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-e78fb284-0623-4be1-a661-edf5f3401328';
    $pane->panel = 'middle';
    $pane->type = 'views';
    $pane->subtype = 'news';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '10',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'page',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e78fb284-0623-4be1-a661-edf5f3401328';
    $display->content['new-e78fb284-0623-4be1-a661-edf5f3401328'] = $pane;
    $display->panels['middle'][0] = 'new-e78fb284-0623-4be1-a661-edf5f3401328';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-e78fb284-0623-4be1-a661-edf5f3401328';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['news_listing'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'pnl_contact_list';
  $page->task = 'page';
  $page->admin_title = 'pnl_contact_list';
  $page->admin_description = 'the full list of contacts displayed with panels';
  $page->path = 'content/contact_list';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'HJF Contacts ',
    'name' => 'main-menu',
    'weight' => '10',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_pnl_contact_list_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'pnl_contact_list';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 1,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'foundation_1col';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'c6245bd8-a7fe-4f1b-92b0-de97aa5699e1';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-a6978257-fb3e-439f-b5f3-d1b0a9f6b94b';
    $pane->panel = 'middle';
    $pane->type = 'views';
    $pane->subtype = 'contact_list';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '50',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'page',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a6978257-fb3e-439f-b5f3-d1b0a9f6b94b';
    $display->content['new-a6978257-fb3e-439f-b5f3-d1b0a9f6b94b'] = $pane;
    $display->panels['middle'][0] = 'new-a6978257-fb3e-439f-b5f3-d1b0a9f6b94b';
    $pane = new stdClass();
    $pane->pid = 'new-24aa865c-fc47-4f78-bbdb-935c73cc6048';
    $pane->panel = 'middle';
    $pane->type = 'views';
    $pane->subtype = 'contact_list';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '50',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'page_2',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '24aa865c-fc47-4f78-bbdb-935c73cc6048';
    $display->content['new-24aa865c-fc47-4f78-bbdb-935c73cc6048'] = $pane;
    $display->panels['middle'][1] = 'new-24aa865c-fc47-4f78-bbdb-935c73cc6048';
    $pane = new stdClass();
    $pane->pid = 'new-ade71168-c2ab-4916-9269-fe0d0e5dafae';
    $pane->panel = 'middle';
    $pane->type = 'views';
    $pane->subtype = 'contact_list';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '50',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'page',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'ade71168-c2ab-4916-9269-fe0d0e5dafae';
    $display->content['new-ade71168-c2ab-4916-9269-fe0d0e5dafae'] = $pane;
    $display->panels['middle'][2] = 'new-ade71168-c2ab-4916-9269-fe0d0e5dafae';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-a6978257-fb3e-439f-b5f3-d1b0a9f6b94b';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['pnl_contact_list'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'pnl_council_of_director';
  $page->task = 'page';
  $page->admin_title = 'pnl_council_of_director';
  $page->admin_description = 'list to display the council directors.';
  $page->path = 'about/Council_of_Directors';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Council of Directors',
    'name' => 'main-menu',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_pnl_council_of_director_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'pnl_council_of_director';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 1,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'foundation_1col';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '1ad0d2e6-7861-45dc-b83b-5d06e0df8afe';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-a87e95a2-a902-41b3-9cb9-9bddf423246d';
    $pane->panel = 'middle';
    $pane->type = 'views';
    $pane->subtype = 'staff';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'page_4',
      'override_title' => 1,
      'override_title_text' => 'Council of Directors',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'stylizer:mysecondtes',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a87e95a2-a902-41b3-9cb9-9bddf423246d';
    $display->content['new-a87e95a2-a902-41b3-9cb9-9bddf423246d'] = $pane;
    $display->panels['middle'][0] = 'new-a87e95a2-a902-41b3-9cb9-9bddf423246d';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-a87e95a2-a902-41b3-9cb9-9bddf423246d';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['pnl_council_of_director'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'privacy_policy_';
  $page->task = 'page';
  $page->admin_title = 'Privacy Policy ';
  $page->admin_description = '';
  $page->path = 'donation/Privacy Policy ';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Privacy Policy ',
    'name' => 'main-menu',
    'weight' => '2',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_privacy_policy__panel_context';
  $handler->task = 'page';
  $handler->subtask = 'privacy_policy_';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Privacy Policy ',
    'no_blocks' => 1,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'foundation_1col';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '9ec8ae34-aae1-4083-9800-857a885854f1';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-7234ecc8-f89f-4539-b203-58f811afb012';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Privacy Policy ',
      'title' => 'Privacy Policy ',
      'body' => '<p>The Henry M. Jackson Foundation for the Advancement of Military Medicine, Inc. (HJF) is committed to safeguarding your privacy. This statement explains our online information practices, and describes what personal information we collect and how it is used.</p>

<p><span style="color:#808080">Making a Donation</span></p>

<p>When you make an online donation on HJF.org we collect personal information such as your name, billing address, and email address. This personally identifiable information is used to acknowledge receipt of your donation for tax purposes and possibly to include you on HJF\'s email mailing list unless you elect to be removed from that list. When you send a donation in honor or in memory of someone and request that an acknowledgement be sent to another individual or a family, we will use the name and address of that individual or family for acknowledgement purposes only.</p>

<p><span style="color:#808080">Credit Card Payments </span></p>

<p>Credit card or bank account numbers are collected by third-party payment vendors such as VeriSign and/or PayPal. The use of this information is based on the policies and procedures of the applicable third-party payment vendors, and not this Privacy Policy. We encourage you to read each company\'s privacy policy before submitting any personal information on the HJF website. HJF will not collect or have access to any complete credit card numbers or bank account information our third-party vendors (VeriSign and/or PayPal) collect to process online transactions.</p>

<p><span style="color:#808080">Disclosure of Personal Information</span></p>

<p>Except as otherwise expressly noted in this Privacy Policy, HJF will not (1) disclose your personal information without your consent, unless we need to respond to a subpoena, court order or legal process, or (2) share your personal information with third parties by selling, giving, trading or any other method.</p>

<p><span style="color:#808080">Links to Other Websites </span></p>

<p>Other websites, including links to other websites that appear on HJF.org from time to time, have their own privacy policies. When you provide personal information at any one of those sites, you are subject to the privacy policy of the operator of that site, and not this Privacy Policy. We encourage you to read each such privacy policy before submitting any personal information.</p>

<p><span style="color:#808080">Privacy Policy Updates</span></p>

<p>Our privacy policy is reviewed from time to time to make sure we continue to serve the privacy interests of our customers. If our information practices change materially, we will post the policy changes on the privacy page of this website to notify you of these changes. Please check our website periodically for more information on how we use the data we collect.</p>

<p><span style="color:#808080">Contact Us</span></p>

<p>If you have questions or concerns regarding our privacy policy, please email us at donate@hjf.org.</p>
',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'stylizer:mysecondtes',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '7234ecc8-f89f-4539-b203-58f811afb012';
    $display->content['new-7234ecc8-f89f-4539-b203-58f811afb012'] = $pane;
    $display->panels['middle'][0] = 'new-7234ecc8-f89f-4539-b203-58f811afb012';
    $pane = new stdClass();
    $pane->pid = 'new-469d76ee-7990-444b-b143-0654a8e03ea7';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'donation_disclaimer';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '',
      'format' => 'popup_tags',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'stylizer:mysecondtes',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '469d76ee-7990-444b-b143-0654a8e03ea7';
    $display->content['new-469d76ee-7990-444b-b143-0654a8e03ea7'] = $pane;
    $display->panels['middle'][1] = 'new-469d76ee-7990-444b-b143-0654a8e03ea7';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['privacy_policy_'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'research_location';
  $page->task = 'page';
  $page->admin_title = 'Research Location';
  $page->admin_description = '';
  $page->path = 'research_programs/research_locations';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Research Locations',
    'name' => 'main-menu',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_research_location_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'research_location';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 1,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '18627f22-54be-471f-b473-ad3c8d74dcb7';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-2925333f-2c8c-4abb-adfa-6536d303e663';
    $pane->panel = 'center';
    $pane->type = 'views';
    $pane->subtype = 'research_location';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '20',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'page',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'stylizer:mysecondtes',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '2925333f-2c8c-4abb-adfa-6536d303e663';
    $display->content['new-2925333f-2c8c-4abb-adfa-6536d303e663'] = $pane;
    $display->panels['center'][0] = 'new-2925333f-2c8c-4abb-adfa-6536d303e663';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-2925333f-2c8c-4abb-adfa-6536d303e663';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['research_location'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'research_programs';
  $page->task = 'page';
  $page->admin_title = 'research programs';
  $page->admin_description = '';
  $page->path = 'research_programs';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Research Programs',
    'name' => 'main-menu',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_research_programs_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'research_programs';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 1,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'View: Research Programs: research_programs_context',
        'keyword' => 'view',
        'name' => 'view:research_programs-ctools_context_1',
        'id' => 1,
      ),
    ),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'foundation_1col';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'ad59ee79-4c42-46de-b177-965490168339';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-277e6b54-c709-47ae-97b7-eb8613d2f158';
    $pane->panel = 'middle';
    $pane->type = 'views';
    $pane->subtype = 'research_programs';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '10',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'page',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '277e6b54-c709-47ae-97b7-eb8613d2f158';
    $display->content['new-277e6b54-c709-47ae-97b7-eb8613d2f158'] = $pane;
    $display->panels['middle'][0] = 'new-277e6b54-c709-47ae-97b7-eb8613d2f158';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['research_programs'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'services';
  $page->task = 'page';
  $page->admin_title = 'Services';
  $page->admin_description = '';
  $page->path = 'content/MyServices';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 1,
            1 => 2,
            2 => 3,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'MyServices',
    'name' => 'main-menu',
    'weight' => '4',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_services_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'services';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'View: Services',
        'keyword' => 'view',
        'name' => 'view:services-ctools_context_1',
        'id' => 1,
      ),
    ),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'foundation_1col';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '85108b5f-d95e-4fa9-87ba-8e7dbe659bc2';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-e7b81eb4-d4e9-4587-b3d2-8560a44987b9';
    $pane->panel = 'middle';
    $pane->type = 'views';
    $pane->subtype = 'services';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '10',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 1,
      'args' => '',
      'url' => '',
      'display' => 'page_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e7b81eb4-d4e9-4587-b3d2-8560a44987b9';
    $display->content['new-e7b81eb4-d4e9-4587-b3d2-8560a44987b9'] = $pane;
    $display->panels['middle'][0] = 'new-e7b81eb4-d4e9-4587-b3d2-8560a44987b9';
    $pane = new stdClass();
    $pane->pid = 'new-283f5530-6e68-4e68-999d-e50b2612aeaf';
    $pane->panel = 'middle';
    $pane->type = 'views';
    $pane->subtype = 'success_story';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'default',
      'context' => array(
        0 => '',
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '283f5530-6e68-4e68-999d-e50b2612aeaf';
    $display->content['new-283f5530-6e68-4e68-999d-e50b2612aeaf'] = $pane;
    $display->panels['middle'][1] = 'new-283f5530-6e68-4e68-999d-e50b2612aeaf';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-e7b81eb4-d4e9-4587-b3d2-8560a44987b9';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_services_panel_context_2';
  $handler->task = 'page';
  $handler->subtask = 'services';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'service_node',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'foundation_2col';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'service_node';
  $display->uuid = '1f20624a-d7bf-4cfe-9f84-bf81e87a5181';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-78965fcb-d3e7-491f-a2df-a4ec14d9be9d';
    $pane->panel = 'left';
    $pane->type = 'views';
    $pane->subtype = 'success_story';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 1,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'default',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '78965fcb-d3e7-491f-a2df-a4ec14d9be9d';
    $display->content['new-78965fcb-d3e7-491f-a2df-a4ec14d9be9d'] = $pane;
    $display->panels['left'][0] = 'new-78965fcb-d3e7-491f-a2df-a4ec14d9be9d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['services'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'staff_';
  $page->task = 'page';
  $page->admin_title = 'Staff ';
  $page->admin_description = 'query staff based on their position category';
  $page->path = 'about/leadership';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Leadership',
    'name' => 'main-menu',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_staff__panel_context';
  $handler->task = 'page';
  $handler->subtask = 'staff_';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 1,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'foundation_1col';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '4ee5bee4-85a4-4443-b1c4-9d21c33ef15c';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-01d26141-7840-445e-bfd9-672ee39a515d';
    $pane->panel = 'middle';
    $pane->type = 'views';
    $pane->subtype = 'staff';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'page_1',
      'override_title' => 1,
      'override_title_text' => 'Leadership',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'stylizer:mysecondtes',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '01d26141-7840-445e-bfd9-672ee39a515d';
    $display->content['new-01d26141-7840-445e-bfd9-672ee39a515d'] = $pane;
    $display->panels['middle'][0] = 'new-01d26141-7840-445e-bfd9-672ee39a515d';
    $pane = new stdClass();
    $pane->pid = 'new-df8210d6-bf3e-4c98-a9f0-72370d219eb5';
    $pane->panel = 'middle';
    $pane->type = 'views';
    $pane->subtype = 'staff';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'page_2',
      'override_title' => 1,
      'override_title_text' => 'Executive Team',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'stylizer:mysecondtes',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'df8210d6-bf3e-4c98-a9f0-72370d219eb5';
    $display->content['new-df8210d6-bf3e-4c98-a9f0-72370d219eb5'] = $pane;
    $display->panels['middle'][1] = 'new-df8210d6-bf3e-4c98-a9f0-72370d219eb5';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-01d26141-7840-445e-bfd9-672ee39a515d';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['staff_'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'tes_front_panel';
  $page->task = 'page';
  $page->admin_title = 'tes_front_panel';
  $page->admin_description = '';
  $page->path = 'content/Home';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => '',
    'weight' => '0',
    'name' => 'navigation',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'weight' => 0,
      'name' => 'navigation',
    ),
  );
  $page->arguments = array();
  $page->conf = array();
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_tes_front_panel_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'tes_front_panel';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Landing page',
    'no_blocks' => FALSE,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'front',
          'settings' => NULL,
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 1,
          1 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
          1 => 'side_bar',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => '78.1378468347307',
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      'side_bar' => array(
        'type' => 'region',
        'title' => 'side_bar',
        'width' => '21.862153165269312',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(),
        'parent' => 'main',
        'class' => '',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'side_bar' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '0d5caf3d-a16d-48aa-9d4b-721d02e43ebc';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-2147fac4-9e4e-441a-902f-165eacc93d02';
    $pane->panel = 'center';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'home_text',
      'title' => '',
      'body' => '<p>The Henry M. Jackson Foundation for the Advancement of Military Medicine, Inc. (HJF) is a global organization dedicated to advancing military medical research. We serve military, medical, academic and government clients by administering, managing and supporting preeminent scientific programs that benefit members of the armed forces and civilians alike.</p>
',
      'format' => 'filtered_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '2147fac4-9e4e-441a-902f-165eacc93d02';
    $display->content['new-2147fac4-9e4e-441a-902f-165eacc93d02'] = $pane;
    $display->panels['center'][0] = 'new-2147fac4-9e4e-441a-902f-165eacc93d02';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['tes_front_panel'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'test_success_services';
  $page->task = 'page';
  $page->admin_title = 'test_success_services';
  $page->admin_description = '';
  $page->path = 'service_success_story';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => '',
    'name' => 'main-menu',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_test_success_services_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'test_success_services';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'Node',
        'keyword' => 'node',
        'name' => 'entity:node',
        'entity_id' => '226',
        'id' => 1,
      ),
    ),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '18c2922f-0062-45ba-b41f-e474033e0f74';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-29217255-1ebc-4120-b1d8-71da926cdb28';
    $pane->panel = 'center';
    $pane->type = 'views';
    $pane->subtype = 'service_success_story';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '10',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'page',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '29217255-1ebc-4120-b1d8-71da926cdb28';
    $display->content['new-29217255-1ebc-4120-b1d8-71da926cdb28'] = $pane;
    $display->panels['center'][0] = 'new-29217255-1ebc-4120-b1d8-71da926cdb28';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-29217255-1ebc-4120-b1d8-71da926cdb28';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['test_success_services'] = $page;

  return $pages;

}
