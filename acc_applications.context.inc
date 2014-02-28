<?php
/**
 * @file
 * acc_applications.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function acc_applications_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'acc_applications';
  $context->description = '';
  $context->tag = 'Access Application';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'acc_applications:list' => 'acc_applications:list',
        'acc_applications:map' => 'acc_applications:map',
        'acc_applications:master' => 'acc_applications:master',
        'acc_applications:table' => 'acc_applications:table',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'facetapi-mKYj0BXj2qODeSFz7lvPiWbdjjztAJAi' => array(
          'module' => 'facetapi',
          'delta' => 'mKYj0BXj2qODeSFz7lvPiWbdjjztAJAi',
          'region' => 'sidebar_first',
          'weight' => '-83',
        ),
        'facetapi-WpYIIIVJQNClXDK705fnJWzk5Wri4OC0' => array(
          'module' => 'facetapi',
          'delta' => 'WpYIIIVJQNClXDK705fnJWzk5Wri4OC0',
          'region' => 'sidebar_first',
          'weight' => '-82',
        ),
        'facetapi-rpzkEy0XEjt5osZwkymXbAvWwBM80lVz' => array(
          'module' => 'facetapi',
          'delta' => 'rpzkEy0XEjt5osZwkymXbAvWwBM80lVz',
          'region' => 'sidebar_first',
          'weight' => '-81',
        ),
        'facetapi-Ls6afGMH0R01rGRRgGnqAkVdBQbTWgdu' => array(
          'module' => 'facetapi',
          'delta' => 'Ls6afGMH0R01rGRRgGnqAkVdBQbTWgdu',
          'region' => 'sidebar_first',
          'weight' => '-80',
        ),
        'facetapi-K1Jja7BEpcA0DHAUvZpdbwj7GSLmBElT' => array(
          'module' => 'facetapi',
          'delta' => 'K1Jja7BEpcA0DHAUvZpdbwj7GSLmBElT',
          'region' => 'sidebar_first',
          'weight' => '-79',
        ),
        'facetapi-0wMZ68Ira20GNFPNF7IFpWa8S70LzLmG' => array(
          'module' => 'facetapi',
          'delta' => '0wMZ68Ira20GNFPNF7IFpWa8S70LzLmG',
          'region' => 'sidebar_first',
          'weight' => '-78',
        ),
        'facetapi-PkAh8ggSFy7TppNCntskHumh0cG2B1JW' => array(
          'module' => 'facetapi',
          'delta' => 'PkAh8ggSFy7TppNCntskHumh0cG2B1JW',
          'region' => 'sidebar_first',
          'weight' => '-77',
        ),
        'facetapi-YjIYyseae8r3f4Q2mB04c9VhyFNgH5dB' => array(
          'module' => 'facetapi',
          'delta' => 'YjIYyseae8r3f4Q2mB04c9VhyFNgH5dB',
          'region' => 'sidebar_first',
          'weight' => '-76',
        ),
        'facetapi-8rxxhQY76OTFo7ZuyfBxMtvkFjGicwDM' => array(
          'module' => 'facetapi',
          'delta' => '8rxxhQY76OTFo7ZuyfBxMtvkFjGicwDM',
          'region' => 'sidebar_first',
          'weight' => '-75',
        ),
        'facetapi-CkMmQ6BgqOa13Yjows0WeXwwSZQFgw9F' => array(
          'module' => 'facetapi',
          'delta' => 'CkMmQ6BgqOa13Yjows0WeXwwSZQFgw9F',
          'region' => 'sidebar_first',
          'weight' => '-74',
        ),
        'facetapi-0RGeUKXAh1atSEXM4TwcHYPsu2vNN9ok' => array(
          'module' => 'facetapi',
          'delta' => '0RGeUKXAh1atSEXM4TwcHYPsu2vNN9ok',
          'region' => 'sidebar_first',
          'weight' => '-73',
        ),
        'facetapi-8Zf6ku0b6QwwiVDpgVqsDtviyFbOYIRk' => array(
          'module' => 'facetapi',
          'delta' => '8Zf6ku0b6QwwiVDpgVqsDtviyFbOYIRk',
          'region' => 'sidebar_first',
          'weight' => '-72',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Access Application');
  $export['acc_applications'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'acc_applications_graphs';
  $context->description = '';
  $context->tag = 'Access Application';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'acc_applications:graphs' => 'acc_applications:graphs',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-acc_application_reports-block_1' => array(
          'module' => 'views',
          'delta' => 'acc_application_reports-block_1',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-acc_application_reports-block_2' => array(
          'module' => 'views',
          'delta' => 'acc_application_reports-block_2',
          'region' => 'content',
          'weight' => '-9',
        ),
        'views-acc_application_reports-block_9' => array(
          'module' => 'views',
          'delta' => 'acc_application_reports-block_9',
          'region' => 'content',
          'weight' => '-8',
        ),
        'views-acc_application_reports-block_3' => array(
          'module' => 'views',
          'delta' => 'acc_application_reports-block_3',
          'region' => 'content',
          'weight' => '-6',
        ),
        'views-acc_application_reports-block_4' => array(
          'module' => 'views',
          'delta' => 'acc_application_reports-block_4',
          'region' => 'content',
          'weight' => '-5',
        ),
        'views-acc_application_reports-block_5' => array(
          'module' => 'views',
          'delta' => 'acc_application_reports-block_5',
          'region' => 'content',
          'weight' => '-4',
        ),
        'views-acc_application_reports-block_6' => array(
          'module' => 'views',
          'delta' => 'acc_application_reports-block_6',
          'region' => 'content',
          'weight' => '-3',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Access Application');
  $export['acc_applications_graphs'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'acc_applications_impediments';
  $context->description = '';
  $context->tag = 'Access Application';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'acc_applications:page_1' => 'acc_applications:page_1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-acc_application_reports-block_8' => array(
          'module' => 'views',
          'delta' => 'acc_application_reports-block_8',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-587db23ba38b8ec0f358e1ccef1003ad' => array(
          'module' => 'views',
          'delta' => '587db23ba38b8ec0f358e1ccef1003ad',
          'region' => 'content',
          'weight' => '-9',
        ),
        'views-30d224cfc0570d45e33328f5ce42ad4b' => array(
          'module' => 'views',
          'delta' => '30d224cfc0570d45e33328f5ce42ad4b',
          'region' => 'content',
          'weight' => '-8',
        ),
        'views-046112a3e8ac4bcc09fcef99d308a85a' => array(
          'module' => 'views',
          'delta' => '046112a3e8ac4bcc09fcef99d308a85a',
          'region' => 'content',
          'weight' => '-7',
        ),
        'views-0e57e7ce52025312c03903284967e777' => array(
          'module' => 'views',
          'delta' => '0e57e7ce52025312c03903284967e777',
          'region' => 'content',
          'weight' => '-6',
        ),
        'views-dd26038a785be9cc6aee11dbbb9e3815' => array(
          'module' => 'views',
          'delta' => 'dd26038a785be9cc6aee11dbbb9e3815',
          'region' => 'content',
          'weight' => '-5',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Access Application');
  $export['acc_applications_impediments'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'acc_applications_list';
  $context->description = '';
  $context->tag = 'Access Application';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'acc_applications:list' => 'acc_applications:list',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views--exp-acc_applications-list' => array(
          'module' => 'views',
          'delta' => '-exp-acc_applications-list',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Access Application');
  $export['acc_applications_list'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'acc_applications_map';
  $context->description = '';
  $context->tag = 'Access Application';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'acc_applications:map' => 'acc_applications:map',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views--exp-acc_applications-map' => array(
          'module' => 'views',
          'delta' => '-exp-acc_applications-map',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Access Application');
  $export['acc_applications_map'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'acc_applications_table';
  $context->description = '';
  $context->tag = 'Access Application';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'acc_applications:master' => 'acc_applications:master',
        'acc_applications:table' => 'acc_applications:table',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views--exp-acc_applications-table' => array(
          'module' => 'views',
          'delta' => '-exp-acc_applications-table',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Access Application');
  $export['acc_applications_table'] = $context;

  return $export;
}
