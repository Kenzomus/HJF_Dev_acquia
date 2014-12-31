<?php
/**
 * @file
 * hjffeatures.apachesolr_environments.inc
 */

/**
 * Implements hook_apachesolr_environments().
 */
function hjffeatures_apachesolr_environments() {
  $export = array();

  $environment = new stdClass();
  $environment->api_version = 1;
  $environment->env_id = 'acquia_search_server_1';
  $environment->name = 'Acquia Search';
  $environment->url = 'http://useast1-c6.acquia-search.com/solr/EJVX-55996';
  $environment->service_class = 'AcquiaSearchService';
  $environment->conf = array(
    'apachesolr_search_facet_pages' => '',
    'apachesolr_search_show_facets' => 1,
  );
  $environment->index_bundles = array(
    'node' => array(
      0 => 'announcement_type',
      1 => 'article',
      2 => 'clients',
      3 => 'content_slider',
      4 => 'events',
      5 => 'faq',
      6 => 'funding_opportunity',
      7 => 'page',
      8 => 'panel',
      9 => 'postion_category',
      10 => 'program',
      11 => 'rads',
      12 => 'research_location',
      13 => 'services',
      14 => 'sponsor',
      15 => 'srvices_category',
      16 => 'staff',
      17 => 'succes_story',
      18 => 'webform',
    ),
  );
  $export['acquia_search_server_1'] = $environment;

  $environment = new stdClass();
  $environment->api_version = 1;
  $environment->env_id = 'solr';
  $environment->name = 'localhost server';
  $environment->url = 'http://localhost:8983/solr';
  $environment->service_class = '';
  $environment->conf = array();
  $environment->index_bundles = array(
    'node' => array(
      0 => 'announcement_type',
      1 => 'article',
      2 => 'clients',
      3 => 'contact',
      4 => 'content_slider',
      5 => 'daniel',
      6 => 'department',
      7 => 'events',
      8 => 'faq',
      9 => 'funding_opportunity',
      10 => 'guide_main_category',
      11 => 'guide_steps',
      12 => 'job_post',
      13 => 'locations',
      14 => 'news',
      15 => 'page',
      16 => 'panel',
      17 => 'postion_category',
      18 => 'program',
      19 => 'rads',
      20 => 'research_location',
      21 => 'research_program',
      22 => 'rockville_pike',
      23 => 'services',
      24 => 'sponsor',
      25 => 'srvices_category',
      26 => 'staff',
      27 => 'succes_story',
      28 => 'webform',
    ),
  );
  $export['solr'] = $environment;

  return $export;
}
