<?php
/**
 * @file
 * acc_applications.facetapi_defaults.inc
 */

/**
 * Implements hook_facetapi_default_facet_settings().
 */
function acc_applications_facetapi_default_facet_settings() {
  $export = array();

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@acc_applications::created';
  $facet->searcher = 'search_api@acc_applications';
  $facet->realm = '';
  $facet->facet = 'created';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'or',
    'hard_limit' => '50',
    'dependencies' => array(
      'bundle' => 'none',
      'bundle_selected' => array(),
      'roles' => array(),
    ),
    'facet_mincount' => '1',
    'facet_missing' => '0',
    'flatten' => 0,
    'query_type' => 'date',
    'default_true' => '1',
    'facet_search_ids' => array(),
    'date_granularity' => 'DAY',
    'pretty_paths_alias' => 'created',
  );
  $export['search_api@acc_applications::created'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@acc_applications::field_acc_application_types';
  $facet->searcher = 'search_api@acc_applications';
  $facet->realm = '';
  $facet->facet = 'field_acc_application_types';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'or',
    'hard_limit' => '50',
    'dependencies' => array(
      'bundle' => 'none',
      'bundle_selected' => array(),
      'roles' => array(),
    ),
    'facet_mincount' => '1',
    'facet_missing' => '0',
    'flatten' => '0',
    'query_type' => 'term',
    'default_true' => '1',
    'facet_search_ids' => array(),
    'exclude' => 0,
    'pretty_paths_alias' => 'field_acc_application_types',
    'pretty_paths_taxonomy_pathauto' => 0,
    'pretty_paths_taxonomy_pathauto_vocabulary' => 'acc_application_types',
  );
  $export['search_api@acc_applications::field_acc_application_types'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@acc_applications::field_acc_nationality:iso2';
  $facet->searcher = 'search_api@acc_applications';
  $facet->realm = '';
  $facet->facet = 'field_acc_nationality:iso2';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'or',
    'hard_limit' => '50',
    'dependencies' => array(
      'bundle' => 'none',
      'bundle_selected' => array(),
    ),
    'facet_mincount' => '1',
    'facet_missing' => '0',
    'flatten' => 0,
    'query_type' => 'term',
    'default_true' => '1',
    'facet_search_ids' => array(),
    'exclude' => 0,
    'pretty_paths_alias' => 'field_acc_nationality:iso2',
  );
  $export['search_api@acc_applications::field_acc_nationality:iso2'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@acc_applications::field_acc_submission_status';
  $facet->searcher = 'search_api@acc_applications';
  $facet->realm = '';
  $facet->facet = 'field_acc_submission_status';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'or',
    'hard_limit' => '50',
    'dependencies' => array(
      'roles' => array(
        1 => 0,
        2 => 0,
        218860149 => 0,
        188284353 => 0,
        200153887 => 0,
        197637936 => 0,
        52310416 => 0,
        30037204 => 0,
      ),
      'bundle' => 'none',
      'bundle_selected' => array(
        'acc_application' => 'acc_application',
        'acc_incident' => 0,
        'document' => 0,
        'gallery' => 0,
        'highlight' => 0,
        'link' => 0,
        'news' => 0,
        'map' => 0,
      ),
    ),
    'facet_mincount' => '1',
    'facet_missing' => '0',
    'flatten' => '0',
    'query_type' => 'term',
    'default_true' => TRUE,
    'facet_search_ids' => array(),
    'exclude' => 0,
    'pretty_paths_alias' => 'field_acc_submission_status',
    'pretty_paths_taxonomy_pathauto' => 0,
    'pretty_paths_taxonomy_pathauto_vocabulary' => 'acc_application_submission_status',
  );
  $export['search_api@acc_applications::field_acc_submission_status'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@acc_applications::field_clusters';
  $facet->searcher = 'search_api@acc_applications';
  $facet->realm = '';
  $facet->facet = 'field_clusters';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'or',
    'hard_limit' => '50',
    'dependencies' => array(
      'bundle' => 'none',
      'bundle_selected' => array(),
    ),
    'facet_mincount' => '1',
    'facet_missing' => '0',
    'flatten' => '0',
    'query_type' => 'term',
    'default_true' => TRUE,
    'facet_search_ids' => array(),
    'exclude' => 0,
    'pretty_paths_alias' => 'field_clusters',
    'pretty_paths_taxonomy_pathauto' => 0,
    'pretty_paths_taxonomy_pathauto_vocabulary' => 'clusters',
  );
  $export['search_api@acc_applications::field_clusters'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@acc_applications::field_date_app:duration';
  $facet->searcher = 'search_api@acc_applications';
  $facet->realm = '';
  $facet->facet = 'field_date_app:duration';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'or',
    'hard_limit' => '50',
    'dependencies' => array(
      'bundle' => 'none',
      'bundle_selected' => array(),
    ),
    'facet_mincount' => '1',
    'facet_missing' => '0',
    'flatten' => 0,
    'query_type' => 'term',
    'default_true' => TRUE,
    'facet_search_ids' => array(),
    'exclude' => 0,
    'pretty_paths_alias' => 'field_date_app:duration',
  );
  $export['search_api@acc_applications::field_date_app:duration'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@acc_applications::field_date_app:value';
  $facet->searcher = 'search_api@acc_applications';
  $facet->realm = '';
  $facet->facet = 'field_date_app:value';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'or',
    'hard_limit' => '50',
    'dependencies' => array(
      'bundle' => 'none',
      'bundle_selected' => array(),
    ),
    'facet_mincount' => '1',
    'facet_missing' => '0',
    'flatten' => 0,
    'query_type' => 'date',
    'default_true' => '1',
    'facet_search_ids' => array(),
    'date_granularity' => 'DAY',
    'pretty_paths_alias' => 'field_date_app:value',
  );
  $export['search_api@acc_applications::field_date_app:value'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@acc_applications::field_geographical_location_dest';
  $facet->searcher = 'search_api@acc_applications';
  $facet->realm = '';
  $facet->facet = 'field_geographical_location_dest';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'or',
    'hard_limit' => '50',
    'dependencies' => array(
      'bundle' => 'none',
      'bundle_selected' => array(),
    ),
    'facet_mincount' => '1',
    'facet_missing' => '0',
    'flatten' => '0',
    'query_type' => 'term',
    'default_true' => TRUE,
    'facet_search_ids' => array(),
    'exclude' => 0,
    'pretty_paths_alias' => 'field_geographical_location_dest',
    'pretty_paths_taxonomy_pathauto' => 0,
    'pretty_paths_taxonomy_pathauto_vocabulary' => 'locations',
  );
  $export['search_api@acc_applications::field_geographical_location_dest'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@acc_applications::field_if_denied_app';
  $facet->searcher = 'search_api@acc_applications';
  $facet->realm = '';
  $facet->facet = 'field_if_denied_app';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'or',
    'hard_limit' => '50',
    'dependencies' => array(
      'bundle' => 'none',
      'bundle_selected' => array(),
    ),
    'facet_mincount' => '1',
    'facet_missing' => '0',
    'flatten' => '0',
    'query_type' => 'term',
    'default_true' => TRUE,
    'facet_search_ids' => array(),
    'exclude' => 0,
    'pretty_paths_alias' => 'field_if_denied_app',
    'pretty_paths_taxonomy_pathauto' => 0,
    'pretty_paths_taxonomy_pathauto_vocabulary' => 'organizations',
  );
  $export['search_api@acc_applications::field_if_denied_app'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@acc_applications::field_organizations';
  $facet->searcher = 'search_api@acc_applications';
  $facet->realm = '';
  $facet->facet = 'field_organizations';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'or',
    'hard_limit' => '50',
    'dependencies' => array(
      'bundle' => 'none',
      'bundle_selected' => array(),
    ),
    'facet_mincount' => '1',
    'facet_missing' => '0',
    'flatten' => '0',
    'query_type' => 'term',
    'default_true' => TRUE,
    'facet_search_ids' => array(),
    'exclude' => 0,
    'pretty_paths_alias' => 'field_organizations',
    'pretty_paths_taxonomy_pathauto' => 0,
    'pretty_paths_taxonomy_pathauto_vocabulary' => 'organizations',
  );
  $export['search_api@acc_applications::field_organizations'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@acc_applications::field_submited_to';
  $facet->searcher = 'search_api@acc_applications';
  $facet->realm = '';
  $facet->facet = 'field_submited_to';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'or',
    'hard_limit' => '50',
    'dependencies' => array(
      'bundle' => 'none',
      'bundle_selected' => array(),
    ),
    'facet_mincount' => '1',
    'facet_missing' => '0',
    'flatten' => '0',
    'query_type' => 'term',
    'default_true' => TRUE,
    'facet_search_ids' => array(),
    'exclude' => 0,
    'pretty_paths_alias' => 'field_submited_to',
    'pretty_paths_taxonomy_pathauto' => 0,
    'pretty_paths_taxonomy_pathauto_vocabulary' => 'organizations',
  );
  $export['search_api@acc_applications::field_submited_to'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@acc_applications:block:author';
  $facet->searcher = 'search_api@acc_applications';
  $facet->realm = 'block';
  $facet->facet = 'author';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@acc_applications:block:author'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@acc_applications:block:created';
  $facet->searcher = 'search_api@acc_applications';
  $facet->realm = 'block';
  $facet->facet = 'created';
  $facet->enabled = TRUE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'collapsible',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
      'indexed' => 0,
    ),
    'sort_weight' => array(
      'active' => '-50',
      'count' => '-49',
      'display' => '-48',
      'indexed' => '0',
    ),
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'indexed' => '4',
    ),
    'empty_behavior' => 'none',
    'soft_limit' => '20',
    'nofollow' => 1,
    'show_expanded' => 0,
    'keep_open' => 0,
    'expand' => 0,
    'collapsible_children' => 0,
    'empty_text' => array(
      'value' => '',
      'format' => 'simple',
    ),
    'submit_realm' => 'Save and go back to realm settings',
  );
  $export['search_api@acc_applications:block:created'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@acc_applications:block:field_acc_application_types';
  $facet->searcher = 'search_api@acc_applications';
  $facet->realm = 'block';
  $facet->facet = 'field_acc_application_types';
  $facet->enabled = TRUE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'collapsible',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
      'indexed' => 0,
    ),
    'sort_weight' => array(
      'active' => '-50',
      'count' => '-49',
      'display' => '-48',
      'indexed' => '0',
    ),
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'indexed' => '4',
    ),
    'empty_behavior' => 'none',
    'soft_limit' => '20',
    'nofollow' => 1,
    'show_expanded' => 0,
    'keep_open' => 0,
    'expand' => 0,
    'collapsible_children' => 0,
    'empty_text' => array(
      'value' => '',
      'format' => 'simple',
    ),
    'submit_realm' => 'Save and go back to realm settings',
  );
  $export['search_api@acc_applications:block:field_acc_application_types'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@acc_applications:block:field_acc_nationality:iso2';
  $facet->searcher = 'search_api@acc_applications';
  $facet->realm = 'block';
  $facet->facet = 'field_acc_nationality:iso2';
  $facet->enabled = TRUE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'collapsible',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
      'indexed' => 0,
    ),
    'sort_weight' => array(
      'active' => '-50',
      'count' => '-49',
      'display' => '-48',
      'indexed' => '0',
    ),
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'indexed' => '4',
    ),
    'empty_behavior' => 'none',
    'soft_limit' => '20',
    'nofollow' => 1,
    'show_expanded' => 0,
    'keep_open' => 0,
    'expand' => 0,
    'collapsible_children' => 0,
    'empty_text' => array(
      'value' => '',
      'format' => 'simple',
    ),
    'submit_realm' => 'Save and go back to realm settings',
  );
  $export['search_api@acc_applications:block:field_acc_nationality:iso2'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@acc_applications:block:field_acc_submission_status';
  $facet->searcher = 'search_api@acc_applications';
  $facet->realm = 'block';
  $facet->facet = 'field_acc_submission_status';
  $facet->enabled = TRUE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'collapsible',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
      'indexed' => 0,
    ),
    'sort_weight' => array(
      'active' => '-50',
      'count' => '-49',
      'display' => '-48',
      'indexed' => '0',
    ),
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'indexed' => '4',
    ),
    'empty_behavior' => 'none',
    'soft_limit' => '20',
    'nofollow' => 1,
    'show_expanded' => 0,
    'keep_open' => 0,
    'expand' => 0,
    'collapsible_children' => 0,
    'empty_text' => array(
      'value' => '',
      'format' => 'simple',
    ),
    'submit_realm' => 'Save and go back to realm settings',
  );
  $export['search_api@acc_applications:block:field_acc_submission_status'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@acc_applications:block:field_clusters';
  $facet->searcher = 'search_api@acc_applications';
  $facet->realm = 'block';
  $facet->facet = 'field_clusters';
  $facet->enabled = TRUE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'collapsible',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
      'indexed' => 0,
    ),
    'sort_weight' => array(
      'active' => '-50',
      'count' => '-49',
      'display' => '-48',
      'indexed' => '0',
    ),
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'indexed' => '4',
    ),
    'empty_behavior' => 'none',
    'soft_limit' => '20',
    'nofollow' => 1,
    'show_expanded' => 0,
    'keep_open' => 0,
    'expand' => 0,
    'collapsible_children' => 0,
    'empty_text' => array(
      'value' => '',
      'format' => 'simple',
    ),
    'submit_realm' => 'Save and go back to realm settings',
  );
  $export['search_api@acc_applications:block:field_clusters'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@acc_applications:block:field_date_app:duration';
  $facet->searcher = 'search_api@acc_applications';
  $facet->realm = 'block';
  $facet->facet = 'field_date_app:duration';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'collapsible',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
      'indexed' => 0,
    ),
    'sort_weight' => array(
      'active' => '-50',
      'count' => '-49',
      'display' => '-48',
      'indexed' => '0',
    ),
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'indexed' => '4',
    ),
    'empty_behavior' => 'none',
    'soft_limit' => '20',
    'nofollow' => 1,
    'show_expanded' => 0,
    'keep_open' => 0,
    'expand' => 0,
    'collapsible_children' => 0,
    'empty_text' => array(
      'value' => '',
      'format' => 'simple',
    ),
    'submit_realm' => 'Save and go back to realm settings',
  );
  $export['search_api@acc_applications:block:field_date_app:duration'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@acc_applications:block:field_date_app:value';
  $facet->searcher = 'search_api@acc_applications';
  $facet->realm = 'block';
  $facet->facet = 'field_date_app:value';
  $facet->enabled = TRUE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'collapsible',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
      'indexed' => 0,
    ),
    'sort_weight' => array(
      'active' => '-50',
      'count' => '-49',
      'display' => '-48',
      'indexed' => '0',
    ),
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'indexed' => '4',
    ),
    'empty_behavior' => 'none',
    'soft_limit' => '20',
    'nofollow' => 1,
    'show_expanded' => 0,
    'keep_open' => 0,
    'expand' => 0,
    'collapsible_children' => 0,
    'empty_text' => array(
      'value' => '',
      'format' => 'simple',
    ),
    'submit_realm' => 'Save and go back to realm settings',
  );
  $export['search_api@acc_applications:block:field_date_app:value'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@acc_applications:block:field_date_app:value2';
  $facet->searcher = 'search_api@acc_applications';
  $facet->realm = 'block';
  $facet->facet = 'field_date_app:value2';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@acc_applications:block:field_date_app:value2'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@acc_applications:block:field_geographical_location_dest';
  $facet->searcher = 'search_api@acc_applications';
  $facet->realm = 'block';
  $facet->facet = 'field_geographical_location_dest';
  $facet->enabled = TRUE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'collapsible',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
      'indexed' => 0,
    ),
    'sort_weight' => array(
      'active' => '-50',
      'count' => '-49',
      'display' => '-48',
      'indexed' => '0',
    ),
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'indexed' => '4',
    ),
    'empty_behavior' => 'none',
    'soft_limit' => '20',
    'nofollow' => 1,
    'show_expanded' => 0,
    'keep_open' => 0,
    'expand' => 0,
    'collapsible_children' => 0,
    'empty_text' => array(
      'value' => '',
      'format' => 'simple',
    ),
    'submit_realm' => 'Save and go back to realm settings',
  );
  $export['search_api@acc_applications:block:field_geographical_location_dest'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@acc_applications:block:field_how_many_days';
  $facet->searcher = 'search_api@acc_applications';
  $facet->realm = 'block';
  $facet->facet = 'field_how_many_days';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@acc_applications:block:field_how_many_days'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@acc_applications:block:field_if_denied_app';
  $facet->searcher = 'search_api@acc_applications';
  $facet->realm = 'block';
  $facet->facet = 'field_if_denied_app';
  $facet->enabled = TRUE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'collapsible',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
      'indexed' => 0,
    ),
    'sort_weight' => array(
      'active' => '-50',
      'count' => '-49',
      'display' => '-48',
      'indexed' => '0',
    ),
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'indexed' => '4',
    ),
    'empty_behavior' => 'none',
    'soft_limit' => '20',
    'nofollow' => 1,
    'show_expanded' => 0,
    'keep_open' => 0,
    'expand' => 0,
    'collapsible_children' => 0,
    'empty_text' => array(
      'value' => '',
      'format' => 'simple',
    ),
    'submit_realm' => 'Save and go back to realm settings',
  );
  $export['search_api@acc_applications:block:field_if_denied_app'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@acc_applications:block:field_locations';
  $facet->searcher = 'search_api@acc_applications';
  $facet->realm = 'block';
  $facet->facet = 'field_locations';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@acc_applications:block:field_locations'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@acc_applications:block:field_organizations';
  $facet->searcher = 'search_api@acc_applications';
  $facet->realm = 'block';
  $facet->facet = 'field_organizations';
  $facet->enabled = TRUE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'collapsible',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
      'indexed' => 0,
    ),
    'sort_weight' => array(
      'active' => '-50',
      'count' => '-49',
      'display' => '-48',
      'indexed' => '0',
    ),
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'indexed' => '4',
    ),
    'empty_behavior' => 'none',
    'soft_limit' => '20',
    'nofollow' => 1,
    'show_expanded' => 0,
    'keep_open' => 0,
    'expand' => 0,
    'collapsible_children' => 0,
    'empty_text' => array(
      'value' => '',
      'format' => 'simple',
    ),
    'submit_realm' => 'Save and go back to realm settings',
  );
  $export['search_api@acc_applications:block:field_organizations'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@acc_applications:block:field_submited_to';
  $facet->searcher = 'search_api@acc_applications';
  $facet->realm = 'block';
  $facet->facet = 'field_submited_to';
  $facet->enabled = TRUE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'collapsible',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
      'indexed' => 0,
    ),
    'sort_weight' => array(
      'active' => '-50',
      'count' => '-49',
      'display' => '-48',
      'indexed' => '0',
    ),
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'indexed' => '4',
    ),
    'empty_behavior' => 'none',
    'soft_limit' => '20',
    'nofollow' => 1,
    'show_expanded' => 0,
    'keep_open' => 0,
    'expand' => 0,
    'collapsible_children' => 0,
    'empty_text' => array(
      'value' => '',
      'format' => 'simple',
    ),
    'submit_realm' => 'Save and go back to realm settings',
  );
  $export['search_api@acc_applications:block:field_submited_to'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@acc_applications:block:search_api_access_node';
  $facet->searcher = 'search_api@acc_applications';
  $facet->realm = 'block';
  $facet->facet = 'search_api_access_node';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@acc_applications:block:search_api_access_node'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@acc_applications:block:search_api_language';
  $facet->searcher = 'search_api@acc_applications';
  $facet->realm = 'block';
  $facet->facet = 'search_api_language';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@acc_applications:block:search_api_language'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@acc_applications:block:status';
  $facet->searcher = 'search_api@acc_applications';
  $facet->realm = 'block';
  $facet->facet = 'status';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@acc_applications:block:status'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@acc_applications:block:title';
  $facet->searcher = 'search_api@acc_applications';
  $facet->realm = 'block';
  $facet->facet = 'title';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@acc_applications:block:title'] = $facet;

  return $export;
}
