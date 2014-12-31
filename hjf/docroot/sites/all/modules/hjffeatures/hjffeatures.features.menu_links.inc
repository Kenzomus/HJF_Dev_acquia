<?php
/**
 * @file
 * hjffeatures.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function hjffeatures_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: features_media-room:node/376
  $menu_links['features_media-room:node/376'] = array(
    'menu_name' => 'features',
    'link_path' => 'node/376',
    'router_path' => 'node/%',
    'link_title' => 'Media Room',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'features_media-room:node/376',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: main-menu_:Funding_parameters
  $menu_links['main-menu_:Funding_parameters'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'Funding_parameters',
    'router_path' => 'Funding_parameters',
    'link_title' => '',
    'options' => array(
      'identifier' => 'main-menu_:Funding_parameters',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: main-menu_:contact_research_initiatives_office
  $menu_links['main-menu_:contact_research_initiatives_office'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'contact_research_initiatives_office',
    'router_path' => 'contact_research_initiatives_office',
    'link_title' => '',
    'options' => array(
      'identifier' => 'main-menu_:contact_research_initiatives_office',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -35,
    'customized' => 1,
  );
  // Exported menu link: main-menu_:service_success_story
  $menu_links['main-menu_:service_success_story'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'service_success_story',
    'router_path' => 'service_success_story',
    'link_title' => '',
    'options' => array(
      'identifier' => 'main-menu_:service_success_story',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: main-menu_about-us:node/231
  $menu_links['main-menu_about-us:node/231'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/231',
    'router_path' => 'node/%',
    'link_title' => 'About Us',
    'options' => array(
      'identifier' => 'main-menu_about-us:node/231',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -40,
    'customized' => 1,
  );
  // Exported menu link: main-menu_about:content/about
  $menu_links['main-menu_about:content/about'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'content/about',
    'router_path' => 'content/about',
    'link_title' => 'About',
    'options' => array(
      'identifier' => 'main-menu_about:content/about',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: main-menu_annual-reports:node/911
  $menu_links['main-menu_annual-reports:node/911'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/911',
    'router_path' => 'node/%',
    'link_title' => 'Annual Reports',
    'options' => array(
      'identifier' => 'main-menu_annual-reports:node/911',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'main-menu_about:content/about',
  );
  // Exported menu link: main-menu_careers:node/381
  $menu_links['main-menu_careers:node/381'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/381',
    'router_path' => 'node/%',
    'link_title' => 'Careers',
    'options' => array(
      'identifier' => 'main-menu_careers:node/381',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -36,
    'customized' => 1,
  );
  // Exported menu link: main-menu_clinical-trials:node/216
  $menu_links['main-menu_clinical-trials:node/216'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/216',
    'router_path' => 'node/%',
    'link_title' => 'Clinical Trials',
    'options' => array(
      'identifier' => 'main-menu_clinical-trials:node/216',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'main-menu_services:content/MyServices',
  );
  // Exported menu link: main-menu_combined-federal-campaign:donation/combined_federal_campaign
  $menu_links['main-menu_combined-federal-campaign:donation/combined_federal_campaign'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'donation/combined_federal_campaign',
    'router_path' => 'donation/combined_federal_campaign',
    'link_title' => 'Combined Federal Campaign',
    'options' => array(
      'identifier' => 'main-menu_combined-federal-campaign:donation/combined_federal_campaign',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'main-menu_donation:donation',
  );
  // Exported menu link: main-menu_communications:node/931
  $menu_links['main-menu_communications:node/931'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/931',
    'router_path' => 'node/%',
    'link_title' => 'Communications',
    'options' => array(
      'identifier' => 'main-menu_communications:node/931',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'main-menu_services:content/MyServices',
  );
  // Exported menu link: main-menu_contact-us:http://hjfdev.devcloud.acquia-sites.com/contact_research_initiatives_office
  $menu_links['main-menu_contact-us:http://hjfdev.devcloud.acquia-sites.com/contact_research_initiatives_office'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://hjfdev.devcloud.acquia-sites.com/contact_research_initiatives_office',
    'router_path' => '',
    'link_title' => 'Contact Us',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_contact-us:http://hjfdev.devcloud.acquia-sites.com/contact_research_initiatives_office',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -32,
    'customized' => 1,
  );
  // Exported menu link: main-menu_contact:node/221
  $menu_links['main-menu_contact:node/221'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/221',
    'router_path' => 'node/%',
    'link_title' => 'Contact',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_contact:node/221',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -33,
    'customized' => 1,
  );
  // Exported menu link: main-menu_council-of-directors:about/Council_of_Directors
  $menu_links['main-menu_council-of-directors:about/Council_of_Directors'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'about/Council_of_Directors',
    'router_path' => 'about/Council_of_Directors',
    'link_title' => 'Council of Directors',
    'options' => array(
      'identifier' => 'main-menu_council-of-directors:about/Council_of_Directors',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_about:content/about',
  );
  // Exported menu link: main-menu_culture-and-benefits:node/386
  $menu_links['main-menu_culture-and-benefits:node/386'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/386',
    'router_path' => 'node/%',
    'link_title' => 'Culture and Benefits',
    'options' => array(
      'identifier' => 'main-menu_culture-and-benefits:node/386',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'main-menu_careers:node/381',
  );
  // Exported menu link: main-menu_directions-to-hjf:node/946
  $menu_links['main-menu_directions-to-hjf:node/946'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/946',
    'router_path' => 'node/%',
    'link_title' => 'Directions to HJF',
    'options' => array(
      'identifier' => 'main-menu_directions-to-hjf:node/946',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
    'parent_identifier' => 'main-menu_about:content/about',
  );
  // Exported menu link: main-menu_donation:donation
  $menu_links['main-menu_donation:donation'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'donation',
    'router_path' => 'donation',
    'link_title' => 'Donation',
    'options' => array(
      'identifier' => 'main-menu_donation:donation',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -31,
    'customized' => 1,
  );
  // Exported menu link: main-menu_ethics:node/546
  $menu_links['main-menu_ethics:node/546'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/546',
    'router_path' => 'node/%',
    'link_title' => 'Ethics',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_ethics:node/546',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'parent_identifier' => 'main-menu_about:content/about',
  );
  // Exported menu link: main-menu_event-planning:node/936
  $menu_links['main-menu_event-planning:node/936'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/936',
    'router_path' => 'node/%',
    'link_title' => 'Event Planning',
    'options' => array(
      'identifier' => 'main-menu_event-planning:node/936',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'main-menu_services:content/MyServices',
  );
  // Exported menu link: main-menu_eventlisting:event-listing
  $menu_links['main-menu_eventlisting:event-listing'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'event-listing',
    'router_path' => 'event-listing',
    'link_title' => 'event_listing',
    'options' => array(
      'identifier' => 'main-menu_eventlisting:event-listing',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -42,
    'customized' => 1,
  );
  // Exported menu link: main-menu_events:events
  $menu_links['main-menu_events:events'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'events',
    'router_path' => 'events',
    'link_title' => 'Events',
    'options' => array(
      'identifier' => 'main-menu_events:events',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -34,
    'customized' => 1,
  );
  // Exported menu link: main-menu_frequently-asked-questions:faq-page
  $menu_links['main-menu_frequently-asked-questions:faq-page'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'faq-page',
    'router_path' => 'faq-page',
    'link_title' => 'Frequently Asked Questions',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_frequently-asked-questions:faq-page',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 2,
    'customized' => 1,
    'parent_identifier' => 'main-menu_donation:donation',
  );
  // Exported menu link: main-menu_funding:Differentview
  $menu_links['main-menu_funding:Differentview'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'Differentview',
    'router_path' => 'Differentview',
    'link_title' => 'Funding',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_funding:Differentview',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -30,
    'customized' => 1,
  );
  // Exported menu link: main-menu_funding:funding-opportunities
  $menu_links['main-menu_funding:funding-opportunities'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'funding-opportunities',
    'router_path' => 'funding-opportunities',
    'link_title' => 'Funding',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_funding:funding-opportunities',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: main-menu_guest-scientists:node/901
  $menu_links['main-menu_guest-scientists:node/901'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/901',
    'router_path' => 'node/%',
    'link_title' => 'Guest Scientists',
    'options' => array(
      'identifier' => 'main-menu_guest-scientists:node/901',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_research-programs:research_programs',
  );
  // Exported menu link: main-menu_history:about/History
  $menu_links['main-menu_history:about/History'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'about/History',
    'router_path' => 'about/History',
    'link_title' => 'History',
    'options' => array(
      'identifier' => 'main-menu_history:about/History',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_about:content/about',
  );
  // Exported menu link: main-menu_hjf-2011-annual-report:node/916
  $menu_links['main-menu_hjf-2011-annual-report:node/916'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/916',
    'router_path' => 'node/%',
    'link_title' => 'HJF 2011 Annual Report',
    'options' => array(
      'identifier' => 'main-menu_hjf-2011-annual-report:node/916',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'main-menu_annual-reports:node/911',
  );
  // Exported menu link: main-menu_hjf-2012-annual-report:node/921
  $menu_links['main-menu_hjf-2012-annual-report:node/921'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/921',
    'router_path' => 'node/%',
    'link_title' => 'HJF 2012 Annual Report',
    'options' => array(
      'identifier' => 'main-menu_hjf-2012-annual-report:node/921',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'main-menu_annual-reports:node/911',
  );
  // Exported menu link: main-menu_hjf-2013-annual-report:node/926
  $menu_links['main-menu_hjf-2013-annual-report:node/926'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/926',
    'router_path' => 'node/%',
    'link_title' => 'HJF 2013 Annual Report',
    'options' => array(
      'identifier' => 'main-menu_hjf-2013-annual-report:node/926',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'main-menu_annual-reports:node/911',
  );
  // Exported menu link: main-menu_hjf-contacts-:content/contact_list
  $menu_links['main-menu_hjf-contacts-:content/contact_list'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'content/contact_list',
    'router_path' => 'content/contact_list',
    'link_title' => 'HJF Contacts ',
    'options' => array(
      'identifier' => 'main-menu_hjf-contacts-:content/contact_list',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -28,
    'customized' => 1,
  );
  // Exported menu link: main-menu_home:<front>
  $menu_links['main-menu_home:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'identifier' => 'main-menu_home:<front>',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: main-menu_home:homepage
  $menu_links['main-menu_home:homepage'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'homepage',
    'router_path' => 'homepage',
    'link_title' => 'Home',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_home:homepage',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: main-menu_human-resources:node/941
  $menu_links['main-menu_human-resources:node/941'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/941',
    'router_path' => 'node/%',
    'link_title' => 'Human Resources',
    'options' => array(
      'identifier' => 'main-menu_human-resources:node/941',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'main-menu_services:content/MyServices',
  );
  // Exported menu link: main-menu_leadership:about/leadership
  $menu_links['main-menu_leadership:about/leadership'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'about/leadership',
    'router_path' => 'about/leadership',
    'link_title' => 'Leadership',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_leadership:about/leadership',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_about:content/about',
  );
  // Exported menu link: main-menu_media-room:media_room
  $menu_links['main-menu_media-room:media_room'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'media_room',
    'router_path' => 'media_room',
    'link_title' => 'Media Room',
    'options' => array(
      'identifier' => 'main-menu_media-room:media_room',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -29,
    'customized' => 1,
  );
  // Exported menu link: main-menu_news:news
  $menu_links['main-menu_news:news'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'news',
    'router_path' => 'news',
    'link_title' => 'News',
    'options' => array(
      'identifier' => 'main-menu_news:news',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
  );
  // Exported menu link: main-menu_news:pnlnews
  $menu_links['main-menu_news:pnlnews'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'pnlnews',
    'router_path' => 'pnlnews',
    'link_title' => 'News',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_news:pnlnews',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -37,
    'customized' => 1,
  );
  // Exported menu link: main-menu_open-jobs:node/391
  $menu_links['main-menu_open-jobs:node/391'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/391',
    'router_path' => 'node/%',
    'link_title' => 'Open Jobs',
    'options' => array(
      'identifier' => 'main-menu_open-jobs:node/391',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 1,
    'customized' => 0,
    'parent_identifier' => 'main-menu_careers:node/381',
  );
  // Exported menu link: main-menu_program-management:node/206
  $menu_links['main-menu_program-management:node/206'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/206',
    'router_path' => 'node/%',
    'link_title' => 'Program Management',
    'options' => array(
      'identifier' => 'main-menu_program-management:node/206',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'main-menu_services:content/MyServices',
  );
  // Exported menu link: main-menu_proposal-development:node/196
  $menu_links['main-menu_proposal-development:node/196'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/196',
    'router_path' => 'node/%',
    'link_title' => 'Proposal Development',
    'options' => array(
      'identifier' => 'main-menu_proposal-development:node/196',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'main-menu_services:content/MyServices',
  );
  // Exported menu link: main-menu_research-administration:node/201
  $menu_links['main-menu_research-administration:node/201'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/201',
    'router_path' => 'node/%',
    'link_title' => 'Research Administration',
    'options' => array(
      'identifier' => 'main-menu_research-administration:node/201',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'main-menu_services:content/MyServices',
  );
  // Exported menu link: main-menu_research-locations:research_programs/research_locations
  $menu_links['main-menu_research-locations:research_programs/research_locations'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'research_programs/research_locations',
    'router_path' => 'research_programs/research_locations',
    'link_title' => 'Research Locations',
    'options' => array(
      'identifier' => 'main-menu_research-locations:research_programs/research_locations',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_research-programs:research_programs',
  );
  // Exported menu link: main-menu_research-programs:research-programs
  $menu_links['main-menu_research-programs:research-programs'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'research-programs',
    'router_path' => 'research-programs',
    'link_title' => 'Research Programs',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_research-programs:research-programs',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 1,
  );
  // Exported menu link: main-menu_research-programs:research_programs
  $menu_links['main-menu_research-programs:research_programs'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'research_programs',
    'router_path' => 'research_programs',
    'link_title' => 'Research Programs',
    'options' => array(
      'identifier' => 'main-menu_research-programs:research_programs',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -38,
    'customized' => 1,
  );
  // Exported menu link: main-menu_research-sponsors:node/906
  $menu_links['main-menu_research-sponsors:node/906'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/906',
    'router_path' => 'node/%',
    'link_title' => 'Research Sponsors',
    'options' => array(
      'identifier' => 'main-menu_research-sponsors:node/906',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'main-menu_research-programs:research_programs',
  );
  // Exported menu link: main-menu_services:content/MyServices
  $menu_links['main-menu_services:content/MyServices'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'content/MyServices',
    'router_path' => 'content/MyServices',
    'link_title' => 'Services',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_services:content/MyServices',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -39,
    'customized' => 1,
  );
  // Exported menu link: main-menu_technology-transfer:node/211
  $menu_links['main-menu_technology-transfer:node/211'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/211',
    'router_path' => 'node/%',
    'link_title' => 'Technology Transfer',
    'options' => array(
      'identifier' => 'main-menu_technology-transfer:node/211',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'main-menu_services:content/MyServices',
  );
  // Exported menu link: main-menu_testfundingfilters:test-funding-filters
  $menu_links['main-menu_testfundingfilters:test-funding-filters'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'test-funding-filters',
    'router_path' => 'test-funding-filters',
    'link_title' => 'test_funding_filters',
    'options' => array(
      'identifier' => 'main-menu_testfundingfilters:test-funding-filters',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -41,
    'customized' => 1,
  );
  // Exported menu link: management_account-settings:admin/config/people/accounts
  $menu_links['management_account-settings:admin/config/people/accounts'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/people/accounts',
    'router_path' => 'admin/config/people/accounts',
    'link_title' => 'Account settings',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure default behavior of users, including registration requirements, e-mails, fields, and user pictures.',
      ),
      'identifier' => 'management_account-settings:admin/config/people/accounts',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 0,
    'parent_identifier' => 'management_people:admin/config/people',
  );
  // Exported menu link: management_acquia-network-settings:admin/config/system/acquia-agent
  $menu_links['management_acquia-network-settings:admin/config/system/acquia-agent'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/system/acquia-agent',
    'router_path' => 'admin/config/system/acquia-agent',
    'link_title' => 'Acquia Network settings',
    'options' => array(
      'attributes' => array(
        'title' => 'Connect your site to the Acquia Network.',
      ),
      'identifier' => 'management_acquia-network-settings:admin/config/system/acquia-agent',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_system:admin/config/system',
  );
  // Exported menu link: management_actions:admin/config/system/actions
  $menu_links['management_actions:admin/config/system/actions'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/system/actions',
    'router_path' => 'admin/config/system/actions',
    'link_title' => 'Actions',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage the actions defined for your site.',
      ),
      'identifier' => 'management_actions:admin/config/system/actions',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_system:admin/config/system',
  );
  // Exported menu link: management_administration-menu:admin/config/administration/admin_menu
  $menu_links['management_administration-menu:admin/config/administration/admin_menu'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/administration/admin_menu',
    'router_path' => 'admin/config/administration/admin_menu',
    'link_title' => 'Administration menu',
    'options' => array(
      'attributes' => array(
        'title' => 'Adjust administration menu settings.',
      ),
      'identifier' => 'management_administration-menu:admin/config/administration/admin_menu',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_administration:admin/config/administration',
  );
  // Exported menu link: management_administration:admin
  $menu_links['management_administration:admin'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin',
    'router_path' => 'admin',
    'link_title' => 'Administration',
    'options' => array(
      'identifier' => 'management_administration:admin',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 9,
    'customized' => 0,
  );
  // Exported menu link: management_administration:admin/config/administration
  $menu_links['management_administration:admin/config/administration'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/administration',
    'router_path' => 'admin/config/administration',
    'link_title' => 'Administration',
    'options' => array(
      'attributes' => array(
        'title' => 'Administration tools.',
      ),
      'identifier' => 'management_administration:admin/config/administration',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_configuration:admin/config',
  );
  // Exported menu link: management_advanced-help:admin/advanced_help
  $menu_links['management_advanced-help:admin/advanced_help'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/advanced_help',
    'router_path' => 'admin/advanced_help',
    'link_title' => 'Advanced help',
    'options' => array(
      'identifier' => 'management_advanced-help:admin/advanced_help',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 9,
    'customized' => 0,
    'parent_identifier' => 'management_administration:admin',
  );
  // Exported menu link: management_apache-solr-search-index:admin/reports/apachesolr
  $menu_links['management_apache-solr-search-index:admin/reports/apachesolr'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/reports/apachesolr',
    'router_path' => 'admin/reports/apachesolr',
    'link_title' => 'Apache Solr search index',
    'options' => array(
      'attributes' => array(
        'title' => 'Information about the contents of the index on the server',
      ),
      'identifier' => 'management_apache-solr-search-index:admin/reports/apachesolr',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_reports:admin/reports',
  );
  // Exported menu link: management_apache-solr-search:admin/config/search/apachesolr
  $menu_links['management_apache-solr-search:admin/config/search/apachesolr'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/search/apachesolr',
    'router_path' => 'admin/config/search/apachesolr',
    'link_title' => 'Apache Solr search',
    'options' => array(
      'attributes' => array(
        'title' => 'Administer Apache Solr.',
      ),
      'identifier' => 'management_apache-solr-search:admin/config/search/apachesolr',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -8,
    'customized' => 0,
    'parent_identifier' => 'management_search-and-metadata:admin/config/search',
  );
  // Exported menu link: management_appearance:admin/appearance
  $menu_links['management_appearance:admin/appearance'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/appearance',
    'router_path' => 'admin/appearance',
    'link_title' => 'Appearance',
    'options' => array(
      'attributes' => array(
        'title' => 'Select and configure your themes.',
      ),
      'identifier' => 'management_appearance:admin/appearance',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -6,
    'customized' => 0,
    'parent_identifier' => 'management_administration:admin',
  );
  // Exported menu link: management_available-updates:admin/reports/updates
  $menu_links['management_available-updates:admin/reports/updates'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/reports/updates',
    'router_path' => 'admin/reports/updates',
    'link_title' => 'Available updates',
    'options' => array(
      'attributes' => array(
        'title' => 'Get a status report about available updates for your installed modules and themes.',
      ),
      'identifier' => 'management_available-updates:admin/reports/updates',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 0,
    'parent_identifier' => 'management_reports:admin/reports',
  );
  // Exported menu link: management_blocks:admin/structure/block
  $menu_links['management_blocks:admin/structure/block'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/block',
    'router_path' => 'admin/structure/block',
    'link_title' => 'Blocks',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure what block content appears in your site\'s sidebars and other regions.',
      ),
      'identifier' => 'management_blocks:admin/structure/block',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_structure:admin/structure',
  );
  // Exported menu link: management_calendar:admin/config/date/calendar
  $menu_links['management_calendar:admin/config/date/calendar'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/date/calendar',
    'router_path' => 'admin/config/date/calendar',
    'link_title' => 'Calendar',
    'options' => array(
      'attributes' => array(
        'title' => 'Calendar administration.',
      ),
      'identifier' => 'management_calendar:admin/config/date/calendar',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_date-api:admin/config/date',
  );
  // Exported menu link: management_ckeditor:admin/config/content/ckeditor
  $menu_links['management_ckeditor:admin/config/content/ckeditor'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/content/ckeditor',
    'router_path' => 'admin/config/content/ckeditor',
    'link_title' => 'CKEditor',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure the rich text editor.',
      ),
      'identifier' => 'management_ckeditor:admin/config/content/ckeditor',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_content-authoring:admin/config/content',
  );
  // Exported menu link: management_clean-urls:admin/config/search/clean-urls
  $menu_links['management_clean-urls:admin/config/search/clean-urls'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/search/clean-urls',
    'router_path' => 'admin/config/search/clean-urls',
    'link_title' => 'Clean URLs',
    'options' => array(
      'attributes' => array(
        'title' => 'Enable or disable clean URLs for your site.',
      ),
      'identifier' => 'management_clean-urls:admin/config/search/clean-urls',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 5,
    'customized' => 0,
    'parent_identifier' => 'management_search-and-metadata:admin/config/search',
  );
  // Exported menu link: management_colorbox:admin/config/media/colorbox
  $menu_links['management_colorbox:admin/config/media/colorbox'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/media/colorbox',
    'router_path' => 'admin/config/media/colorbox',
    'link_title' => 'Colorbox',
    'options' => array(
      'attributes' => array(
        'title' => 'Adjust Colorbox settings.',
      ),
      'identifier' => 'management_colorbox:admin/config/media/colorbox',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_media:admin/config/media',
  );
  // Exported menu link: management_comments:admin/content/comment
  $menu_links['management_comments:admin/content/comment'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/content/comment',
    'router_path' => 'admin/content/comment',
    'link_title' => 'Comments',
    'options' => array(
      'attributes' => array(
        'title' => 'List and edit site comments and the comment approval queue.',
      ),
      'identifier' => 'management_comments:admin/content/comment',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_content:admin/content',
  );
  // Exported menu link: management_configuration:admin/config
  $menu_links['management_configuration:admin/config'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config',
    'router_path' => 'admin/config',
    'link_title' => 'Configuration',
    'options' => array(
      'attributes' => array(
        'title' => 'Administer settings.',
      ),
      'identifier' => 'management_configuration:admin/config',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_administration:admin',
  );
  // Exported menu link: management_configure:admin/config/googlechat/configuration
  $menu_links['management_configure:admin/config/googlechat/configuration'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/googlechat/configuration',
    'router_path' => 'admin/config/googlechat/configuration',
    'link_title' => 'Configure',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure GoogleChat Module',
      ),
      'identifier' => 'management_configure:admin/config/googlechat/configuration',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_googlechat:admin/config/googlechat',
  );
  // Exported menu link: management_contact-form:admin/structure/contact
  $menu_links['management_contact-form:admin/structure/contact'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/contact',
    'router_path' => 'admin/structure/contact',
    'link_title' => 'Contact form',
    'options' => array(
      'attributes' => array(
        'title' => 'Create a system contact form and set up categories for the form to use.',
      ),
      'identifier' => 'management_contact-form:admin/structure/contact',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_structure:admin/structure',
  );
  // Exported menu link: management_content-authoring:admin/config/content
  $menu_links['management_content-authoring:admin/config/content'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/content',
    'router_path' => 'admin/config/content',
    'link_title' => 'Content authoring',
    'options' => array(
      'attributes' => array(
        'title' => 'Settings related to formatting and authoring content.',
      ),
      'identifier' => 'management_content-authoring:admin/config/content',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -15,
    'customized' => 0,
    'parent_identifier' => 'management_configuration:admin/config',
  );
  // Exported menu link: management_content-slider:admin/settings/content_slider
  $menu_links['management_content-slider:admin/settings/content_slider'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/settings/content_slider',
    'router_path' => 'admin/settings/content_slider',
    'link_title' => 'Content Slider',
    'options' => array(
      'attributes' => array(
        'title' => 'Setting Content Slider.',
      ),
      'identifier' => 'management_content-slider:admin/settings/content_slider',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_administration:admin',
  );
  // Exported menu link: management_content-types:admin/structure/types
  $menu_links['management_content-types:admin/structure/types'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/types',
    'router_path' => 'admin/structure/types',
    'link_title' => 'Content types',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage content types, including default status, front page promotion, comment settings, etc.',
      ),
      'identifier' => 'management_content-types:admin/structure/types',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_structure:admin/structure',
  );
  // Exported menu link: management_content:admin/content
  $menu_links['management_content:admin/content'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/content',
    'router_path' => 'admin/content',
    'link_title' => 'Content',
    'options' => array(
      'attributes' => array(
        'title' => 'Administer content and comments.',
      ),
      'identifier' => 'management_content:admin/content',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 0,
    'parent_identifier' => 'management_administration:admin',
  );
  // Exported menu link: management_context:admin/structure/context
  $menu_links['management_context:admin/structure/context'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/context',
    'router_path' => 'admin/structure/context',
    'link_title' => 'Context',
    'options' => array(
      'attributes' => array(
        'title' => 'Associate menus, views, blocks, etc. with different contexts to structure your site.',
      ),
      'identifier' => 'management_context:admin/structure/context',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_structure:admin/structure',
  );
  // Exported menu link: management_cron:admin/config/system/cron
  $menu_links['management_cron:admin/config/system/cron'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/system/cron',
    'router_path' => 'admin/config/system/cron',
    'link_title' => 'Cron',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage automatic site maintenance tasks.',
      ),
      'identifier' => 'management_cron:admin/config/system/cron',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 20,
    'customized' => 0,
    'parent_identifier' => 'management_system:admin/config/system',
  );
  // Exported menu link: management_current-search-blocks:admin/config/search/current_search
  $menu_links['management_current-search-blocks:admin/config/search/current_search'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/search/current_search',
    'router_path' => 'admin/config/search/current_search',
    'link_title' => 'Current search blocks',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure current search blocks.',
      ),
      'identifier' => 'management_current-search-blocks:admin/config/search/current_search',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_search-and-metadata:admin/config/search',
  );
  // Exported menu link: management_custom-access-rulesets:admin/structure/ctools-rulesets
  $menu_links['management_custom-access-rulesets:admin/structure/ctools-rulesets'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/ctools-rulesets',
    'router_path' => 'admin/structure/ctools-rulesets',
    'link_title' => 'Custom access rulesets',
    'options' => array(
      'attributes' => array(
        'title' => 'Add, edit or delete custom access rulesets for use with Panels and other systems that utilize CTools content plugins.',
      ),
      'identifier' => 'management_custom-access-rulesets:admin/structure/ctools-rulesets',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_structure:admin/structure',
  );
  // Exported menu link: management_custom-content-panes:admin/structure/ctools-content
  $menu_links['management_custom-content-panes:admin/structure/ctools-content'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/ctools-content',
    'router_path' => 'admin/structure/ctools-content',
    'link_title' => 'Custom content panes',
    'options' => array(
      'attributes' => array(
        'title' => 'Add, edit or delete custom content panes.',
      ),
      'identifier' => 'management_custom-content-panes:admin/structure/ctools-content',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_structure:admin/structure',
  );
  // Exported menu link: management_dashboard:admin/dashboard
  $menu_links['management_dashboard:admin/dashboard'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/dashboard',
    'router_path' => 'admin/dashboard',
    'link_title' => 'Dashboard',
    'options' => array(
      'attributes' => array(
        'title' => 'View and customize your dashboard.',
      ),
      'identifier' => 'management_dashboard:admin/dashboard',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -15,
    'customized' => 0,
    'parent_identifier' => 'management_administration:admin',
  );
  // Exported menu link: management_date-and-time:admin/config/regional/date-time
  $menu_links['management_date-and-time:admin/config/regional/date-time'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/regional/date-time',
    'router_path' => 'admin/config/regional/date-time',
    'link_title' => 'Date and time',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure display formats for date and time.',
      ),
      'identifier' => 'management_date-and-time:admin/config/regional/date-time',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -15,
    'customized' => 0,
    'parent_identifier' => 'management_regional-and-language:admin/config/regional',
  );
  // Exported menu link: management_date-api:admin/config/date
  $menu_links['management_date-api:admin/config/date'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/date',
    'router_path' => 'admin/config/date',
    'link_title' => 'Date API',
    'options' => array(
      'attributes' => array(
        'title' => 'Settings for modules the use the Date API.',
      ),
      'identifier' => 'management_date-api:admin/config/date',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 0,
    'parent_identifier' => 'management_configuration:admin/config',
  );
  // Exported menu link: management_date-popup:admin/config/date/date_popup
  $menu_links['management_date-popup:admin/config/date/date_popup'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/date/date_popup',
    'router_path' => 'admin/config/date/date_popup',
    'link_title' => 'Date Popup',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure the Date Popup settings.',
      ),
      'identifier' => 'management_date-popup:admin/config/date/date_popup',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_date-api:admin/config/date',
  );
  // Exported menu link: management_devel-settings:admin/config/development/devel
  $menu_links['management_devel-settings:admin/config/development/devel'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/development/devel',
    'router_path' => 'admin/config/development/devel',
    'link_title' => 'Devel settings',
    'options' => array(
      'attributes' => array(
        'title' => 'Helper functions, pages, and blocks to assist Drupal developers. The devel blocks can be managed via the <a href="/admin/structure/block">block administration</a> page.',
      ),
      'identifier' => 'management_devel-settings:admin/config/development/devel',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_development:admin/config/development',
  );
  // Exported menu link: management_development:admin/config/development
  $menu_links['management_development:admin/config/development'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/development',
    'router_path' => 'admin/config/development',
    'link_title' => 'Development',
    'options' => array(
      'attributes' => array(
        'title' => 'Development tools.',
      ),
      'identifier' => 'management_development:admin/config/development',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 0,
    'parent_identifier' => 'management_configuration:admin/config',
  );
  // Exported menu link: management_display-suite:admin/structure/ds
  $menu_links['management_display-suite:admin/structure/ds'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/ds',
    'router_path' => 'admin/structure/ds',
    'link_title' => 'Display Suite',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage layouts for entities and configure fields, view modes etc.',
      ),
      'identifier' => 'management_display-suite:admin/structure/ds',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_structure:admin/structure',
  );
  // Exported menu link: management_email-contact-form-settings:admin/config/content/email
  $menu_links['management_email-contact-form-settings:admin/config/content/email'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/content/email',
    'router_path' => 'admin/config/content/email',
    'link_title' => 'Email Contact Form Settings',
    'options' => array(
      'attributes' => array(
        'title' => 'Administer flood control settings for email contact forms',
      ),
      'identifier' => 'management_email-contact-form-settings:admin/config/content/email',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_content-authoring:admin/config/content',
  );
  // Exported menu link: management_entity-view-modes:admin/config/system/entity-view-modes
  $menu_links['management_entity-view-modes:admin/config/system/entity-view-modes'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/system/entity-view-modes',
    'router_path' => 'admin/config/system/entity-view-modes',
    'link_title' => 'Entity view modes',
    'options' => array(
      'attributes' => array(
        'title' => 'Create new custom view modes for content.',
      ),
      'identifier' => 'management_entity-view-modes:admin/config/system/entity-view-modes',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_system:admin/config/system',
  );
  // Exported menu link: management_features:admin/structure/features
  $menu_links['management_features:admin/structure/features'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/features',
    'router_path' => 'admin/structure/features',
    'link_title' => 'Features',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage features.',
      ),
      'identifier' => 'management_features:admin/structure/features',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_structure:admin/structure',
  );
  // Exported menu link: management_feeds-log:admin/reports/feeds
  $menu_links['management_feeds-log:admin/reports/feeds'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/reports/feeds',
    'router_path' => 'admin/reports/feeds',
    'link_title' => 'Feeds log',
    'options' => array(
      'attributes' => array(
        'title' => 'Review log messages of imports and subscriptions to feeds.',
      ),
      'identifier' => 'management_feeds-log:admin/reports/feeds',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_reports:admin/reports',
  );
  // Exported menu link: management_field-collections:admin/structure/field-collections
  $menu_links['management_field-collections:admin/structure/field-collections'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/field-collections',
    'router_path' => 'admin/structure/field-collections',
    'link_title' => 'Field collections',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage fields on field collections.',
      ),
      'identifier' => 'management_field-collections:admin/structure/field-collections',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_structure:admin/structure',
  );
  // Exported menu link: management_field-dependencies:admin/structure/dependencies
  $menu_links['management_field-dependencies:admin/structure/dependencies'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/dependencies',
    'router_path' => 'admin/structure/dependencies',
    'link_title' => 'Field dependencies',
    'options' => array(
      'attributes' => array(
        'title' => 'Administer field dependencies for the site.',
      ),
      'identifier' => 'management_field-dependencies:admin/structure/dependencies',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_structure:admin/structure',
  );
  // Exported menu link: management_field-list:admin/reports/fields
  $menu_links['management_field-list:admin/reports/fields'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/reports/fields',
    'router_path' => 'admin/reports/fields',
    'link_title' => 'Field list',
    'options' => array(
      'attributes' => array(
        'title' => 'Overview of fields on all entity types.',
      ),
      'identifier' => 'management_field-list:admin/reports/fields',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_reports:admin/reports',
  );
  // Exported menu link: management_fieldable-panels-panes:admin/structure/fieldable-panels-panes
  $menu_links['management_fieldable-panels-panes:admin/structure/fieldable-panels-panes'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/fieldable-panels-panes',
    'router_path' => 'admin/structure/fieldable-panels-panes',
    'link_title' => 'Fieldable Panels Panes',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage pane content types.',
      ),
      'identifier' => 'management_fieldable-panels-panes:admin/structure/fieldable-panels-panes',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_structure:admin/structure',
  );
  // Exported menu link: management_file-settings:admin/config/media/file-settings
  $menu_links['management_file-settings:admin/config/media/file-settings'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/media/file-settings',
    'router_path' => 'admin/config/media/file-settings',
    'link_title' => 'File settings',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure allowed file extensions, default alt and title sources, and the file upload wizard.',
      ),
      'identifier' => 'management_file-settings:admin/config/media/file-settings',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_media:admin/config/media',
  );
  // Exported menu link: management_file-system:admin/config/media/file-system
  $menu_links['management_file-system:admin/config/media/file-system'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/media/file-system',
    'router_path' => 'admin/config/media/file-system',
    'link_title' => 'File system',
    'options' => array(
      'attributes' => array(
        'title' => 'Tell Drupal where to store uploaded files and how they are accessed.',
      ),
      'identifier' => 'management_file-system:admin/config/media/file-system',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 0,
    'parent_identifier' => 'management_media:admin/config/media',
  );
  // Exported menu link: management_file-types:admin/structure/file-types
  $menu_links['management_file-types:admin/structure/file-types'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/file-types',
    'router_path' => 'admin/structure/file-types',
    'link_title' => 'File types',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage settings for the type of files used on your site.',
      ),
      'identifier' => 'management_file-types:admin/structure/file-types',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_structure:admin/structure',
  );
  // Exported menu link: management_files:admin/content/file
  $menu_links['management_files:admin/content/file'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/content/file',
    'router_path' => 'admin/content/file',
    'link_title' => 'Files',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage files used on your site.',
      ),
      'identifier' => 'management_files:admin/content/file',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_content:admin/content',
  );
  // Exported menu link: management_forward-tracking:admin/reports/forward
  $menu_links['management_forward-tracking:admin/reports/forward'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/reports/forward',
    'router_path' => 'admin/reports/forward',
    'link_title' => 'Forward tracking',
    'options' => array(
      'attributes' => array(
        'title' => 'Track forwarded posts',
      ),
      'identifier' => 'management_forward-tracking:admin/reports/forward',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_reports:admin/reports',
  );
  // Exported menu link: management_forward:admin/config/user-interface/forward
  $menu_links['management_forward:admin/config/user-interface/forward'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/user-interface/forward',
    'router_path' => 'admin/config/user-interface/forward',
    'link_title' => 'Forward',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure settings for forward module.',
      ),
      'identifier' => 'management_forward:admin/config/user-interface/forward',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_user-interface:admin/config/user-interface',
  );
  // Exported menu link: management_frequently-asked-questions:Donation/FAQ
  $menu_links['management_frequently-asked-questions:Donation/FAQ'] = array(
    'menu_name' => 'management',
    'link_path' => 'Donation/FAQ',
    'router_path' => 'Donation/FAQ',
    'link_title' => 'Frequently Asked Questions',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'management_frequently-asked-questions:Donation/FAQ',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'management_main-menu:admin/structure/menu/manage/main-menu',
  );
  // Exported menu link: management_frequently-asked-questions:admin/config/content/faq
  $menu_links['management_frequently-asked-questions:admin/config/content/faq'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/content/faq',
    'router_path' => 'admin/config/content/faq',
    'link_title' => 'Frequently Asked Questions',
    'options' => array(
      'attributes' => array(
        'title' => 'Allows the user to configure the layout of questions and answers on a FAQ page.',
      ),
      'identifier' => 'management_frequently-asked-questions:admin/config/content/faq',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_content-authoring:admin/config/content',
  );
  // Exported menu link: management_generate-content:admin/config/development/generate/content
  $menu_links['management_generate-content:admin/config/development/generate/content'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/development/generate/content',
    'router_path' => 'admin/config/development/generate/content',
    'link_title' => 'Generate content',
    'options' => array(
      'attributes' => array(
        'title' => 'Generate a given number of nodes and comments. Optionally delete current items.',
      ),
      'identifier' => 'management_generate-content:admin/config/development/generate/content',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_development:admin/config/development',
  );
  // Exported menu link: management_generate-menus:admin/config/development/generate/menu
  $menu_links['management_generate-menus:admin/config/development/generate/menu'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/development/generate/menu',
    'router_path' => 'admin/config/development/generate/menu',
    'link_title' => 'Generate menus',
    'options' => array(
      'attributes' => array(
        'title' => 'Generate a given number of menus and menu links. Optionally delete current menus.',
      ),
      'identifier' => 'management_generate-menus:admin/config/development/generate/menu',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_development:admin/config/development',
  );
  // Exported menu link: management_generate-terms:admin/config/development/generate/taxonomy
  $menu_links['management_generate-terms:admin/config/development/generate/taxonomy'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/development/generate/taxonomy',
    'router_path' => 'admin/config/development/generate/taxonomy',
    'link_title' => 'Generate terms',
    'options' => array(
      'attributes' => array(
        'title' => 'Generate a given number of terms. Optionally delete current terms.',
      ),
      'identifier' => 'management_generate-terms:admin/config/development/generate/taxonomy',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_development:admin/config/development',
  );
  // Exported menu link: management_generate-users:admin/config/development/generate/user
  $menu_links['management_generate-users:admin/config/development/generate/user'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/development/generate/user',
    'router_path' => 'admin/config/development/generate/user',
    'link_title' => 'Generate users',
    'options' => array(
      'attributes' => array(
        'title' => 'Generate a given number of users. Optionally delete current users.',
      ),
      'identifier' => 'management_generate-users:admin/config/development/generate/user',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_development:admin/config/development',
  );
  // Exported menu link: management_generate-vocabularies:admin/config/development/generate/vocabs
  $menu_links['management_generate-vocabularies:admin/config/development/generate/vocabs'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/development/generate/vocabs',
    'router_path' => 'admin/config/development/generate/vocabs',
    'link_title' => 'Generate vocabularies',
    'options' => array(
      'attributes' => array(
        'title' => 'Generate a given number of vocabularies. Optionally delete current vocabularies.',
      ),
      'identifier' => 'management_generate-vocabularies:admin/config/development/generate/vocabs',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_development:admin/config/development',
  );
  // Exported menu link: management_geocoder-settings:admin/config/content/geocoder
  $menu_links['management_geocoder-settings:admin/config/content/geocoder'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/content/geocoder',
    'router_path' => 'admin/config/content/geocoder',
    'link_title' => 'Geocoder settings',
    'options' => array(
      'attributes' => array(
        'title' => 'Configuration for API keys.',
      ),
      'identifier' => 'management_geocoder-settings:admin/config/content/geocoder',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_content-authoring:admin/config/content',
  );
  // Exported menu link: management_googlechat:admin/config/googlechat
  $menu_links['management_googlechat:admin/config/googlechat'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/googlechat',
    'router_path' => 'admin/config/googlechat',
    'link_title' => 'GoogleChat',
    'options' => array(
      'attributes' => array(
        'title' => 'Administer GoogleChat',
      ),
      'identifier' => 'management_googlechat:admin/config/googlechat',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_configuration:admin/config',
  );
  // Exported menu link: management_guide-to-services:admin/structure/menu/manage/menu-guide-to-services
  $menu_links['management_guide-to-services:admin/structure/menu/manage/menu-guide-to-services'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/menu-guide-to-services',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'Guide to services',
    'options' => array(
      'identifier' => 'management_guide-to-services:admin/structure/menu/manage/menu-guide-to-services',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_menus:admin/structure/menu',
  );
  // Exported menu link: management_help:admin/help
  $menu_links['management_help:admin/help'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/help',
    'router_path' => 'admin/help',
    'link_title' => 'Help',
    'options' => array(
      'attributes' => array(
        'title' => 'Reference for usage, configuration, and modules.',
      ),
      'identifier' => 'management_help:admin/help',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 9,
    'customized' => 0,
    'parent_identifier' => 'management_administration:admin',
  );
  // Exported menu link: management_image-styles:admin/config/media/image-styles
  $menu_links['management_image-styles:admin/config/media/image-styles'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/media/image-styles',
    'router_path' => 'admin/config/media/image-styles',
    'link_title' => 'Image styles',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure styles that can be used for resizing or adjusting images on display.',
      ),
      'identifier' => 'management_image-styles:admin/config/media/image-styles',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_media:admin/config/media',
  );
  // Exported menu link: management_image-toolkit:admin/config/media/image-toolkit
  $menu_links['management_image-toolkit:admin/config/media/image-toolkit'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/media/image-toolkit',
    'router_path' => 'admin/config/media/image-toolkit',
    'link_title' => 'Image toolkit',
    'options' => array(
      'attributes' => array(
        'title' => 'Choose which image toolkit to use if you have installed optional toolkits.',
      ),
      'identifier' => 'management_image-toolkit:admin/config/media/image-toolkit',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 20,
    'customized' => 0,
    'parent_identifier' => 'management_media:admin/config/media',
  );
  // Exported menu link: management_ip-address-blocking:admin/config/people/ip-blocking
  $menu_links['management_ip-address-blocking:admin/config/people/ip-blocking'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/people/ip-blocking',
    'router_path' => 'admin/config/people/ip-blocking',
    'link_title' => 'IP address blocking',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage blocked IP addresses.',
      ),
      'identifier' => 'management_ip-address-blocking:admin/config/people/ip-blocking',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 10,
    'customized' => 0,
    'parent_identifier' => 'management_people:admin/config/people',
  );
  // Exported menu link: management_ip-geolocation-views--maps:admin/config/system/ip_geoloc
  $menu_links['management_ip-geolocation-views--maps:admin/config/system/ip_geoloc'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/system/ip_geoloc',
    'router_path' => 'admin/config/system/ip_geoloc',
    'link_title' => 'IP Geolocation Views & Maps',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure map markers and how geolocation information is updated.',
      ),
      'identifier' => 'management_ip-geolocation-views--maps:admin/config/system/ip_geoloc',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_system:admin/config/system',
  );
  // Exported menu link: management_jquery-update:admin/config/development/jquery_update
  $menu_links['management_jquery-update:admin/config/development/jquery_update'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/development/jquery_update',
    'router_path' => 'admin/config/development/jquery_update',
    'link_title' => 'jQuery update',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure settings related to the jQuery upgrade, the library path and compression.',
      ),
      'identifier' => 'management_jquery-update:admin/config/development/jquery_update',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_development:admin/config/development',
  );
  // Exported menu link: management_leaflet-more-maps:admin/config/system/leaflet_more_maps
  $menu_links['management_leaflet-more-maps:admin/config/system/leaflet_more_maps'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/system/leaflet_more_maps',
    'router_path' => 'admin/config/system/leaflet_more_maps',
    'link_title' => 'Leaflet More Maps',
    'options' => array(
      'attributes' => array(
        'title' => 'Assemble custom maps from available layers.',
      ),
      'identifier' => 'management_leaflet-more-maps:admin/config/system/leaflet_more_maps',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_system:admin/config/system',
  );
  // Exported menu link: management_logging-and-errors:admin/config/development/logging
  $menu_links['management_logging-and-errors:admin/config/development/logging'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/development/logging',
    'router_path' => 'admin/config/development/logging',
    'link_title' => 'Logging and errors',
    'options' => array(
      'attributes' => array(
        'title' => 'Settings for logging and alerts modules. Various modules can route Drupal\'s system events to different destinations, such as syslog, database, email, etc.',
      ),
      'identifier' => 'management_logging-and-errors:admin/config/development/logging',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -15,
    'customized' => 0,
    'parent_identifier' => 'management_development:admin/config/development',
  );
  // Exported menu link: management_main-menu:admin/structure/menu/manage/main-menu
  $menu_links['management_main-menu:admin/structure/menu/manage/main-menu'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/main-menu',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'Main menu',
    'options' => array(
      'identifier' => 'management_main-menu:admin/structure/menu/manage/main-menu',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_menus:admin/structure/menu',
  );
  // Exported menu link: management_maintenance-mode:admin/config/development/maintenance
  $menu_links['management_maintenance-mode:admin/config/development/maintenance'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/development/maintenance',
    'router_path' => 'admin/config/development/maintenance',
    'link_title' => 'Maintenance mode',
    'options' => array(
      'attributes' => array(
        'title' => 'Take the site offline for maintenance or bring it back online.',
      ),
      'identifier' => 'management_maintenance-mode:admin/config/development/maintenance',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 0,
    'parent_identifier' => 'management_development:admin/config/development',
  );
  // Exported menu link: management_management:admin/structure/menu/manage/management
  $menu_links['management_management:admin/structure/menu/manage/management'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/management',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'Management',
    'options' => array(
      'identifier' => 'management_management:admin/structure/menu/manage/management',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_menus:admin/structure/menu',
  );
  // Exported menu link: management_masquerade:admin/config/people/masquerade
  $menu_links['management_masquerade:admin/config/people/masquerade'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/people/masquerade',
    'router_path' => 'admin/config/people/masquerade',
    'link_title' => 'Masquerade',
    'options' => array(
      'attributes' => array(
        'title' => 'Masquerade module allows administrators to masquerade as other users.',
      ),
      'identifier' => 'management_masquerade:admin/config/people/masquerade',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_people:admin/config/people',
  );
  // Exported menu link: management_media-browser-settings:admin/config/media/browser
  $menu_links['management_media-browser-settings:admin/config/media/browser'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/media/browser',
    'router_path' => 'admin/config/media/browser',
    'link_title' => 'Media browser settings',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure the behavior and display of the media browser.',
      ),
      'identifier' => 'management_media-browser-settings:admin/config/media/browser',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_media:admin/config/media',
  );
  // Exported menu link: management_media:admin/config/media
  $menu_links['management_media:admin/config/media'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/media',
    'router_path' => 'admin/config/media',
    'link_title' => 'Media',
    'options' => array(
      'attributes' => array(
        'title' => 'Media tools.',
      ),
      'identifier' => 'management_media:admin/config/media',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 0,
    'parent_identifier' => 'management_configuration:admin/config',
  );
  // Exported menu link: management_media:admin/content/media
  $menu_links['management_media:admin/content/media'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/content/media',
    'router_path' => 'admin/content/media',
    'link_title' => 'Media',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage files used on your site.',
      ),
      'identifier' => 'management_media:admin/content/media',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_content:admin/content',
  );
  // Exported menu link: management_menus:admin/structure/menu
  $menu_links['management_menus:admin/structure/menu'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu',
    'router_path' => 'admin/structure/menu',
    'link_title' => 'Menus',
    'options' => array(
      'attributes' => array(
        'title' => 'Add new menus to your site, edit existing menus, and rename and reorganize menu links.',
      ),
      'identifier' => 'management_menus:admin/structure/menu',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_structure:admin/structure',
  );
  // Exported menu link: management_migrate-fields:admin/structure/content_migrate
  $menu_links['management_migrate-fields:admin/structure/content_migrate'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/content_migrate',
    'router_path' => 'admin/structure/content_migrate',
    'link_title' => 'Migrate fields',
    'options' => array(
      'attributes' => array(
        'title' => 'Migrate field settings and data from the Drupal 6 version to the Drupal 7 version.',
      ),
      'identifier' => 'management_migrate-fields:admin/structure/content_migrate',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_structure:admin/structure',
  );
  // Exported menu link: management_mini-panels:admin/structure/mini-panels
  $menu_links['management_mini-panels:admin/structure/mini-panels'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/mini-panels',
    'router_path' => 'admin/structure/mini-panels',
    'link_title' => 'Mini panels',
    'options' => array(
      'attributes' => array(
        'title' => 'Add, edit or delete mini panels, which can be used as blocks or content panes in other panels.',
      ),
      'identifier' => 'management_mini-panels:admin/structure/mini-panels',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_structure:admin/structure',
  );
  // Exported menu link: management_module-filter:admin/config/user-interface/modulefilter
  $menu_links['management_module-filter:admin/config/user-interface/modulefilter'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/user-interface/modulefilter',
    'router_path' => 'admin/config/user-interface/modulefilter',
    'link_title' => 'Module filter',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure how the modules page looks and acts.',
      ),
      'identifier' => 'management_module-filter:admin/config/user-interface/modulefilter',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_user-interface:admin/config/user-interface',
  );
  // Exported menu link: management_modules:admin/modules
  $menu_links['management_modules:admin/modules'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/modules',
    'router_path' => 'admin/modules',
    'link_title' => 'Modules',
    'options' => array(
      'attributes' => array(
        'title' => 'Extend site functionality.',
      ),
      'identifier' => 'management_modules:admin/modules',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -2,
    'customized' => 0,
    'parent_identifier' => 'management_administration:admin',
  );
  // Exported menu link: management_navigation:admin/structure/menu/manage/navigation
  $menu_links['management_navigation:admin/structure/menu/manage/navigation'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/navigation',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'Navigation',
    'options' => array(
      'identifier' => 'management_navigation:admin/structure/menu/manage/navigation',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_menus:admin/structure/menu',
  );
  // Exported menu link: management_openlayers:admin/structure/openlayers
  $menu_links['management_openlayers:admin/structure/openlayers'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/openlayers',
    'router_path' => 'admin/structure/openlayers',
    'link_title' => 'OpenLayers',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage maps, layers, styles, and map behaviors.',
      ),
      'identifier' => 'management_openlayers:admin/structure/openlayers',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_structure:admin/structure',
  );
  // Exported menu link: management_pages:admin/structure/pages
  $menu_links['management_pages:admin/structure/pages'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/pages',
    'router_path' => 'admin/structure/pages',
    'link_title' => 'Pages',
    'options' => array(
      'attributes' => array(
        'title' => 'Add, edit and remove overridden system pages and user defined pages from the system.',
      ),
      'identifier' => 'management_pages:admin/structure/pages',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_structure:admin/structure',
  );
  // Exported menu link: management_panels:admin/structure/panels
  $menu_links['management_panels:admin/structure/panels'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/panels',
    'router_path' => 'admin/structure/panels',
    'link_title' => 'Panels',
    'options' => array(
      'attributes' => array(
        'title' => 'Get a bird\'s eye view of items related to Panels.',
      ),
      'identifier' => 'management_panels:admin/structure/panels',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_structure:admin/structure',
  );
  // Exported menu link: management_payments:admin/config/pay
  $menu_links['management_payments:admin/config/pay'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/pay',
    'router_path' => 'admin/config/pay',
    'link_title' => 'Payments',
    'options' => array(
      'attributes' => array(
        'title' => 'Payment module settings',
      ),
      'identifier' => 'management_payments:admin/config/pay',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 10,
    'customized' => 0,
    'parent_identifier' => 'management_configuration:admin/config',
  );
  // Exported menu link: management_payments:admin/reports/payments
  $menu_links['management_payments:admin/reports/payments'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/reports/payments',
    'router_path' => 'admin/reports/payments',
    'link_title' => 'Payments',
    'options' => array(
      'attributes' => array(
        'title' => 'View payment transactions.',
      ),
      'identifier' => 'management_payments:admin/reports/payments',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -20,
    'customized' => 0,
    'parent_identifier' => 'management_reports:admin/reports',
  );
  // Exported menu link: management_people:admin/config/people
  $menu_links['management_people:admin/config/people'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/people',
    'router_path' => 'admin/config/people',
    'link_title' => 'People',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure user accounts.',
      ),
      'identifier' => 'management_people:admin/config/people',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -20,
    'customized' => 0,
    'parent_identifier' => 'management_configuration:admin/config',
  );
  // Exported menu link: management_people:admin/people
  $menu_links['management_people:admin/people'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/people',
    'router_path' => 'admin/people',
    'link_title' => 'People',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage user accounts, roles, and permissions.',
      ),
      'identifier' => 'management_people:admin/people',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -4,
    'customized' => 0,
    'parent_identifier' => 'management_administration:admin',
  );
  // Exported menu link: management_performance:admin/config/development/performance
  $menu_links['management_performance:admin/config/development/performance'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/development/performance',
    'router_path' => 'admin/config/development/performance',
    'link_title' => 'Performance',
    'options' => array(
      'attributes' => array(
        'title' => 'Enable or disable page caching for anonymous users and set CSS and JS bandwidth optimization options.',
      ),
      'identifier' => 'management_performance:admin/config/development/performance',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -20,
    'customized' => 0,
    'parent_identifier' => 'management_development:admin/config/development',
  );
  // Exported menu link: management_rebuild-type-information-for-media:admin/config/media/rebuild_types
  $menu_links['management_rebuild-type-information-for-media:admin/config/media/rebuild_types'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/media/rebuild_types',
    'router_path' => 'admin/config/media/rebuild_types',
    'link_title' => 'Rebuild type information for media',
    'options' => array(
      'attributes' => array(
        'title' => 'In case there are files in file_managed w/o a type, this function rebuilds them',
      ),
      'identifier' => 'management_rebuild-type-information-for-media:admin/config/media/rebuild_types',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_media:admin/config/media',
  );
  // Exported menu link: management_recent-log-messages:admin/reports/dblog
  $menu_links['management_recent-log-messages:admin/reports/dblog'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/reports/dblog',
    'router_path' => 'admin/reports/dblog',
    'link_title' => 'Recent log messages',
    'options' => array(
      'attributes' => array(
        'title' => 'View events that have recently been logged.',
      ),
      'identifier' => 'management_recent-log-messages:admin/reports/dblog',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -1,
    'customized' => 0,
    'parent_identifier' => 'management_reports:admin/reports',
  );
  // Exported menu link: management_regional-and-language:admin/config/regional
  $menu_links['management_regional-and-language:admin/config/regional'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/regional',
    'router_path' => 'admin/config/regional',
    'link_title' => 'Regional and language',
    'options' => array(
      'attributes' => array(
        'title' => 'Regional settings, localization and translation.',
      ),
      'identifier' => 'management_regional-and-language:admin/config/regional',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -5,
    'customized' => 0,
    'parent_identifier' => 'management_configuration:admin/config',
  );
  // Exported menu link: management_regional-settings:admin/config/regional/settings
  $menu_links['management_regional-settings:admin/config/regional/settings'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/regional/settings',
    'router_path' => 'admin/config/regional/settings',
    'link_title' => 'Regional settings',
    'options' => array(
      'attributes' => array(
        'title' => 'Settings for the site\'s default time zone and country.',
      ),
      'identifier' => 'management_regional-settings:admin/config/regional/settings',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -20,
    'customized' => 0,
    'parent_identifier' => 'management_regional-and-language:admin/config/regional',
  );
  // Exported menu link: management_reports:admin/reports
  $menu_links['management_reports:admin/reports'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/reports',
    'router_path' => 'admin/reports',
    'link_title' => 'Reports',
    'options' => array(
      'attributes' => array(
        'title' => 'View reports, updates, and errors.',
      ),
      'identifier' => 'management_reports:admin/reports',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 5,
    'customized' => 0,
    'parent_identifier' => 'management_administration:admin',
  );
  // Exported menu link: management_rss-publishing:admin/config/services/rss-publishing
  $menu_links['management_rss-publishing:admin/config/services/rss-publishing'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/services/rss-publishing',
    'router_path' => 'admin/config/services/rss-publishing',
    'link_title' => 'RSS publishing',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure the site description, the number of items per feed and whether feeds should be titles/teasers/full-text.',
      ),
      'identifier' => 'management_rss-publishing:admin/config/services/rss-publishing',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_web-services:admin/config/services',
  );
  // Exported menu link: management_search-and-metadata:admin/config/search
  $menu_links['management_search-and-metadata:admin/config/search'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/search',
    'router_path' => 'admin/config/search',
    'link_title' => 'Search and metadata',
    'options' => array(
      'attributes' => array(
        'title' => 'Local site search, metadata and SEO.',
      ),
      'identifier' => 'management_search-and-metadata:admin/config/search',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 0,
    'parent_identifier' => 'management_configuration:admin/config',
  );
  // Exported menu link: management_search-api:admin/config/search/search_api
  $menu_links['management_search-api:admin/config/search/search_api'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/search/search_api',
    'router_path' => 'admin/config/search/search_api',
    'link_title' => 'Search API',
    'options' => array(
      'attributes' => array(
        'title' => 'Create and configure search engines.',
      ),
      'identifier' => 'management_search-api:admin/config/search/search_api',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_search-and-metadata:admin/config/search',
  );
  // Exported menu link: management_search-settings:admin/config/search/settings
  $menu_links['management_search-settings:admin/config/search/settings'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/search/settings',
    'router_path' => 'admin/config/search/settings',
    'link_title' => 'Search settings',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure relevance settings for search and other indexing options.',
      ),
      'identifier' => 'management_search-settings:admin/config/search/settings',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 0,
    'parent_identifier' => 'management_search-and-metadata:admin/config/search',
  );
  // Exported menu link: management_shortcuts:admin/config/user-interface/shortcut
  $menu_links['management_shortcuts:admin/config/user-interface/shortcut'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/user-interface/shortcut',
    'router_path' => 'admin/config/user-interface/shortcut',
    'link_title' => 'Shortcuts',
    'options' => array(
      'attributes' => array(
        'title' => 'Add and modify shortcut sets.',
      ),
      'identifier' => 'management_shortcuts:admin/config/user-interface/shortcut',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_user-interface:admin/config/user-interface',
  );
  // Exported menu link: management_site-information:admin/config/system/site-information
  $menu_links['management_site-information:admin/config/system/site-information'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/system/site-information',
    'router_path' => 'admin/config/system/site-information',
    'link_title' => 'Site information',
    'options' => array(
      'attributes' => array(
        'title' => 'Change site name, e-mail address, slogan, default front page, and number of posts per page, error pages.',
      ),
      'identifier' => 'management_site-information:admin/config/system/site-information',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -20,
    'customized' => 0,
    'parent_identifier' => 'management_system:admin/config/system',
  );
  // Exported menu link: management_social-media:admin/config/media/socialmedia
  $menu_links['management_social-media:admin/config/media/socialmedia'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/media/socialmedia',
    'router_path' => 'admin/config/media/socialmedia',
    'link_title' => 'Social media',
    'options' => array(
      'attributes' => array(
        'title' => 'Social media defaults and site profile settings',
      ),
      'identifier' => 'management_social-media:admin/config/media/socialmedia',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_media:admin/config/media',
  );
  // Exported menu link: management_status-report:admin/reports/status
  $menu_links['management_status-report:admin/reports/status'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/reports/status',
    'router_path' => 'admin/reports/status',
    'link_title' => 'Status report',
    'options' => array(
      'attributes' => array(
        'title' => 'Get a status report about your site\'s operation and any detected problems.',
      ),
      'identifier' => 'management_status-report:admin/reports/status',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -60,
    'customized' => 0,
    'parent_identifier' => 'management_reports:admin/reports',
  );
  // Exported menu link: management_structure:admin/structure
  $menu_links['management_structure:admin/structure'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure',
    'router_path' => 'admin/structure',
    'link_title' => 'Structure',
    'options' => array(
      'attributes' => array(
        'title' => 'Administer blocks, content types, menus, etc.',
      ),
      'identifier' => 'management_structure:admin/structure',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -8,
    'customized' => 0,
    'parent_identifier' => 'management_administration:admin',
  );
  // Exported menu link: management_stylizer:admin/structure/stylizer
  $menu_links['management_stylizer:admin/structure/stylizer'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/stylizer',
    'router_path' => 'admin/structure/stylizer',
    'link_title' => 'Stylizer',
    'options' => array(
      'attributes' => array(
        'title' => 'Add, edit or delete stylizer styles.',
      ),
      'identifier' => 'management_stylizer:admin/structure/stylizer',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_structure:admin/structure',
  );
  // Exported menu link: management_system:admin/config/system
  $menu_links['management_system:admin/config/system'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/system',
    'router_path' => 'admin/config/system',
    'link_title' => 'System',
    'options' => array(
      'attributes' => array(
        'title' => 'General system related configuration.',
      ),
      'identifier' => 'management_system:admin/config/system',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -20,
    'customized' => 0,
    'parent_identifier' => 'management_configuration:admin/config',
  );
  // Exported menu link: management_taxonomy:admin/structure/taxonomy
  $menu_links['management_taxonomy:admin/structure/taxonomy'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/taxonomy',
    'router_path' => 'admin/structure/taxonomy',
    'link_title' => 'Taxonomy',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage tagging, categorization, and classification of your content.',
      ),
      'identifier' => 'management_taxonomy:admin/structure/taxonomy',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_structure:admin/structure',
  );
  // Exported menu link: management_text-formats:admin/config/content/formats
  $menu_links['management_text-formats:admin/config/content/formats'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/content/formats',
    'router_path' => 'admin/config/content/formats',
    'link_title' => 'Text formats',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure how content input by users is filtered, including allowed HTML tags. Also allows enabling of module-provided filters.',
      ),
      'identifier' => 'management_text-formats:admin/config/content/formats',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_content-authoring:admin/config/content',
  );
  // Exported menu link: management_top-access-denied-errors:admin/reports/access-denied
  $menu_links['management_top-access-denied-errors:admin/reports/access-denied'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/reports/access-denied',
    'router_path' => 'admin/reports/access-denied',
    'link_title' => 'Top \'access denied\' errors',
    'options' => array(
      'attributes' => array(
        'title' => 'View \'access denied\' errors (403s).',
      ),
      'identifier' => 'management_top-access-denied-errors:admin/reports/access-denied',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_reports:admin/reports',
  );
  // Exported menu link: management_top-page-not-found-errors:admin/reports/page-not-found
  $menu_links['management_top-page-not-found-errors:admin/reports/page-not-found'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/reports/page-not-found',
    'router_path' => 'admin/reports/page-not-found',
    'link_title' => 'Top \'page not found\' errors',
    'options' => array(
      'attributes' => array(
        'title' => 'View \'page not found\' errors (404s).',
      ),
      'identifier' => 'management_top-page-not-found-errors:admin/reports/page-not-found',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_reports:admin/reports',
  );
  // Exported menu link: management_top-search-phrases:admin/reports/search
  $menu_links['management_top-search-phrases:admin/reports/search'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/reports/search',
    'router_path' => 'admin/reports/search',
    'link_title' => 'Top search phrases',
    'options' => array(
      'attributes' => array(
        'title' => 'View most popular search phrases.',
      ),
      'identifier' => 'management_top-search-phrases:admin/reports/search',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_reports:admin/reports',
  );
  // Exported menu link: management_trigger-scheduler:admin/config/system/job_scheduler
  $menu_links['management_trigger-scheduler:admin/config/system/job_scheduler'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/system/job_scheduler',
    'router_path' => 'admin/config/system/job_scheduler',
    'link_title' => 'Trigger scheduler',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure timely triggers',
      ),
      'identifier' => 'management_trigger-scheduler:admin/config/system/job_scheduler',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_system:admin/config/system',
  );
  // Exported menu link: management_trigger-scheduler:admin/config/system/job_scheduler/add
  $menu_links['management_trigger-scheduler:admin/config/system/job_scheduler/add'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/system/job_scheduler/add',
    'router_path' => 'admin/config/system/job_scheduler/add',
    'link_title' => 'Trigger scheduler',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure timely triggers',
      ),
      'identifier' => 'management_trigger-scheduler:admin/config/system/job_scheduler/add',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_trigger-scheduler:admin/config/system/job_scheduler',
  );
  // Exported menu link: management_url-aliases:admin/config/search/path
  $menu_links['management_url-aliases:admin/config/search/path'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/search/path',
    'router_path' => 'admin/config/search/path',
    'link_title' => 'URL aliases',
    'options' => array(
      'attributes' => array(
        'title' => 'Change your site\'s URL paths by aliasing them.',
      ),
      'identifier' => 'management_url-aliases:admin/config/search/path',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -5,
    'customized' => 0,
    'parent_identifier' => 'management_search-and-metadata:admin/config/search',
  );
  // Exported menu link: management_user-interface:admin/config/user-interface
  $menu_links['management_user-interface:admin/config/user-interface'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/user-interface',
    'router_path' => 'admin/config/user-interface',
    'link_title' => 'User interface',
    'options' => array(
      'attributes' => array(
        'title' => 'Tools that enhance the user interface.',
      ),
      'identifier' => 'management_user-interface:admin/config/user-interface',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -15,
    'customized' => 0,
    'parent_identifier' => 'management_configuration:admin/config',
  );
  // Exported menu link: management_user-menu:admin/structure/menu/manage/user-menu
  $menu_links['management_user-menu:admin/structure/menu/manage/user-menu'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/user-menu',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'User menu',
    'options' => array(
      'identifier' => 'management_user-menu:admin/structure/menu/manage/user-menu',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_menus:admin/structure/menu',
  );
  // Exported menu link: management_views-plugins:admin/reports/views-plugins
  $menu_links['management_views-plugins:admin/reports/views-plugins'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/reports/views-plugins',
    'router_path' => 'admin/reports/views-plugins',
    'link_title' => 'Views plugins',
    'options' => array(
      'attributes' => array(
        'title' => 'Overview of plugins used in all views.',
      ),
      'identifier' => 'management_views-plugins:admin/reports/views-plugins',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_reports:admin/reports',
  );
  // Exported menu link: management_views:admin/structure/views
  $menu_links['management_views:admin/structure/views'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/views',
    'router_path' => 'admin/structure/views',
    'link_title' => 'Views',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage customized lists of content.',
      ),
      'identifier' => 'management_views:admin/structure/views',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_structure:admin/structure',
  );
  // Exported menu link: management_web-services:admin/config/services
  $menu_links['management_web-services:admin/config/services'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/services',
    'router_path' => 'admin/config/services',
    'link_title' => 'Web services',
    'options' => array(
      'attributes' => array(
        'title' => 'Tools related to web services.',
      ),
      'identifier' => 'management_web-services:admin/config/services',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_configuration:admin/config',
  );
  // Exported menu link: management_webform-settings:admin/config/content/webform
  $menu_links['management_webform-settings:admin/config/content/webform'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/content/webform',
    'router_path' => 'admin/config/content/webform',
    'link_title' => 'Webform settings',
    'options' => array(
      'attributes' => array(
        'title' => 'Global configuration of webform functionality.',
      ),
      'identifier' => 'management_webform-settings:admin/config/content/webform',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_content-authoring:admin/config/content',
  );
  // Exported menu link: management_workflow:admin/config/workflow
  $menu_links['management_workflow:admin/config/workflow'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/workflow',
    'router_path' => 'admin/config/workflow',
    'link_title' => 'Workflow',
    'options' => array(
      'attributes' => array(
        'title' => 'Content workflow, editorial workflow tools.',
      ),
      'identifier' => 'management_workflow:admin/config/workflow',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 5,
    'customized' => 0,
    'parent_identifier' => 'management_configuration:admin/config',
  );
  // Exported menu link: navigation_:content/Home
  $menu_links['navigation_:content/Home'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'content/Home',
    'router_path' => 'content/Home',
    'link_title' => '',
    'options' => array(
      'identifier' => 'navigation_:content/Home',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: navigation_acquia-spi-custom-test-validation:system/acquia-spi-custom-test-validate
  $menu_links['navigation_acquia-spi-custom-test-validation:system/acquia-spi-custom-test-validate'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'system/acquia-spi-custom-test-validate',
    'router_path' => 'system/acquia-spi-custom-test-validate',
    'link_title' => 'Acquia SPI Custom Test Validation',
    'options' => array(
      'attributes' => array(
        'title' => 'Perform a validation check on all Acquia SPI custom tests.',
      ),
      'identifier' => 'navigation_acquia-spi-custom-test-validation:system/acquia-spi-custom-test-validate',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: navigation_add-content:node/add
  $menu_links['navigation_add-content:node/add'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add',
    'router_path' => 'node/add',
    'link_title' => 'Add content',
    'options' => array(
      'identifier' => 'navigation_add-content:node/add',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: navigation_add-file:file/add
  $menu_links['navigation_add-file:file/add'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'file/add',
    'router_path' => 'file/add',
    'link_title' => 'Add file',
    'options' => array(
      'identifier' => 'navigation_add-file:file/add',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: navigation_announcement-type:node/add/announcement-type
  $menu_links['navigation_announcement-type:node/add/announcement-type'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/announcement-type',
    'router_path' => 'node/add/announcement-type',
    'link_title' => 'Announcement Type',
    'options' => array(
      'identifier' => 'navigation_announcement-type:node/add/announcement-type',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Exported menu link: navigation_article:node/add/article
  $menu_links['navigation_article:node/add/article'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/article',
    'router_path' => 'node/add/article',
    'link_title' => 'Article',
    'options' => array(
      'attributes' => array(
        'title' => 'Use <em>articles</em> for time-sensitive content like news, press releases or blog posts.',
      ),
      'identifier' => 'navigation_article:node/add/article',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Exported menu link: navigation_basic-page:node/add/page
  $menu_links['navigation_basic-page:node/add/page'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/page',
    'router_path' => 'node/add/page',
    'link_title' => 'Basic page',
    'options' => array(
      'attributes' => array(
        'title' => 'Use <em>basic pages</em> for your static content, such as an \'About us\' page.',
      ),
      'identifier' => 'navigation_basic-page:node/add/page',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Exported menu link: navigation_calendar:calendar-node-field-date
  $menu_links['navigation_calendar:calendar-node-field-date'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'calendar-node-field-date',
    'router_path' => 'calendar-node-field-date',
    'link_title' => 'Calendar',
    'options' => array(
      'identifier' => 'navigation_calendar:calendar-node-field-date',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: navigation_clients:node/add/clients
  $menu_links['navigation_clients:node/add/clients'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/clients',
    'router_path' => 'node/add/clients',
    'link_title' => 'Clients',
    'options' => array(
      'identifier' => 'navigation_clients:node/add/clients',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Exported menu link: navigation_compose-tips:filter/tips
  $menu_links['navigation_compose-tips:filter/tips'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'filter/tips',
    'router_path' => 'filter/tips',
    'link_title' => 'Compose tips',
    'options' => array(
      'identifier' => 'navigation_compose-tips:filter/tips',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: navigation_contact:contact
  $menu_links['navigation_contact:contact'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'contact',
    'router_path' => 'contact',
    'link_title' => 'Contact',
    'options' => array(
      'identifier' => 'navigation_contact:contact',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: navigation_contact:contacts
  $menu_links['navigation_contact:contacts'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'contacts',
    'router_path' => 'contacts',
    'link_title' => 'Contact',
    'options' => array(
      'attributes' => array(
        'title' => 'Contact list of all the departments',
      ),
      'identifier' => 'navigation_contact:contacts',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: navigation_contact:node/add/contact
  $menu_links['navigation_contact:node/add/contact'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/contact',
    'router_path' => 'node/add/contact',
    'link_title' => 'contact',
    'options' => array(
      'attributes' => array(
        'title' => 'list of contact by department',
      ),
      'identifier' => 'navigation_contact:node/add/contact',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Exported menu link: navigation_content-slider:node/add/content-slider
  $menu_links['navigation_content-slider:node/add/content-slider'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/content-slider',
    'router_path' => 'node/add/content-slider',
    'link_title' => 'Content Slider',
    'options' => array(
      'attributes' => array(
        'title' => 'Slider is a single content entry for the slider.',
      ),
      'identifier' => 'navigation_content-slider:node/add/content-slider',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Exported menu link: navigation_department:node/add/department
  $menu_links['navigation_department:node/add/department'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/department',
    'router_path' => 'node/add/department',
    'link_title' => 'Department',
    'options' => array(
      'identifier' => 'navigation_department:node/add/department',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Exported menu link: navigation_donate-for-military-medical-education-and-research:donate
  $menu_links['navigation_donate-for-military-medical-education-and-research:donate'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'donate',
    'router_path' => 'donate',
    'link_title' => 'Donate for Military Medical Education and Research',
    'options' => array(
      'identifier' => 'navigation_donate-for-military-medical-education-and-research:donate',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: navigation_events:node/add/events
  $menu_links['navigation_events:node/add/events'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/events',
    'router_path' => 'node/add/events',
    'link_title' => 'Events',
    'options' => array(
      'identifier' => 'navigation_events:node/add/events',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Exported menu link: navigation_faq:node/add/faq
  $menu_links['navigation_faq:node/add/faq'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/faq',
    'router_path' => 'node/add/faq',
    'link_title' => 'FAQ',
    'options' => array(
      'attributes' => array(
        'title' => 'A frequently asked question and its answer.',
      ),
      'identifier' => 'navigation_faq:node/add/faq',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Exported menu link: navigation_funding-opportunity:node/add/funding-opportunity
  $menu_links['navigation_funding-opportunity:node/add/funding-opportunity'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/funding-opportunity',
    'router_path' => 'node/add/funding-opportunity',
    'link_title' => 'Funding Opportunity',
    'options' => array(
      'identifier' => 'navigation_funding-opportunity:node/add/funding-opportunity',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Exported menu link: navigation_funding-ops:funding_opportunity_panels
  $menu_links['navigation_funding-ops:funding_opportunity_panels'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'funding_opportunity_panels',
    'router_path' => 'funding_opportunity_panels',
    'link_title' => 'Funding Ops',
    'options' => array(
      'identifier' => 'navigation_funding-ops:funding_opportunity_panels',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 3,
    'customized' => 1,
  );
  // Exported menu link: navigation_glossary:glossary
  $menu_links['navigation_glossary:glossary'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'glossary',
    'router_path' => 'glossary',
    'link_title' => 'Glossary',
    'options' => array(
      'identifier' => 'navigation_glossary:glossary',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: navigation_guidemaincategory:node/add/guide-main-category
  $menu_links['navigation_guidemaincategory:node/add/guide-main-category'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/guide-main-category',
    'router_path' => 'node/add/guide-main-category',
    'link_title' => 'Guide_Main_Category',
    'options' => array(
      'identifier' => 'navigation_guidemaincategory:node/add/guide-main-category',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Exported menu link: navigation_guidesteps:node/add/guide-steps
  $menu_links['navigation_guidesteps:node/add/guide-steps'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/guide-steps',
    'router_path' => 'node/add/guide-steps',
    'link_title' => 'Guide_Steps',
    'options' => array(
      'attributes' => array(
        'title' => 'The different steps to take for a specific service grouped by guide_main_category -- content type--',
      ),
      'identifier' => 'navigation_guidesteps:node/add/guide-steps',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Exported menu link: navigation_import:import
  $menu_links['navigation_import:import'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'import',
    'router_path' => 'import',
    'link_title' => 'Import',
    'options' => array(
      'identifier' => 'navigation_import:import',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: navigation_job-post:node/add/job-post
  $menu_links['navigation_job-post:node/add/job-post'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/job-post',
    'router_path' => 'node/add/job-post',
    'link_title' => 'Job post',
    'options' => array(
      'identifier' => 'navigation_job-post:node/add/job-post',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Exported menu link: navigation_leadership:content/about/Leadership
  $menu_links['navigation_leadership:content/about/Leadership'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'content/about/Leadership',
    'router_path' => 'content/about/Leadership',
    'link_title' => 'Leadership',
    'options' => array(
      'identifier' => 'navigation_leadership:content/about/Leadership',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: navigation_locations:node/add/locations
  $menu_links['navigation_locations:node/add/locations'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/locations',
    'router_path' => 'node/add/locations',
    'link_title' => 'Locations',
    'options' => array(
      'attributes' => array(
        'title' => 'HJF differents location',
      ),
      'identifier' => 'navigation_locations:node/add/locations',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Exported menu link: navigation_news:node/add/news
  $menu_links['navigation_news:node/add/news'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/news',
    'router_path' => 'node/add/news',
    'link_title' => 'News',
    'options' => array(
      'identifier' => 'navigation_news:node/add/news',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Exported menu link: navigation_panel:node/add/panel
  $menu_links['navigation_panel:node/add/panel'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/panel',
    'router_path' => 'node/add/panel',
    'link_title' => 'Panel',
    'options' => array(
      'attributes' => array(
        'title' => 'A panel layout broken up into rows and columns.',
      ),
      'identifier' => 'navigation_panel:node/add/panel',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Exported menu link: navigation_postion-category:node/add/postion-category
  $menu_links['navigation_postion-category:node/add/postion-category'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/postion-category',
    'router_path' => 'node/add/postion-category',
    'link_title' => 'Postion Category',
    'options' => array(
      'identifier' => 'navigation_postion-category:node/add/postion-category',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Exported menu link: navigation_program:node/add/program
  $menu_links['navigation_program:node/add/program'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/program',
    'router_path' => 'node/add/program',
    'link_title' => 'Program',
    'options' => array(
      'identifier' => 'navigation_program:node/add/program',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Exported menu link: navigation_rads:node/add/rads
  $menu_links['navigation_rads:node/add/rads'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/rads',
    'router_path' => 'node/add/rads',
    'link_title' => 'RADS',
    'options' => array(
      'identifier' => 'navigation_rads:node/add/rads',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Exported menu link: navigation_research-program:node/add/research-program
  $menu_links['navigation_research-program:node/add/research-program'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/research-program',
    'router_path' => 'node/add/research-program',
    'link_title' => 'Research Program',
    'options' => array(
      'identifier' => 'navigation_research-program:node/add/research-program',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Exported menu link: navigation_researchlocation:node/add/research-location
  $menu_links['navigation_researchlocation:node/add/research-location'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/research-location',
    'router_path' => 'node/add/research-location',
    'link_title' => 'research_location',
    'options' => array(
      'identifier' => 'navigation_researchlocation:node/add/research-location',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Exported menu link: navigation_rockville-pike:node/add/rockville-pike
  $menu_links['navigation_rockville-pike:node/add/rockville-pike'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/rockville-pike',
    'router_path' => 'node/add/rockville-pike',
    'link_title' => 'Rockville Pike',
    'options' => array(
      'identifier' => 'navigation_rockville-pike:node/add/rockville-pike',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Exported menu link: navigation_search:search
  $menu_links['navigation_search:search'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'search',
    'router_path' => 'search',
    'link_title' => 'Search',
    'options' => array(
      'identifier' => 'navigation_search:search',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: navigation_send-an-e-postcard:epostcard
  $menu_links['navigation_send-an-e-postcard:epostcard'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'epostcard',
    'router_path' => 'epostcard',
    'link_title' => 'Send an e-Postcard',
    'options' => array(
      'identifier' => 'navigation_send-an-e-postcard:epostcard',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: navigation_services:node/add/services
  $menu_links['navigation_services:node/add/services'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/services',
    'router_path' => 'node/add/services',
    'link_title' => 'Services',
    'options' => array(
      'identifier' => 'navigation_services:node/add/services',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Exported menu link: navigation_servicescategory:node/add/srvices-category
  $menu_links['navigation_servicescategory:node/add/srvices-category'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/srvices-category',
    'router_path' => 'node/add/srvices-category',
    'link_title' => 'Services_Category',
    'options' => array(
      'identifier' => 'navigation_servicescategory:node/add/srvices-category',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Exported menu link: navigation_site:search/site
  $menu_links['navigation_site:search/site'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'search/site',
    'router_path' => 'search/site',
    'link_title' => 'Site',
    'options' => array(
      'identifier' => 'navigation_site:search/site',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -5,
    'customized' => 0,
    'parent_identifier' => 'navigation_search:search',
  );
  // Exported menu link: navigation_sponsor:node/add/sponsor
  $menu_links['navigation_sponsor:node/add/sponsor'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/sponsor',
    'router_path' => 'node/add/sponsor',
    'link_title' => 'Sponsor',
    'options' => array(
      'identifier' => 'navigation_sponsor:node/add/sponsor',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Exported menu link: navigation_staff:node/add/staff
  $menu_links['navigation_staff:node/add/staff'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/staff',
    'router_path' => 'node/add/staff',
    'link_title' => 'Staff',
    'options' => array(
      'identifier' => 'navigation_staff:node/add/staff',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Exported menu link: navigation_success-story:node/add/succes-story
  $menu_links['navigation_success-story:node/add/succes-story'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/succes-story',
    'router_path' => 'node/add/succes-story',
    'link_title' => 'Success story',
    'options' => array(
      'identifier' => 'navigation_success-story:node/add/succes-story',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Exported menu link: navigation_webform:node/add/webform
  $menu_links['navigation_webform:node/add/webform'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/webform',
    'router_path' => 'node/add/webform',
    'link_title' => 'Webform',
    'options' => array(
      'attributes' => array(
        'title' => 'Create a new form or questionnaire accessible to users. Submission results and statistics are recorded and accessible to privileged users.',
      ),
      'identifier' => 'navigation_webform:node/add/webform',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Exported menu link: user-menu_log-out:user/logout
  $menu_links['user-menu_log-out:user/logout'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user/logout',
    'router_path' => 'user/logout',
    'link_title' => 'Log out',
    'options' => array(
      'identifier' => 'user-menu_log-out:user/logout',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'user-menu_my-account:user',
  );
  // Exported menu link: user-menu_user-account:user
  $menu_links['user-menu_user-account:user'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user',
    'router_path' => 'user',
    'link_title' => 'User account',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'user-menu_user-account:user',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 0,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('About');
  t('About Us');
  t('Account settings');
  t('Acquia Network settings');
  t('Acquia SPI Custom Test Validation');
  t('Actions');
  t('Add content');
  t('Add file');
  t('Administration');
  t('Administration menu');
  t('Advanced help');
  t('Announcement Type');
  t('Annual Reports');
  t('Apache Solr search');
  t('Apache Solr search index');
  t('Appearance');
  t('Article');
  t('Available updates');
  t('Basic page');
  t('Blocks');
  t('CKEditor');
  t('Calendar');
  t('Careers');
  t('Clean URLs');
  t('Clients');
  t('Clinical Trials');
  t('Colorbox');
  t('Combined Federal Campaign');
  t('Comments');
  t('Communications');
  t('Compose tips');
  t('Configuration');
  t('Configure');
  t('Contact');
  t('Contact Us');
  t('Contact form');
  t('Content');
  t('Content Slider');
  t('Content authoring');
  t('Content types');
  t('Context');
  t('Council of Directors');
  t('Cron');
  t('Culture and Benefits');
  t('Current search blocks');
  t('Custom access rulesets');
  t('Custom content panes');
  t('Dashboard');
  t('Date API');
  t('Date Popup');
  t('Date and time');
  t('Department');
  t('Devel settings');
  t('Development');
  t('Directions to HJF');
  t('Display Suite');
  t('Donate for Military Medical Education and Research');
  t('Donation');
  t('Email Contact Form Settings');
  t('Entity view modes');
  t('Ethics');
  t('Event Planning');
  t('Events');
  t('FAQ');
  t('Features');
  t('Feeds log');
  t('Field collections');
  t('Field dependencies');
  t('Field list');
  t('Fieldable Panels Panes');
  t('File settings');
  t('File system');
  t('File types');
  t('Files');
  t('Forward');
  t('Forward tracking');
  t('Frequently Asked Questions');
  t('Funding');
  t('Funding Opportunity');
  t('Funding Ops');
  t('Generate content');
  t('Generate menus');
  t('Generate terms');
  t('Generate users');
  t('Generate vocabularies');
  t('Geocoder settings');
  t('Glossary');
  t('GoogleChat');
  t('Guest Scientists');
  t('Guide to services');
  t('Guide_Main_Category');
  t('Guide_Steps');
  t('HJF 2011 Annual Report');
  t('HJF 2012 Annual Report');
  t('HJF 2013 Annual Report');
  t('HJF Contacts ');
  t('Help');
  t('History');
  t('Home');
  t('Human Resources');
  t('IP Geolocation Views & Maps');
  t('IP address blocking');
  t('Image styles');
  t('Image toolkit');
  t('Import');
  t('Job post');
  t('Leadership');
  t('Leaflet More Maps');
  t('Locations');
  t('Log out');
  t('Logging and errors');
  t('Main menu');
  t('Maintenance mode');
  t('Management');
  t('Masquerade');
  t('Media');
  t('Media Room');
  t('Media browser settings');
  t('Menus');
  t('Migrate fields');
  t('Mini panels');
  t('Module filter');
  t('Modules');
  t('Navigation');
  t('News');
  t('Open Jobs');
  t('OpenLayers');
  t('Pages');
  t('Panel');
  t('Panels');
  t('Payments');
  t('People');
  t('Performance');
  t('Postion Category');
  t('Program');
  t('Program Management');
  t('Proposal Development');
  t('RADS');
  t('RSS publishing');
  t('Rebuild type information for media');
  t('Recent log messages');
  t('Regional and language');
  t('Regional settings');
  t('Reports');
  t('Research Administration');
  t('Research Locations');
  t('Research Program');
  t('Research Programs');
  t('Research Sponsors');
  t('Rockville Pike');
  t('Search');
  t('Search API');
  t('Search and metadata');
  t('Search settings');
  t('Send an e-Postcard');
  t('Services');
  t('Services_Category');
  t('Shortcuts');
  t('Site');
  t('Site information');
  t('Social media');
  t('Sponsor');
  t('Staff');
  t('Status report');
  t('Structure');
  t('Stylizer');
  t('Success story');
  t('System');
  t('Taxonomy');
  t('Technology Transfer');
  t('Text formats');
  t('Top \'access denied\' errors');
  t('Top \'page not found\' errors');
  t('Top search phrases');
  t('Trigger scheduler');
  t('URL aliases');
  t('User account');
  t('User interface');
  t('User menu');
  t('Views');
  t('Views plugins');
  t('Web services');
  t('Webform');
  t('Webform settings');
  t('Workflow');
  t('contact');
  t('event_listing');
  t('jQuery update');
  t('research_location');
  t('test_funding_filters');


  return $menu_links;
}
