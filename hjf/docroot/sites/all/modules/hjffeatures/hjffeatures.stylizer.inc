<?php
/**
 * @file
 * hjffeatures.stylizer.inc
 */

/**
 * Implements hook_default_stylizer().
 */
function hjffeatures_default_stylizer() {
  $export = array();

  $style = new stdClass();
  $style->disabled = FALSE; /* Edit this to true to make a default style disabled initially */
  $style->api_version = 1;
  $style->name = 'my_stilyser_test';
  $style->admin_title = 'my_stilyser_test';
  $style->admin_description = 'testing my stilyser';
  $style->settings = array(
    'name' => 'my_stilyser_test',
    'style_base' => 'pane_rounded_shadow',
    'palette' => array(
      'background' => '#FFFFFF',
      'text' => '#000000',
      'header-text' => '#000000',
      'header-border' => '#000000',
    ),
    'header_font' => array(
      'font' => 'Times New Roman, Times, serif',
      'size' => 'small',
      'letter_spacing' => '',
      'word_spacing' => '',
      'decoration' => '',
      'weight' => '',
      'style' => '',
      'variant' => '',
      'case' => '',
      'alignment' => '',
    ),
    'text_font' => array(
      'font' => '',
      'size' => '',
      'letter_spacing' => '',
      'word_spacing' => '',
      'decoration' => '',
      'weight' => '',
      'style' => '',
      'variant' => '',
      'case' => '',
      'alignment' => '',
    ),
    'padding' => array(
      'top' => '',
      'right' => '',
      'bottom' => '',
      'left' => '',
    ),
    'header_border' => array(
      'thickness' => '',
      'style' => '',
    ),
  );
  $export['my_stilyser_test'] = $style;

  $style = new stdClass();
  $style->disabled = FALSE; /* Edit this to true to make a default style disabled initially */
  $style->api_version = 1;
  $style->name = 'mysecondtes';
  $style->admin_title = 'mysecondtest';
  $style->admin_description = '';
  $style->settings = array(
    'name' => 'mysecondtes',
    'style_base' => 'pane_rounded_shadow',
    'palette' => array(
      'background' => '#FFFFFF',
      'text' => '#000000',
      'header-text' => '#000000',
      'header-border' => '#000000',
    ),
    'header_font' => array(
      'font' => 'Verdana, Arial, Helvetica, sans-serif',
      'size' => 'medium',
      'letter_spacing' => '',
      'word_spacing' => '',
      'decoration' => '',
      'weight' => 'bold',
      'style' => '',
      'variant' => '',
      'case' => '',
      'alignment' => '',
    ),
    'text_font' => array(
      'font' => 'Verdana, Arial, Helvetica, sans-serif',
      'size' => 'small',
      'letter_spacing' => '',
      'word_spacing' => '',
      'decoration' => '',
      'weight' => 'normal',
      'style' => '',
      'variant' => '',
      'case' => '',
      'alignment' => '',
    ),
    'padding' => array(
      'top' => '',
      'right' => '',
      'bottom' => '',
      'left' => '',
    ),
    'header_border' => array(
      'thickness' => '1px',
      'style' => 'outset',
    ),
  );
  $export['mysecondtes'] = $style;

  $style = new stdClass();
  $style->disabled = FALSE; /* Edit this to true to make a default style disabled initially */
  $style->api_version = 1;
  $style->name = 'testview';
  $style->admin_title = 'testing view parameter ';
  $style->admin_description = 'testing view parameter using styilyser with panel';
  $style->settings = array(
    'name' => 'testview',
    'style_base' => 'pane_rounded_shadow',
    'palette' => array(
      'background' => '#FFFFFF',
      'text' => '#000000',
      'header-text' => '#000000',
      'header-border' => '#000000',
    ),
    'header_font' => array(
      'font' => 'Trebuchet MS, Trebuchet, Verdana, sans-serif',
      'size' => 'small',
      'letter_spacing' => '',
      'word_spacing' => '',
      'decoration' => '',
      'weight' => '',
      'style' => '',
      'variant' => '',
      'case' => '',
      'alignment' => 'left',
    ),
    'text_font' => array(
      'font' => 'Trebuchet MS, Trebuchet, Verdana, sans-serif',
      'size' => 'small',
      'letter_spacing' => '',
      'word_spacing' => '',
      'decoration' => '',
      'weight' => '',
      'style' => '',
      'variant' => '',
      'case' => '',
      'alignment' => '',
    ),
    'padding' => array(
      'top' => '',
      'right' => '',
      'bottom' => '',
      'left' => '',
    ),
    'header_border' => array(
      'thickness' => '1px',
      'style' => 'outset',
    ),
  );
  $export['testview'] = $style;

  return $export;
}
