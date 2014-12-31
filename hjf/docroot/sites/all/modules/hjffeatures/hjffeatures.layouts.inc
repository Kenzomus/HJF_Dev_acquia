<?php
/**
 * @file
 * hjffeatures.layouts.inc
 */

/**
 * Implements hook_default_panels_layout().
 */
function hjffeatures_default_panels_layout() {
  $export = array();

  $layout = new stdClass();
  $layout->disabled = FALSE; /* Edit this to true to make a default layout disabled initially */
  $layout->api_version = 1;
  $layout->name = 'guide_services';
  $layout->admin_title = 'guide services';
  $layout->admin_description = 'a 3 columns layout using the grid.side lef and righ  class "large-3 columns" the center column "large-6 columns"';
  $layout->category = 'guide_services';
  $layout->plugin = 'flexible';
  $layout->settings = array(
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
          0 => 'nav_left_guide',
          1 => 'center',
          2 => 'right_side_alert',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => '53.4796850292058',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => 'large-6 columns',
      ),
      'right_side_alert' => array(
        'type' => 'region',
        'title' => 'right_side_alert',
        'width' => '21.520314970794207',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => 'large-3 columns',
      ),
      'nav_left_guide' => array(
        'type' => 'region',
        'title' => 'nav_left_guide',
        'width' => 25,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => 'large-3 columns',
      ),
    ),
  );
  $export['guide_services'] = $layout;

  $layout = new stdClass();
  $layout->disabled = FALSE; /* Edit this to true to make a default layout disabled initially */
  $layout->api_version = 1;
  $layout->name = 'history_layout';
  $layout->admin_title = 'history_layout';
  $layout->admin_description = '';
  $layout->category = '';
  $layout->plugin = 'flexible';
  $layout->settings = array(
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
          1 => 'side_bar_right',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => '73.87511478420568',
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      'side_bar_right' => array(
        'type' => 'region',
        'title' => 'side_bar_right',
        'width' => '26.12488521579432',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
    ),
  );
  $export['history_layout'] = $layout;

  return $export;
}
