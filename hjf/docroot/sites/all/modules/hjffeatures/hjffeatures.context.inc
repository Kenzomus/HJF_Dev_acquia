<?php
/**
 * @file
 * hjffeatures.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function hjffeatures_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'funding_oppotunity_search';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'funding_opportunities' => 'funding_opportunities',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'facetapi-tkoF9P3FV2pxzvxTNPLgSbwP7nI0k1Im' => array(
          'module' => 'facetapi',
          'delta' => 'tkoF9P3FV2pxzvxTNPLgSbwP7nI0k1Im',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'facetapi-KpxS3SXhqu4IPbSzocBkIF3202ToGoTs' => array(
          'module' => 'facetapi',
          'delta' => 'KpxS3SXhqu4IPbSzocBkIF3202ToGoTs',
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
        'facetapi-iudKcHwRMMDlH2IOStKQlTOPTo8BRbX3' => array(
          'module' => 'facetapi',
          'delta' => 'iudKcHwRMMDlH2IOStKQlTOPTo8BRbX3',
          'region' => 'sidebar_first',
          'weight' => '-8',
        ),
        'facetapi-DaXWfzsRBg8cSABKdOBcdMR4my3UJIDm' => array(
          'module' => 'facetapi',
          'delta' => 'DaXWfzsRBg8cSABKdOBcdMR4my3UJIDm',
          'region' => 'sidebar_first',
          'weight' => '-7',
        ),
        'apachesolr_search-mlt-001' => array(
          'module' => 'apachesolr_search',
          'delta' => 'mlt-001',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'apachesolr_search-sort' => array(
          'module' => 'apachesolr_search',
          'delta' => 'sort',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'current_search-standard' => array(
          'module' => 'current_search',
          'delta' => 'standard',
          'region' => 'sidebar_second',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['funding_oppotunity_search'] = $context;

  return $export;
}
