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
  $context->tag = 'Access Applications';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'acc_applications:map' => 'acc_applications:map',
        'acc_applications:master' => 'acc_applications:master',
        'acc_applications:table' => 'acc_applications:table',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'facetapi-gioQhr5C153EwAxJXT57YcCGm91eYjhW' => array(
          'module' => 'facetapi',
          'delta' => 'gioQhr5C153EwAxJXT57YcCGm91eYjhW',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'facetapi-mKYj0BXj2qODeSFz7lvPiWbdjjztAJAi' => array(
          'module' => 'facetapi',
          'delta' => 'mKYj0BXj2qODeSFz7lvPiWbdjjztAJAi',
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
        'facetapi-0RGeUKXAh1atSEXM4TwcHYPsu2vNN9ok' => array(
          'module' => 'facetapi',
          'delta' => '0RGeUKXAh1atSEXM4TwcHYPsu2vNN9ok',
          'region' => 'sidebar_first',
          'weight' => '-8',
        ),
        'facetapi-Ls6afGMH0R01rGRRgGnqAkVdBQbTWgdu' => array(
          'module' => 'facetapi',
          'delta' => 'Ls6afGMH0R01rGRRgGnqAkVdBQbTWgdu',
          'region' => 'sidebar_first',
          'weight' => '-7',
        ),
        'facetapi-WOroNYG7f27M75LcvlbBpdHFB12MJjdJ' => array(
          'module' => 'facetapi',
          'delta' => 'WOroNYG7f27M75LcvlbBpdHFB12MJjdJ',
          'region' => 'sidebar_first',
          'weight' => '-6',
        ),
        'facetapi-7XDUKZqqAVKTJ2AcsbJr17oUiWolKJmi' => array(
          'module' => 'facetapi',
          'delta' => '7XDUKZqqAVKTJ2AcsbJr17oUiWolKJmi',
          'region' => 'sidebar_first',
          'weight' => '-5',
        ),
        'facetapi-3fPwcvGi38npnKSY1i34LCkMPfzPqb6F' => array(
          'module' => 'facetapi',
          'delta' => '3fPwcvGi38npnKSY1i34LCkMPfzPqb6F',
          'region' => 'sidebar_first',
          'weight' => '-4',
        ),
        'facetapi-JG87XvVxcaadR6wkuTxcE2sBx4NFmkal' => array(
          'module' => 'facetapi',
          'delta' => 'JG87XvVxcaadR6wkuTxcE2sBx4NFmkal',
          'region' => 'sidebar_first',
          'weight' => '-3',
        ),
        'facetapi-8Zf6ku0b6QwwiVDpgVqsDtviyFbOYIRk' => array(
          'module' => 'facetapi',
          'delta' => '8Zf6ku0b6QwwiVDpgVqsDtviyFbOYIRk',
          'region' => 'sidebar_first',
          'weight' => '-2',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Access Applications');
  $export['acc_applications'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'acc_applications_imp_reports';
  $context->description = '';
  $context->tag = 'Access Applications';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'acc_applications:imp_reports' => 'acc_applications:imp_reports',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-acc_application_repots-block_7' => array(
          'module' => 'views',
          'delta' => 'acc_application_repots-block_7',
          'region' => 'content',
          'weight' => '0',
        ),
        'views-acc_application_repots-block_8' => array(
          'module' => 'views',
          'delta' => 'acc_application_repots-block_8',
          'region' => 'content',
          'weight' => '1',
        ),
        'views-acc_application_repots-block_10' => array(
          'module' => 'views',
          'delta' => 'acc_application_repots-block_10',
          'region' => 'content',
          'weight' => '2',
        ),
        'views-acc_application_repots-block_11' => array(
          'module' => 'views',
          'delta' => 'acc_application_repots-block_11',
          'region' => 'content',
          'weight' => '3',
        ),
        'views-acc_application_repots-block_12' => array(
          'module' => 'views',
          'delta' => 'acc_application_repots-block_12',
          'region' => 'content',
          'weight' => '4',
        ),
        'views-acc_application_repots-block_13' => array(
          'module' => 'views',
          'delta' => 'acc_application_repots-block_13',
          'region' => 'content',
          'weight' => '5',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Access Applications');
  $export['acc_applications_imp_reports'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'acc_applications_map';
  $context->description = '';
  $context->tag = 'Access Applications';
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
  t('Access Applications');
  $export['acc_applications_map'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'acc_applications_reports';
  $context->description = '';
  $context->tag = 'Access Applications';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'acc_applications:res_reports' => 'acc_applications:res_reports',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-acc_application_repots-block' => array(
          'module' => 'views',
          'delta' => 'acc_application_repots-block',
          'region' => 'content',
          'weight' => '0',
        ),
        'views-acc_application_repots-block_1' => array(
          'module' => 'views',
          'delta' => 'acc_application_repots-block_1',
          'region' => 'content',
          'weight' => '1',
        ),
        'views-acc_application_repots-block_2' => array(
          'module' => 'views',
          'delta' => 'acc_application_repots-block_2',
          'region' => 'content',
          'weight' => '2',
        ),
        'views-acc_application_repots-block_3' => array(
          'module' => 'views',
          'delta' => 'acc_application_repots-block_3',
          'region' => 'content',
          'weight' => '3',
        ),
        'views-acc_application_repots-block_4' => array(
          'module' => 'views',
          'delta' => 'acc_application_repots-block_4',
          'region' => 'content',
          'weight' => '4',
        ),
        'views-acc_application_repots-block_5' => array(
          'module' => 'views',
          'delta' => 'acc_application_repots-block_5',
          'region' => 'content',
          'weight' => '5',
        ),
        'views-acc_application_repots-block_6' => array(
          'module' => 'views',
          'delta' => 'acc_application_repots-block_6',
          'region' => 'content',
          'weight' => '6',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Access Applications');
  $export['acc_applications_reports'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'acc_applications_table';
  $context->description = '';
  $context->tag = 'Access Applications';
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
          'weight' => '-11',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Access Applications');
  $export['acc_applications_table'] = $context;

  return $export;
}
