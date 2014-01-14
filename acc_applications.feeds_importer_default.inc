<?php
/**
 * @file
 * acc_applications.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function acc_applications_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'csv_acc_application';
  $feeds_importer->config = array(
    'name' => 'CSV Access Application',
    'description' => 'To import the content for Access Applications Content type',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'private://feeds',
        'allowed_schemes' => array(
          0 => 'public',
          1 => 'private',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => 0,
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'Title',
            'target' => 'title',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'Application Types',
            'target' => 'field_acc_application_types',
            'term_search' => '0',
            'autocreate' => 0,
          ),
          2 => array(
            'source' => 'Date',
            'target' => 'field_date_app:start',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'Submitted By',
            'target' => 'field_organizations',
            'term_search' => '0',
            'autocreate' => 0,
          ),
          4 => array(
            'source' => 'Submitted To',
            'target' => 'field_submited_to',
            'term_search' => '0',
            'autocreate' => 0,
          ),
          5 => array(
            'source' => 'If denied, by whom?',
            'target' => 'field_if_denied_app',
            'term_search' => '0',
            'autocreate' => 0,
          ),
          6 => array(
            'source' => 'How many days to get an answer?',
            'target' => 'field_how_many_days',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'Sectors',
            'target' => 'field_clusters',
            'term_search' => '0',
            'autocreate' => 0,
          ),
          8 => array(
            'source' => 'Geograpical Location Destination',
            'target' => 'field_geographical_location_dest',
            'term_search' => '0',
            'autocreate' => 0,
          ),
          9 => array(
            'source' => 'Submission Status',
            'target' => 'field_acc_submission_status',
            'term_search' => '0',
            'autocreate' => 0,
          ),
          10 => array(
            'source' => 'Nationality of traveler',
            'target' => 'node:acc_application:field_acc_nationality:name',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'Type of impact',
            'target' => 'field_acc_impacts:field_acc_impact_type:label',
            'unique' => FALSE,
          ),
          12 => array(
            'source' => 'Impact value',
            'target' => 'field_acc_impacts:field_acc_impact_value',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '0',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'acc_application',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['csv_acc_application'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'csv_acc_application_types';
  $feeds_importer->config = array(
    'name' => 'CSV Access Application Types',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsHTTPFetcher',
      'config' => array(
        'auto_detect_feeds' => FALSE,
        'use_pubsubhubbub' => FALSE,
        'designated_hub' => '',
        'request_timeout' => NULL,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsTermProcessor',
      'config' => array(
        'vocabulary' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'Name:en',
            'target' => 'name',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'Parent',
            'target' => 'parent',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'GUID',
            'target' => 'guid',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'UUID',
            'target' => 'uuid:uuid',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'acc_application_types',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['csv_acc_application_types'] = $feeds_importer;

  return $export;
}
