<?php
/**
 * @file
 * acc_applications.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function acc_applications_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function acc_applications_node_info() {
  $items = array(
    'acc_application' => array(
      'name' => t('Access Applications'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
