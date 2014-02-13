<?php
/**
 * @file
 * acc_applications.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function acc_applications_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'acc_application_reports';
  $view->description = '';
  $view->tag = 'Humanitarian Access';
  $view->base_table = 'node';
  $view->human_name = 'Access Application Reports';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Access Application';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Relationship: Content: Application Types (field_acc_application_types) */
  $handler->display->display_options['relationships']['field_acc_application_types_tid']['id'] = 'field_acc_application_types_tid';
  $handler->display->display_options['relationships']['field_acc_application_types_tid']['table'] = 'field_data_field_acc_application_types';
  $handler->display->display_options['relationships']['field_acc_application_types_tid']['field'] = 'field_acc_application_types_tid';
  /* Relationship: Taxonomy term: Parent term */
  $handler->display->display_options['relationships']['parent']['id'] = 'parent';
  $handler->display->display_options['relationships']['parent']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['relationships']['parent']['field'] = 'parent';
  $handler->display->display_options['relationships']['parent']['relationship'] = 'field_acc_application_types_tid';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'acc_application' => 'acc_application',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Taxonomy term: Taxonomy term UUID */
  $handler->display->display_options['filters']['uuid']['id'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['uuid']['field'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['relationship'] = 'parent';
  $handler->display->display_options['filters']['uuid']['value'] = '799cb590-d94c-41bf-a731-d08bd12e2739';

  /* Display: Restrictions Page */
  $handler = $view->new_display('page', 'Restrictions Page', 'page');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Date  */
  $handler->display->display_options['fields']['field_date_app']['id'] = 'field_date_app';
  $handler->display->display_options['fields']['field_date_app']['table'] = 'field_data_field_date_app';
  $handler->display->display_options['fields']['field_date_app']['field'] = 'field_date_app';
  $handler->display->display_options['fields']['field_date_app']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Application Types */
  $handler->display->display_options['fields']['field_acc_application_types']['id'] = 'field_acc_application_types';
  $handler->display->display_options['fields']['field_acc_application_types']['table'] = 'field_data_field_acc_application_types';
  $handler->display->display_options['fields']['field_acc_application_types']['field'] = 'field_acc_application_types';
  $handler->display->display_options['fields']['field_acc_application_types']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Field: Organization */
  $handler->display->display_options['fields']['field_organizations']['id'] = 'field_organizations';
  $handler->display->display_options['fields']['field_organizations']['table'] = 'field_data_field_organizations';
  $handler->display->display_options['fields']['field_organizations']['field'] = 'field_organizations';
  $handler->display->display_options['fields']['field_organizations']['label'] = 'Submited By';
  $handler->display->display_options['fields']['field_organizations']['delta_offset'] = '0';
  /* Field: Content: Submitted To */
  $handler->display->display_options['fields']['field_submited_to']['id'] = 'field_submited_to';
  $handler->display->display_options['fields']['field_submited_to']['table'] = 'field_data_field_submited_to';
  $handler->display->display_options['fields']['field_submited_to']['field'] = 'field_submited_to';
  $handler->display->display_options['fields']['field_submited_to']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: If denied, by whom? */
  $handler->display->display_options['fields']['field_if_denied_app']['id'] = 'field_if_denied_app';
  $handler->display->display_options['fields']['field_if_denied_app']['table'] = 'field_data_field_if_denied_app';
  $handler->display->display_options['fields']['field_if_denied_app']['field'] = 'field_if_denied_app';
  $handler->display->display_options['fields']['field_if_denied_app']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['path'] = 'access/app_report';

  /* Display: By Status */
  $handler = $view->new_display('block', 'By Status', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Access Application By Status';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'visualization';
  $handler->display->display_options['style_options']['type'] = 'pie';
  $handler->display->display_options['style_options']['fields'] = array(
    'title' => array(
      'enabled' => 1,
      'sort' => '0',
    ),
    'field_acc_submission_status' => array(
      'enabled' => 0,
      'sort' => '0',
    ),
  );
  $handler->display->display_options['style_options']['yAxis'] = array(
    'title' => 'Number of Applications',
  );
  $handler->display->display_options['style_options']['xAxis'] = array(
    'labelField' => 'field_acc_submission_status',
    'invert' => 0,
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['group_type'] = 'count';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Submission Status */
  $handler->display->display_options['fields']['field_acc_submission_status']['id'] = 'field_acc_submission_status';
  $handler->display->display_options['fields']['field_acc_submission_status']['table'] = 'field_data_field_acc_submission_status';
  $handler->display->display_options['fields']['field_acc_submission_status']['field'] = 'field_acc_submission_status';
  $handler->display->display_options['fields']['field_acc_submission_status']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['block_description'] = 'Access Application By Status';

  /* Display: By Org Type and Status */
  $handler = $view->new_display('block', 'By Org Type and Status', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Access Application By Org Type and Status';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_pivot';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_acc_submission_status' => 'field_acc_submission_status',
    'nid' => 'nid',
    'field_organization_type' => 'field_organization_type',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_acc_submission_status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'pivot_row_extra' => 0,
    ),
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'pivot_row_extra' => 0,
    ),
    'field_organization_type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'pivot_row_extra' => 0,
    ),
  );
  $handler->display->display_options['style_options']['pivot_col'] = 'field_acc_submission_status';
  $handler->display->display_options['style_options']['pivot_row'] = 'field_organization_type';
  $handler->display->display_options['style_options']['pivot_mode_multi_values'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Application Types (field_acc_application_types) */
  $handler->display->display_options['relationships']['field_acc_application_types_tid']['id'] = 'field_acc_application_types_tid';
  $handler->display->display_options['relationships']['field_acc_application_types_tid']['table'] = 'field_data_field_acc_application_types';
  $handler->display->display_options['relationships']['field_acc_application_types_tid']['field'] = 'field_acc_application_types_tid';
  /* Relationship: Taxonomy term: Parent term */
  $handler->display->display_options['relationships']['parent']['id'] = 'parent';
  $handler->display->display_options['relationships']['parent']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['relationships']['parent']['field'] = 'parent';
  $handler->display->display_options['relationships']['parent']['relationship'] = 'field_acc_application_types_tid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Submission Status */
  $handler->display->display_options['fields']['field_acc_submission_status']['id'] = 'field_acc_submission_status';
  $handler->display->display_options['fields']['field_acc_submission_status']['table'] = 'field_data_field_acc_submission_status';
  $handler->display->display_options['fields']['field_acc_submission_status']['field'] = 'field_acc_submission_status';
  $handler->display->display_options['fields']['field_acc_submission_status']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Field: Type */
  $handler->display->display_options['fields']['field_organization_type']['id'] = 'field_organization_type';
  $handler->display->display_options['fields']['field_organization_type']['table'] = 'field_data_field_organization_type';
  $handler->display->display_options['fields']['field_organization_type']['field'] = 'field_organization_type';
  $handler->display->display_options['fields']['field_organization_type']['label'] = 'Organization Type';
  $handler->display->display_options['fields']['field_organization_type']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Field: Type (field_organization_type) */
  $handler->display->display_options['sorts']['field_organization_type_tid']['id'] = 'field_organization_type_tid';
  $handler->display->display_options['sorts']['field_organization_type_tid']['table'] = 'field_data_field_organization_type';
  $handler->display->display_options['sorts']['field_organization_type_tid']['field'] = 'field_organization_type_tid';
  $handler->display->display_options['block_description'] = 'Access Application By Org Type and Status';

  /* Display: By Sector And Status */
  $handler = $view->new_display('block', 'By Sector And Status', 'block_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Access Application By Sector And Status';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_pivot';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_clusters' => 'field_clusters',
    'nid' => 'nid',
    'field_acc_submission_status' => 'field_acc_submission_status',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_clusters' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
      'pivot_row_extra' => 0,
    ),
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'pivot_row_extra' => 0,
    ),
    'field_acc_submission_status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'pivot_row_extra' => 0,
    ),
  );
  $handler->display->display_options['style_options']['pivot_col'] = 'field_acc_submission_status';
  $handler->display->display_options['style_options']['pivot_row'] = 'field_clusters';
  $handler->display->display_options['style_options']['pivot_mode_multi_values'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Clusters */
  $handler->display->display_options['fields']['field_clusters']['id'] = 'field_clusters';
  $handler->display->display_options['fields']['field_clusters']['table'] = 'field_data_field_clusters';
  $handler->display->display_options['fields']['field_clusters']['field'] = 'field_clusters';
  $handler->display->display_options['fields']['field_clusters']['label'] = 'Sectors';
  $handler->display->display_options['fields']['field_clusters']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_clusters']['delta_offset'] = '0';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['separator'] = '';
  /* Field: Content: Submission Status */
  $handler->display->display_options['fields']['field_acc_submission_status']['id'] = 'field_acc_submission_status';
  $handler->display->display_options['fields']['field_acc_submission_status']['table'] = 'field_data_field_acc_submission_status';
  $handler->display->display_options['fields']['field_acc_submission_status']['field'] = 'field_acc_submission_status';
  $handler->display->display_options['fields']['field_acc_submission_status']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Field: Clusters (field_clusters) */
  $handler->display->display_options['sorts']['field_clusters_tid']['id'] = 'field_clusters_tid';
  $handler->display->display_options['sorts']['field_clusters_tid']['table'] = 'field_data_field_clusters';
  $handler->display->display_options['sorts']['field_clusters_tid']['field'] = 'field_clusters_tid';
  $handler->display->display_options['block_description'] = 'Access Application By Sector And Status';

  /* Display: Average number of days to get an answer */
  $handler = $view->new_display('block', 'Average number of days to get an answer', 'block_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Number of days to get an answer';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_how_many_days' => 'field_how_many_days',
    'field_submition_status' => 'field_submition_status',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_how_many_days' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_submition_status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Submission Status */
  $handler->display->display_options['fields']['field_acc_submission_status']['id'] = 'field_acc_submission_status';
  $handler->display->display_options['fields']['field_acc_submission_status']['table'] = 'field_data_field_acc_submission_status';
  $handler->display->display_options['fields']['field_acc_submission_status']['field'] = 'field_acc_submission_status';
  $handler->display->display_options['fields']['field_acc_submission_status']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: How many days to get an answer? */
  $handler->display->display_options['fields']['field_how_many_days']['id'] = 'field_how_many_days';
  $handler->display->display_options['fields']['field_how_many_days']['table'] = 'field_data_field_how_many_days';
  $handler->display->display_options['fields']['field_how_many_days']['field'] = 'field_how_many_days';
  $handler->display->display_options['fields']['field_how_many_days']['group_type'] = 'avg';
  $handler->display->display_options['fields']['field_how_many_days']['label'] = 'Avg number of days to get an answer';
  $handler->display->display_options['fields']['field_how_many_days']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_how_many_days']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: How many days to get an answer? */
  $handler->display->display_options['fields']['field_how_many_days_1']['id'] = 'field_how_many_days_1';
  $handler->display->display_options['fields']['field_how_many_days_1']['table'] = 'field_data_field_how_many_days';
  $handler->display->display_options['fields']['field_how_many_days_1']['field'] = 'field_how_many_days';
  $handler->display->display_options['fields']['field_how_many_days_1']['group_type'] = 'max';
  $handler->display->display_options['fields']['field_how_many_days_1']['label'] = 'Maximum number of days to get an answer';
  $handler->display->display_options['fields']['field_how_many_days_1']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: How many days to get an answer? */
  $handler->display->display_options['fields']['field_how_many_days_2']['id'] = 'field_how_many_days_2';
  $handler->display->display_options['fields']['field_how_many_days_2']['table'] = 'field_data_field_how_many_days';
  $handler->display->display_options['fields']['field_how_many_days_2']['field'] = 'field_how_many_days';
  $handler->display->display_options['fields']['field_how_many_days_2']['group_type'] = 'min';
  $handler->display->display_options['fields']['field_how_many_days_2']['label'] = 'Minimum number of days to get an answer';
  $handler->display->display_options['fields']['field_how_many_days_2']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['block_description'] = 'Average number of days to get an answer';

  /* Display: Days to get an ans by org type */
  $handler = $view->new_display('block', 'Days to get an ans by org type', 'block_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Average number of to get an answer by organization type';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_pivot';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_how_many_days' => 'field_how_many_days',
    'field_acc_submission_status' => 'field_acc_submission_status',
    'field_organization_type' => 'field_organization_type',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_how_many_days' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'pivot_row_extra' => 0,
    ),
    'field_acc_submission_status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'pivot_row_extra' => 0,
    ),
    'field_organization_type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'pivot_row_extra' => 0,
    ),
  );
  $handler->display->display_options['style_options']['pivot_col'] = 'field_acc_submission_status';
  $handler->display->display_options['style_options']['pivot_row'] = 'field_organization_type';
  $handler->display->display_options['style_options']['pivot_mode_multi_values'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Application Types (field_acc_application_types) */
  $handler->display->display_options['relationships']['field_acc_application_types_tid']['id'] = 'field_acc_application_types_tid';
  $handler->display->display_options['relationships']['field_acc_application_types_tid']['table'] = 'field_data_field_acc_application_types';
  $handler->display->display_options['relationships']['field_acc_application_types_tid']['field'] = 'field_acc_application_types_tid';
  /* Relationship: Taxonomy term: Parent term */
  $handler->display->display_options['relationships']['parent']['id'] = 'parent';
  $handler->display->display_options['relationships']['parent']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['relationships']['parent']['field'] = 'parent';
  $handler->display->display_options['relationships']['parent']['relationship'] = 'field_acc_application_types_tid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: How many days to get an answer? */
  $handler->display->display_options['fields']['field_how_many_days']['id'] = 'field_how_many_days';
  $handler->display->display_options['fields']['field_how_many_days']['table'] = 'field_data_field_how_many_days';
  $handler->display->display_options['fields']['field_how_many_days']['field'] = 'field_how_many_days';
  $handler->display->display_options['fields']['field_how_many_days']['group_type'] = 'avg';
  $handler->display->display_options['fields']['field_how_many_days']['label'] = '';
  $handler->display->display_options['fields']['field_how_many_days']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_how_many_days']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Submission Status */
  $handler->display->display_options['fields']['field_acc_submission_status']['id'] = 'field_acc_submission_status';
  $handler->display->display_options['fields']['field_acc_submission_status']['table'] = 'field_data_field_acc_submission_status';
  $handler->display->display_options['fields']['field_acc_submission_status']['field'] = 'field_acc_submission_status';
  $handler->display->display_options['fields']['field_acc_submission_status']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Field: Type */
  $handler->display->display_options['fields']['field_organization_type']['id'] = 'field_organization_type';
  $handler->display->display_options['fields']['field_organization_type']['table'] = 'field_data_field_organization_type';
  $handler->display->display_options['fields']['field_organization_type']['field'] = 'field_organization_type';
  $handler->display->display_options['fields']['field_organization_type']['label'] = 'Organization Type';
  $handler->display->display_options['fields']['field_organization_type']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['block_description'] = 'Average number of days to get an answer by organization type ';

  /* Display: Average days by sectors */
  $handler = $view->new_display('block', 'Average days by sectors', 'block_6');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Average number of days to get an answer by sectors';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_pivot';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_how_many_days' => 'field_how_many_days',
    'field_clusters' => 'field_clusters',
    'field_acc_submission_status' => 'field_acc_submission_status',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_how_many_days' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'pivot_row_extra' => 0,
    ),
    'field_clusters' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'pivot_row_extra' => 0,
    ),
    'field_acc_submission_status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'pivot_row_extra' => 0,
    ),
  );
  $handler->display->display_options['style_options']['pivot_col'] = 'field_acc_submission_status';
  $handler->display->display_options['style_options']['pivot_row'] = 'field_clusters';
  $handler->display->display_options['style_options']['pivot_mode_multi_values'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: How many days to get an answer? */
  $handler->display->display_options['fields']['field_how_many_days']['id'] = 'field_how_many_days';
  $handler->display->display_options['fields']['field_how_many_days']['table'] = 'field_data_field_how_many_days';
  $handler->display->display_options['fields']['field_how_many_days']['field'] = 'field_how_many_days';
  $handler->display->display_options['fields']['field_how_many_days']['group_type'] = 'avg';
  $handler->display->display_options['fields']['field_how_many_days']['label'] = '';
  $handler->display->display_options['fields']['field_how_many_days']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_how_many_days']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Field: Clusters */
  $handler->display->display_options['fields']['field_clusters']['id'] = 'field_clusters';
  $handler->display->display_options['fields']['field_clusters']['table'] = 'field_data_field_clusters';
  $handler->display->display_options['fields']['field_clusters']['field'] = 'field_clusters';
  $handler->display->display_options['fields']['field_clusters']['label'] = 'Sectors';
  $handler->display->display_options['fields']['field_clusters']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_clusters']['delta_offset'] = '0';
  /* Field: Content: Submission Status */
  $handler->display->display_options['fields']['field_acc_submission_status']['id'] = 'field_acc_submission_status';
  $handler->display->display_options['fields']['field_acc_submission_status']['table'] = 'field_data_field_acc_submission_status';
  $handler->display->display_options['fields']['field_acc_submission_status']['field'] = 'field_acc_submission_status';
  $handler->display->display_options['fields']['field_acc_submission_status']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Field: Clusters (field_clusters) */
  $handler->display->display_options['sorts']['field_clusters_tid']['id'] = 'field_clusters_tid';
  $handler->display->display_options['sorts']['field_clusters_tid']['table'] = 'field_data_field_clusters';
  $handler->display->display_options['sorts']['field_clusters_tid']['field'] = 'field_clusters_tid';
  $handler->display->display_options['block_description'] = 'Average number of days to get an answer by sectors';

  /* Display: By Location and Status */
  $handler = $view->new_display('block', 'By Location and Status', 'block_7');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Access Application By Location and Status';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_pivot';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_geographical_location_dest' => 'field_geographical_location_dest',
    'nid' => 'nid',
    'field_acc_submission_status' => 'field_acc_submission_status',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_geographical_location_dest' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'pivot_row_extra' => 0,
    ),
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'pivot_row_extra' => 0,
    ),
    'field_acc_submission_status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'pivot_row_extra' => 0,
    ),
  );
  $handler->display->display_options['style_options']['pivot_col'] = 'field_acc_submission_status';
  $handler->display->display_options['style_options']['pivot_row'] = 'field_geographical_location_dest';
  $handler->display->display_options['style_options']['pivot_mode_multi_values'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Geographical Location (Destination) */
  $handler->display->display_options['fields']['field_geographical_location_dest']['id'] = 'field_geographical_location_dest';
  $handler->display->display_options['fields']['field_geographical_location_dest']['table'] = 'field_data_field_geographical_location_dest';
  $handler->display->display_options['fields']['field_geographical_location_dest']['field'] = 'field_geographical_location_dest';
  $handler->display->display_options['fields']['field_geographical_location_dest']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Submission Status */
  $handler->display->display_options['fields']['field_acc_submission_status']['id'] = 'field_acc_submission_status';
  $handler->display->display_options['fields']['field_acc_submission_status']['table'] = 'field_data_field_acc_submission_status';
  $handler->display->display_options['fields']['field_acc_submission_status']['field'] = 'field_acc_submission_status';
  $handler->display->display_options['fields']['field_acc_submission_status']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Geographical Location (Destination) (field_geographical_location_dest) */
  $handler->display->display_options['sorts']['field_geographical_location_dest_tid']['id'] = 'field_geographical_location_dest_tid';
  $handler->display->display_options['sorts']['field_geographical_location_dest_tid']['table'] = 'field_data_field_geographical_location_dest';
  $handler->display->display_options['sorts']['field_geographical_location_dest_tid']['field'] = 'field_geographical_location_dest_tid';
  $handler->display->display_options['block_description'] = 'Access Application By Location and Status';

  /* Display: By District and Status */
  $handler = $view->new_display('block', 'By District and Status', 'block_9');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Access Application By District and Status';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_pivot';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'name' => 'name',
    'field_acc_submission_status' => 'field_acc_submission_status',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'pivot_row_extra' => 0,
    ),
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'pivot_row_extra' => 0,
    ),
    'field_acc_submission_status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'pivot_row_extra' => 0,
    ),
  );
  $handler->display->display_options['style_options']['pivot_col'] = 'field_acc_submission_status';
  $handler->display->display_options['style_options']['pivot_row'] = 'name';
  $handler->display->display_options['style_options']['pivot_mode_multi_values'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Geographical Location (Destination) (field_geographical_location_dest) */
  $handler->display->display_options['relationships']['field_geographical_location_dest_tid']['id'] = 'field_geographical_location_dest_tid';
  $handler->display->display_options['relationships']['field_geographical_location_dest_tid']['table'] = 'field_data_field_geographical_location_dest';
  $handler->display->display_options['relationships']['field_geographical_location_dest_tid']['field'] = 'field_geographical_location_dest_tid';
  /* Relationship: Taxonomy term: Parent term */
  $handler->display->display_options['relationships']['parent']['id'] = 'parent';
  $handler->display->display_options['relationships']['parent']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['relationships']['parent']['field'] = 'parent';
  $handler->display->display_options['relationships']['parent']['relationship'] = 'field_geographical_location_dest_tid';
  /* Relationship: Content: Application Types (field_acc_application_types) */
  $handler->display->display_options['relationships']['field_acc_application_types_tid']['id'] = 'field_acc_application_types_tid';
  $handler->display->display_options['relationships']['field_acc_application_types_tid']['table'] = 'field_data_field_acc_application_types';
  $handler->display->display_options['relationships']['field_acc_application_types_tid']['field'] = 'field_acc_application_types_tid';
  /* Relationship: Taxonomy term: Parent term */
  $handler->display->display_options['relationships']['parent_1']['id'] = 'parent_1';
  $handler->display->display_options['relationships']['parent_1']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['relationships']['parent_1']['field'] = 'parent';
  $handler->display->display_options['relationships']['parent_1']['relationship'] = 'field_acc_application_types_tid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'parent';
  $handler->display->display_options['fields']['name']['label'] = 'District';
  /* Field: Content: Submission Status */
  $handler->display->display_options['fields']['field_acc_submission_status']['id'] = 'field_acc_submission_status';
  $handler->display->display_options['fields']['field_acc_submission_status']['table'] = 'field_data_field_acc_submission_status';
  $handler->display->display_options['fields']['field_acc_submission_status']['field'] = 'field_acc_submission_status';
  $handler->display->display_options['fields']['field_acc_submission_status']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Taxonomy term: Name */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  $handler->display->display_options['sorts']['name']['relationship'] = 'parent';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'acc_application' => 'acc_application',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Taxonomy term: Taxonomy term UUID */
  $handler->display->display_options['filters']['uuid']['id'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['uuid']['field'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['relationship'] = 'parent_1';
  $handler->display->display_options['filters']['uuid']['value'] = '799cb590-d94c-41bf-a731-d08bd12e2739';
  $handler->display->display_options['block_description'] = 'Access Application By District and Status';

  /* Display: XLS By Status */
  $handler = $view->new_display('views_data_export', 'XLS By Status', 'views_data_export_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'XLS By Status';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xls';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Submission Status */
  $handler->display->display_options['fields']['field_acc_submission_status']['id'] = 'field_acc_submission_status';
  $handler->display->display_options['fields']['field_acc_submission_status']['table'] = 'field_data_field_acc_submission_status';
  $handler->display->display_options['fields']['field_acc_submission_status']['field'] = 'field_acc_submission_status';
  $handler->display->display_options['fields']['field_acc_submission_status']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count';
  $handler->display->display_options['fields']['nid']['label'] = 'Number of Applications';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Nid */
  $handler->display->display_options['sorts']['nid']['id'] = 'nid';
  $handler->display->display_options['sorts']['nid']['table'] = 'node';
  $handler->display->display_options['sorts']['nid']['field'] = 'nid';
  $handler->display->display_options['sorts']['nid']['group_type'] = 'count';
  $handler->display->display_options['sorts']['nid']['order'] = 'DESC';
  $handler->display->display_options['path'] = 'access/by_status.xls';
  $handler->display->display_options['displays'] = array(
    'block_1' => 'block_1',
    'default' => 0,
    'page' => 0,
    'block_2' => 0,
    'block_3' => 0,
    'block_4' => 0,
    'block_5' => 0,
    'block_6' => 0,
    'block_7' => 0,
    'block_9' => 0,
  );
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: Impediments Page */
  $handler = $view->new_display('page', 'Impediments Page', 'page_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Date  */
  $handler->display->display_options['fields']['field_date_app']['id'] = 'field_date_app';
  $handler->display->display_options['fields']['field_date_app']['table'] = 'field_data_field_date_app';
  $handler->display->display_options['fields']['field_date_app']['field'] = 'field_date_app';
  $handler->display->display_options['fields']['field_date_app']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Application Types */
  $handler->display->display_options['fields']['field_acc_application_types']['id'] = 'field_acc_application_types';
  $handler->display->display_options['fields']['field_acc_application_types']['table'] = 'field_data_field_acc_application_types';
  $handler->display->display_options['fields']['field_acc_application_types']['field'] = 'field_acc_application_types';
  $handler->display->display_options['fields']['field_acc_application_types']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Field: Organization */
  $handler->display->display_options['fields']['field_organizations']['id'] = 'field_organizations';
  $handler->display->display_options['fields']['field_organizations']['table'] = 'field_data_field_organizations';
  $handler->display->display_options['fields']['field_organizations']['field'] = 'field_organizations';
  $handler->display->display_options['fields']['field_organizations']['label'] = 'Submited By';
  $handler->display->display_options['fields']['field_organizations']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_organizations']['delta_offset'] = '0';
  /* Field: Content: Submitted To */
  $handler->display->display_options['fields']['field_submited_to']['id'] = 'field_submited_to';
  $handler->display->display_options['fields']['field_submited_to']['table'] = 'field_data_field_submited_to';
  $handler->display->display_options['fields']['field_submited_to']['field'] = 'field_submited_to';
  $handler->display->display_options['fields']['field_submited_to']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: If denied, by whom? */
  $handler->display->display_options['fields']['field_if_denied_app']['id'] = 'field_if_denied_app';
  $handler->display->display_options['fields']['field_if_denied_app']['table'] = 'field_data_field_if_denied_app';
  $handler->display->display_options['fields']['field_if_denied_app']['field'] = 'field_if_denied_app';
  $handler->display->display_options['fields']['field_if_denied_app']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'acc_application' => 'acc_application',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Taxonomy term: Taxonomy term UUID */
  $handler->display->display_options['filters']['uuid']['id'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['uuid']['field'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['relationship'] = 'parent';
  $handler->display->display_options['filters']['uuid']['value'] = 'd5c625ab-7f08-4b93-abd3-e1944acf5cf1';
  $handler->display->display_options['path'] = 'access/app_report';

  /* Display: Impediments By Status */
  $handler = $view->new_display('block', 'Impediments By Status', 'block_8');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Access Application By Status';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'visualization';
  $handler->display->display_options['style_options']['type'] = 'pie';
  $handler->display->display_options['style_options']['fields'] = array(
    'title' => array(
      'enabled' => 1,
      'sort' => '0',
    ),
    'field_acc_submission_status' => array(
      'enabled' => 0,
      'sort' => '0',
    ),
  );
  $handler->display->display_options['style_options']['yAxis'] = array(
    'title' => 'Number of Applications',
  );
  $handler->display->display_options['style_options']['xAxis'] = array(
    'labelField' => 'field_acc_submission_status',
    'invert' => 0,
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['group_type'] = 'count';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Submission Status */
  $handler->display->display_options['fields']['field_acc_submission_status']['id'] = 'field_acc_submission_status';
  $handler->display->display_options['fields']['field_acc_submission_status']['table'] = 'field_data_field_acc_submission_status';
  $handler->display->display_options['fields']['field_acc_submission_status']['field'] = 'field_acc_submission_status';
  $handler->display->display_options['fields']['field_acc_submission_status']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'acc_application' => 'acc_application',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Taxonomy term: Taxonomy term UUID */
  $handler->display->display_options['filters']['uuid']['id'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['uuid']['field'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['relationship'] = 'parent';
  $handler->display->display_options['filters']['uuid']['value'] = 'd5c625ab-7f08-4b93-abd3-e1944acf5cf1';
  $handler->display->display_options['block_description'] = 'Impediments By Status';

  /* Display: Impediments By Org Type and Status */
  $handler = $view->new_display('block', 'Impediments By Org Type and Status', 'block_10');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Access Application By Org Type and Status';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_pivot';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_acc_submission_status' => 'field_acc_submission_status',
    'nid' => 'nid',
    'field_organization_type' => 'field_organization_type',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_acc_submission_status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'pivot_row_extra' => 0,
    ),
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'pivot_row_extra' => 0,
    ),
    'field_organization_type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'pivot_row_extra' => 0,
    ),
  );
  $handler->display->display_options['style_options']['pivot_col'] = 'field_acc_submission_status';
  $handler->display->display_options['style_options']['pivot_row'] = 'field_organization_type';
  $handler->display->display_options['style_options']['pivot_mode_multi_values'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Application Types (field_acc_application_types) */
  $handler->display->display_options['relationships']['field_acc_application_types_tid']['id'] = 'field_acc_application_types_tid';
  $handler->display->display_options['relationships']['field_acc_application_types_tid']['table'] = 'field_data_field_acc_application_types';
  $handler->display->display_options['relationships']['field_acc_application_types_tid']['field'] = 'field_acc_application_types_tid';
  /* Relationship: Taxonomy term: Parent term */
  $handler->display->display_options['relationships']['parent']['id'] = 'parent';
  $handler->display->display_options['relationships']['parent']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['relationships']['parent']['field'] = 'parent';
  $handler->display->display_options['relationships']['parent']['relationship'] = 'field_acc_application_types_tid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Submission Status */
  $handler->display->display_options['fields']['field_acc_submission_status']['id'] = 'field_acc_submission_status';
  $handler->display->display_options['fields']['field_acc_submission_status']['table'] = 'field_data_field_acc_submission_status';
  $handler->display->display_options['fields']['field_acc_submission_status']['field'] = 'field_acc_submission_status';
  $handler->display->display_options['fields']['field_acc_submission_status']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Field: Type */
  $handler->display->display_options['fields']['field_organization_type']['id'] = 'field_organization_type';
  $handler->display->display_options['fields']['field_organization_type']['table'] = 'field_data_field_organization_type';
  $handler->display->display_options['fields']['field_organization_type']['field'] = 'field_organization_type';
  $handler->display->display_options['fields']['field_organization_type']['label'] = 'Organization Type';
  $handler->display->display_options['fields']['field_organization_type']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Field: Type (field_organization_type) */
  $handler->display->display_options['sorts']['field_organization_type_tid']['id'] = 'field_organization_type_tid';
  $handler->display->display_options['sorts']['field_organization_type_tid']['table'] = 'field_data_field_organization_type';
  $handler->display->display_options['sorts']['field_organization_type_tid']['field'] = 'field_organization_type_tid';
  $handler->display->display_options['sorts']['field_organization_type_tid']['relationship'] = 'field_organizations_tid';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'acc_application' => 'acc_application',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Taxonomy term: Taxonomy term UUID */
  $handler->display->display_options['filters']['uuid']['id'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['uuid']['field'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['relationship'] = 'parent';
  $handler->display->display_options['filters']['uuid']['value'] = 'd5c625ab-7f08-4b93-abd3-e1944acf5cf1';
  $handler->display->display_options['block_description'] = 'Impediments By Org Type and Status';

  /* Display: Impediments By Sector And Status */
  $handler = $view->new_display('block', 'Impediments By Sector And Status', 'block_11');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Access Application By Sector And Status';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_pivot';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_clusters' => 'field_clusters',
    'nid' => 'nid',
    'field_acc_submission_status' => 'field_acc_submission_status',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_clusters' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
      'pivot_row_extra' => 0,
    ),
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'pivot_row_extra' => 0,
    ),
    'field_acc_submission_status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'pivot_row_extra' => 0,
    ),
  );
  $handler->display->display_options['style_options']['pivot_col'] = 'field_acc_submission_status';
  $handler->display->display_options['style_options']['pivot_row'] = 'field_clusters';
  $handler->display->display_options['style_options']['pivot_mode_multi_values'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Clusters */
  $handler->display->display_options['fields']['field_clusters']['id'] = 'field_clusters';
  $handler->display->display_options['fields']['field_clusters']['table'] = 'field_data_field_clusters';
  $handler->display->display_options['fields']['field_clusters']['field'] = 'field_clusters';
  $handler->display->display_options['fields']['field_clusters']['label'] = 'Sectors';
  $handler->display->display_options['fields']['field_clusters']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_clusters']['delta_offset'] = '0';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['separator'] = '';
  /* Field: Content: Submission Status */
  $handler->display->display_options['fields']['field_acc_submission_status']['id'] = 'field_acc_submission_status';
  $handler->display->display_options['fields']['field_acc_submission_status']['table'] = 'field_data_field_acc_submission_status';
  $handler->display->display_options['fields']['field_acc_submission_status']['field'] = 'field_acc_submission_status';
  $handler->display->display_options['fields']['field_acc_submission_status']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Field: Clusters (field_clusters) */
  $handler->display->display_options['sorts']['field_clusters_tid']['id'] = 'field_clusters_tid';
  $handler->display->display_options['sorts']['field_clusters_tid']['table'] = 'field_data_field_clusters';
  $handler->display->display_options['sorts']['field_clusters_tid']['field'] = 'field_clusters_tid';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'acc_application' => 'acc_application',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Taxonomy term: Taxonomy term UUID */
  $handler->display->display_options['filters']['uuid']['id'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['uuid']['field'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['relationship'] = 'parent';
  $handler->display->display_options['filters']['uuid']['value'] = 'd5c625ab-7f08-4b93-abd3-e1944acf5cf1';
  $handler->display->display_options['block_description'] = 'Impediments By Sector And Status';

  /* Display: Impediments Average number of days to get an answer */
  $handler = $view->new_display('block', 'Impediments Average number of days to get an answer', 'block_12');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Number of days to get an answer';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_how_many_days' => 'field_how_many_days',
    'field_submition_status' => 'field_submition_status',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_how_many_days' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_submition_status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Submission Status */
  $handler->display->display_options['fields']['field_acc_submission_status']['id'] = 'field_acc_submission_status';
  $handler->display->display_options['fields']['field_acc_submission_status']['table'] = 'field_data_field_acc_submission_status';
  $handler->display->display_options['fields']['field_acc_submission_status']['field'] = 'field_acc_submission_status';
  $handler->display->display_options['fields']['field_acc_submission_status']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: How many days to get an answer? */
  $handler->display->display_options['fields']['field_how_many_days']['id'] = 'field_how_many_days';
  $handler->display->display_options['fields']['field_how_many_days']['table'] = 'field_data_field_how_many_days';
  $handler->display->display_options['fields']['field_how_many_days']['field'] = 'field_how_many_days';
  $handler->display->display_options['fields']['field_how_many_days']['group_type'] = 'avg';
  $handler->display->display_options['fields']['field_how_many_days']['label'] = 'Avg number of days to get an answer';
  $handler->display->display_options['fields']['field_how_many_days']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_how_many_days']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: How many days to get an answer? */
  $handler->display->display_options['fields']['field_how_many_days_1']['id'] = 'field_how_many_days_1';
  $handler->display->display_options['fields']['field_how_many_days_1']['table'] = 'field_data_field_how_many_days';
  $handler->display->display_options['fields']['field_how_many_days_1']['field'] = 'field_how_many_days';
  $handler->display->display_options['fields']['field_how_many_days_1']['group_type'] = 'max';
  $handler->display->display_options['fields']['field_how_many_days_1']['label'] = 'Maximum number of days to get an answer';
  $handler->display->display_options['fields']['field_how_many_days_1']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: How many days to get an answer? */
  $handler->display->display_options['fields']['field_how_many_days_2']['id'] = 'field_how_many_days_2';
  $handler->display->display_options['fields']['field_how_many_days_2']['table'] = 'field_data_field_how_many_days';
  $handler->display->display_options['fields']['field_how_many_days_2']['field'] = 'field_how_many_days';
  $handler->display->display_options['fields']['field_how_many_days_2']['group_type'] = 'min';
  $handler->display->display_options['fields']['field_how_many_days_2']['label'] = 'Minimum number of days to get an answer';
  $handler->display->display_options['fields']['field_how_many_days_2']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'acc_application' => 'acc_application',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Taxonomy term: Taxonomy term UUID */
  $handler->display->display_options['filters']['uuid']['id'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['uuid']['field'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['relationship'] = 'parent';
  $handler->display->display_options['filters']['uuid']['value'] = 'd5c625ab-7f08-4b93-abd3-e1944acf5cf1';
  $handler->display->display_options['block_description'] = 'Impediments Average number of days to get an answer';

  /* Display: Impediments Days to get an ans by org type */
  $handler = $view->new_display('block', 'Impediments Days to get an ans by org type', 'block_13');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Average number of to get an answer by organization type';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_pivot';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_how_many_days' => 'field_how_many_days',
    'field_acc_submission_status' => 'field_acc_submission_status',
    'field_organization_type' => 'field_organization_type',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_how_many_days' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'pivot_row_extra' => 0,
    ),
    'field_acc_submission_status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'pivot_row_extra' => 0,
    ),
    'field_organization_type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'pivot_row_extra' => 0,
    ),
  );
  $handler->display->display_options['style_options']['pivot_col'] = 'field_acc_submission_status';
  $handler->display->display_options['style_options']['pivot_row'] = 'field_organization_type';
  $handler->display->display_options['style_options']['pivot_mode_multi_values'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Application Types (field_acc_application_types) */
  $handler->display->display_options['relationships']['field_acc_application_types_tid']['id'] = 'field_acc_application_types_tid';
  $handler->display->display_options['relationships']['field_acc_application_types_tid']['table'] = 'field_data_field_acc_application_types';
  $handler->display->display_options['relationships']['field_acc_application_types_tid']['field'] = 'field_acc_application_types_tid';
  /* Relationship: Taxonomy term: Parent term */
  $handler->display->display_options['relationships']['parent']['id'] = 'parent';
  $handler->display->display_options['relationships']['parent']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['relationships']['parent']['field'] = 'parent';
  $handler->display->display_options['relationships']['parent']['relationship'] = 'field_acc_application_types_tid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: How many days to get an answer? */
  $handler->display->display_options['fields']['field_how_many_days']['id'] = 'field_how_many_days';
  $handler->display->display_options['fields']['field_how_many_days']['table'] = 'field_data_field_how_many_days';
  $handler->display->display_options['fields']['field_how_many_days']['field'] = 'field_how_many_days';
  $handler->display->display_options['fields']['field_how_many_days']['group_type'] = 'avg';
  $handler->display->display_options['fields']['field_how_many_days']['label'] = '';
  $handler->display->display_options['fields']['field_how_many_days']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_how_many_days']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Submission Status */
  $handler->display->display_options['fields']['field_acc_submission_status']['id'] = 'field_acc_submission_status';
  $handler->display->display_options['fields']['field_acc_submission_status']['table'] = 'field_data_field_acc_submission_status';
  $handler->display->display_options['fields']['field_acc_submission_status']['field'] = 'field_acc_submission_status';
  $handler->display->display_options['fields']['field_acc_submission_status']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Field: Type */
  $handler->display->display_options['fields']['field_organization_type']['id'] = 'field_organization_type';
  $handler->display->display_options['fields']['field_organization_type']['table'] = 'field_data_field_organization_type';
  $handler->display->display_options['fields']['field_organization_type']['field'] = 'field_organization_type';
  $handler->display->display_options['fields']['field_organization_type']['label'] = 'Organization Type';
  $handler->display->display_options['fields']['field_organization_type']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'acc_application' => 'acc_application',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Taxonomy term: Taxonomy term UUID */
  $handler->display->display_options['filters']['uuid']['id'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['uuid']['field'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['relationship'] = 'parent';
  $handler->display->display_options['filters']['uuid']['value'] = 'd5c625ab-7f08-4b93-abd3-e1944acf5cf1';
  $handler->display->display_options['block_description'] = 'Impediments Average number of days to get an answer by organization type ';

  /* Display: Impediments Average days by sectors */
  $handler = $view->new_display('block', 'Impediments Average days by sectors', 'block_14');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Average number of days to get an answer by sectors';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_pivot';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_how_many_days' => 'field_how_many_days',
    'field_clusters' => 'field_clusters',
    'field_acc_submission_status' => 'field_acc_submission_status',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_how_many_days' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'pivot_row_extra' => 0,
    ),
    'field_clusters' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'pivot_row_extra' => 0,
    ),
    'field_acc_submission_status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'pivot_row_extra' => 0,
    ),
  );
  $handler->display->display_options['style_options']['pivot_col'] = 'field_acc_submission_status';
  $handler->display->display_options['style_options']['pivot_row'] = 'field_clusters';
  $handler->display->display_options['style_options']['pivot_mode_multi_values'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: How many days to get an answer? */
  $handler->display->display_options['fields']['field_how_many_days']['id'] = 'field_how_many_days';
  $handler->display->display_options['fields']['field_how_many_days']['table'] = 'field_data_field_how_many_days';
  $handler->display->display_options['fields']['field_how_many_days']['field'] = 'field_how_many_days';
  $handler->display->display_options['fields']['field_how_many_days']['group_type'] = 'avg';
  $handler->display->display_options['fields']['field_how_many_days']['label'] = '';
  $handler->display->display_options['fields']['field_how_many_days']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_how_many_days']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Field: Clusters */
  $handler->display->display_options['fields']['field_clusters']['id'] = 'field_clusters';
  $handler->display->display_options['fields']['field_clusters']['table'] = 'field_data_field_clusters';
  $handler->display->display_options['fields']['field_clusters']['field'] = 'field_clusters';
  $handler->display->display_options['fields']['field_clusters']['label'] = 'Sectors';
  $handler->display->display_options['fields']['field_clusters']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_clusters']['delta_offset'] = '0';
  /* Field: Content: Submission Status */
  $handler->display->display_options['fields']['field_acc_submission_status']['id'] = 'field_acc_submission_status';
  $handler->display->display_options['fields']['field_acc_submission_status']['table'] = 'field_data_field_acc_submission_status';
  $handler->display->display_options['fields']['field_acc_submission_status']['field'] = 'field_acc_submission_status';
  $handler->display->display_options['fields']['field_acc_submission_status']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Field: Clusters (field_clusters) */
  $handler->display->display_options['sorts']['field_clusters_tid']['id'] = 'field_clusters_tid';
  $handler->display->display_options['sorts']['field_clusters_tid']['table'] = 'field_data_field_clusters';
  $handler->display->display_options['sorts']['field_clusters_tid']['field'] = 'field_clusters_tid';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'acc_application' => 'acc_application',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Taxonomy term: Taxonomy term UUID */
  $handler->display->display_options['filters']['uuid']['id'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['uuid']['field'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['relationship'] = 'parent';
  $handler->display->display_options['filters']['uuid']['value'] = 'd5c625ab-7f08-4b93-abd3-e1944acf5cf1';
  $handler->display->display_options['block_description'] = 'Impediments Average number of days to get an answer by sectors';

  /* Display: Impediments XLS By Status */
  $handler = $view->new_display('views_data_export', 'Impediments XLS By Status', 'views_data_export_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'XLS By Status';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xls';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Submission Status */
  $handler->display->display_options['fields']['field_acc_submission_status']['id'] = 'field_acc_submission_status';
  $handler->display->display_options['fields']['field_acc_submission_status']['table'] = 'field_data_field_acc_submission_status';
  $handler->display->display_options['fields']['field_acc_submission_status']['field'] = 'field_acc_submission_status';
  $handler->display->display_options['fields']['field_acc_submission_status']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count';
  $handler->display->display_options['fields']['nid']['label'] = 'Number of Applications';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Nid */
  $handler->display->display_options['sorts']['nid']['id'] = 'nid';
  $handler->display->display_options['sorts']['nid']['table'] = 'node';
  $handler->display->display_options['sorts']['nid']['field'] = 'nid';
  $handler->display->display_options['sorts']['nid']['group_type'] = 'count';
  $handler->display->display_options['sorts']['nid']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'acc_application' => 'acc_application',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Taxonomy term: Taxonomy term UUID */
  $handler->display->display_options['filters']['uuid']['id'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['uuid']['field'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['relationship'] = 'parent';
  $handler->display->display_options['filters']['uuid']['value'] = 'd5c625ab-7f08-4b93-abd3-e1944acf5cf1';
  $handler->display->display_options['path'] = 'access/by_status.xls';
  $handler->display->display_options['displays'] = array(
    'block_8' => 'block_8',
    'default' => 0,
    'page' => 0,
    'block_1' => 0,
    'block_2' => 0,
    'block_3' => 0,
    'block_4' => 0,
    'block_5' => 0,
    'block_6' => 0,
    'block_7' => 0,
    'block_9' => 0,
    'page_1' => 0,
    'block_10' => 0,
    'block_11' => 0,
    'block_12' => 0,
    'block_13' => 0,
    'block_14' => 0,
  );
  $handler->display->display_options['sitename_title'] = 0;
  $translatables['acc_application_reports'] = array(
    t('Master'),
    t('Access Application'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('term from field_acc_application_types'),
    t('Parent'),
    t('Restrictions Page'),
    t('Title'),
    t('Date '),
    t('Application Types'),
    t('Submited By'),
    t('Submitted To'),
    t('If denied, by whom?'),
    t('By Status'),
    t('Access Application By Status'),
    t('Submission Status'),
    t('By Org Type and Status'),
    t('Access Application By Org Type and Status'),
    t('Organization Type'),
    t('By Sector And Status'),
    t('Access Application By Sector And Status'),
    t('Sectors'),
    t('Average number of days to get an answer'),
    t('Number of days to get an answer'),
    t('Avg number of days to get an answer'),
    t('Maximum number of days to get an answer'),
    t('Minimum number of days to get an answer'),
    t('Days to get an ans by org type'),
    t('Average number of to get an answer by organization type'),
    t('Average number of days to get an answer by organization type '),
    t('Average days by sectors'),
    t('Average number of days to get an answer by sectors'),
    t('By Location and Status'),
    t('Access Application By Location and Status'),
    t('Geographical Location (Destination)'),
    t('By District and Status'),
    t('Access Application By District and Status'),
    t('term from field_geographical_location_dest'),
    t('District'),
    t('XLS By Status'),
    t('Number of Applications'),
    t('Impediments Page'),
    t('Impediments By Status'),
    t('Impediments By Org Type and Status'),
    t('Impediments By Sector And Status'),
    t('Impediments Average number of days to get an answer'),
    t('Impediments Days to get an ans by org type'),
    t('Impediments Average number of days to get an answer by organization type '),
    t('Impediments Average days by sectors'),
    t('Impediments Average number of days to get an answer by sectors'),
    t('Impediments XLS By Status'),
  );
  $export['acc_application_reports'] = $view;

  $view = new view();
  $view->name = 'acc_applications';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_acc_applications';
  $view->human_name = 'Access Applications';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Access Applications';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    229782242 => '229782242',
    147444660 => '147444660',
    52310416 => '52310416',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'teaser';
  /* Field: Indexed Node: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_acc_applications';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Sort criterion: Indexed Node: Date created */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'search_api_index_acc_applications';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_acc_applications';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['label'] = 'Search';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    218860149 => 0,
    188284353 => 0,
    200153887 => 0,
    197637936 => 0,
    52310416 => 0,
    30037204 => 0,
    147444660 => 0,
    229782242 => 0,
  );

  /* Display: Master */
  $handler = $view->new_display('page', 'Master', 'master');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Node: Application Types */
  $handler->display->display_options['fields']['field_acc_application_types']['id'] = 'field_acc_application_types';
  $handler->display->display_options['fields']['field_acc_application_types']['table'] = 'search_api_index_acc_applications';
  $handler->display->display_options['fields']['field_acc_application_types']['field'] = 'field_acc_application_types';
  $handler->display->display_options['fields']['field_acc_application_types']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_acc_application_types']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_acc_application_types']['bypass_access'] = 0;
  /* Field: Indexed Node: Date  */
  $handler->display->display_options['fields']['field_date_app']['id'] = 'field_date_app';
  $handler->display->display_options['fields']['field_date_app']['table'] = 'search_api_index_acc_applications';
  $handler->display->display_options['fields']['field_date_app']['field'] = 'field_date_app';
  $handler->display->display_options['fields']['field_date_app']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Indexed Node: Sunmitted By Organization Type */
  $handler->display->display_options['fields']['field_organization_type']['id'] = 'field_organization_type';
  $handler->display->display_options['fields']['field_organization_type']['table'] = 'search_api_index_acc_applications';
  $handler->display->display_options['fields']['field_organization_type']['field'] = 'field_organization_type';
  $handler->display->display_options['fields']['field_organization_type']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_organization_type']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_organization_type']['bypass_access'] = 0;
  /* Field: Indexed Node: Submission Status */
  $handler->display->display_options['fields']['field_acc_submission_status']['id'] = 'field_acc_submission_status';
  $handler->display->display_options['fields']['field_acc_submission_status']['table'] = 'search_api_index_acc_applications';
  $handler->display->display_options['fields']['field_acc_submission_status']['field'] = 'field_acc_submission_status';
  $handler->display->display_options['fields']['field_acc_submission_status']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_acc_submission_status']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_acc_submission_status']['bypass_access'] = 0;
  /* Field: Indexed Node: URL */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'search_api_index_acc_applications';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['label'] = 'view';
  $handler->display->display_options['fields']['url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['url']['alter']['text'] = '<a href="[url]">view</a>';
  $handler->display->display_options['fields']['url']['link_to_entity'] = 0;
  $handler->display->display_options['path'] = 'access/applications';
  $handler->display->display_options['menu']['title'] = 'Table';
  $handler->display->display_options['menu']['weight'] = '1';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Table */
  $handler = $view->new_display('page', 'Table', 'table');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Node: Application Types */
  $handler->display->display_options['fields']['field_acc_application_types']['id'] = 'field_acc_application_types';
  $handler->display->display_options['fields']['field_acc_application_types']['table'] = 'search_api_index_acc_applications';
  $handler->display->display_options['fields']['field_acc_application_types']['field'] = 'field_acc_application_types';
  $handler->display->display_options['fields']['field_acc_application_types']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_acc_application_types']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_acc_application_types']['bypass_access'] = 0;
  /* Field: Indexed Node: Date  */
  $handler->display->display_options['fields']['field_date_app']['id'] = 'field_date_app';
  $handler->display->display_options['fields']['field_date_app']['table'] = 'search_api_index_acc_applications';
  $handler->display->display_options['fields']['field_date_app']['field'] = 'field_date_app';
  $handler->display->display_options['fields']['field_date_app']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Indexed Node: Sunmitted By Organization Type */
  $handler->display->display_options['fields']['field_organization_type']['id'] = 'field_organization_type';
  $handler->display->display_options['fields']['field_organization_type']['table'] = 'search_api_index_acc_applications';
  $handler->display->display_options['fields']['field_organization_type']['field'] = 'field_organization_type';
  $handler->display->display_options['fields']['field_organization_type']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_organization_type']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_organization_type']['bypass_access'] = 0;
  /* Field: Indexed Node: Submission Status */
  $handler->display->display_options['fields']['field_acc_submission_status']['id'] = 'field_acc_submission_status';
  $handler->display->display_options['fields']['field_acc_submission_status']['table'] = 'search_api_index_acc_applications';
  $handler->display->display_options['fields']['field_acc_submission_status']['field'] = 'field_acc_submission_status';
  $handler->display->display_options['fields']['field_acc_submission_status']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_acc_submission_status']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_acc_submission_status']['bypass_access'] = 0;
  /* Field: Indexed Node: URL */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'search_api_index_acc_applications';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['label'] = 'View';
  $handler->display->display_options['fields']['url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['url']['alter']['text'] = '<a href="[url]">view</a>';
  $handler->display->display_options['fields']['url']['link_to_entity'] = 0;
  $handler->display->display_options['path'] = 'access/applications/table';
  $handler->display->display_options['menu']['type'] = 'default tab';
  $handler->display->display_options['menu']['title'] = 'Table';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: List */
  $handler = $view->new_display('page', 'List', 'list');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'teaser';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['path'] = 'access/applications/list';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'List';
  $handler->display->display_options['menu']['weight'] = '2';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Rreports Restriction on movement */
  $handler = $view->new_display('page', 'Rreports Restriction on movement', 'graphs');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  $handler->display->display_options['path'] = 'access/applications/restrictions';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Reports Restriction on movement';
  $handler->display->display_options['menu']['weight'] = '4';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: XLS */
  $handler = $view->new_display('views_data_export', 'XLS', 'xls');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xls';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Indexed Node: Geographical Location (Destination) */
  $handler->display->display_options['relationships']['field_geographical_location_dest']['id'] = 'field_geographical_location_dest';
  $handler->display->display_options['relationships']['field_geographical_location_dest']['table'] = 'search_api_index_acc_applications';
  $handler->display->display_options['relationships']['field_geographical_location_dest']['field'] = 'field_geographical_location_dest';
  /* Relationship: Taxonomy term: Parent terms */
  $handler->display->display_options['relationships']['parent']['id'] = 'parent';
  $handler->display->display_options['relationships']['parent']['table'] = 'entity_taxonomy_term';
  $handler->display->display_options['relationships']['parent']['field'] = 'parent';
  $handler->display->display_options['relationships']['parent']['relationship'] = 'field_geographical_location_dest';
  /* Relationship: Indexed Node: Source */
  $handler->display->display_options['relationships']['field_organizations']['id'] = 'field_organizations';
  $handler->display->display_options['relationships']['field_organizations']['table'] = 'search_api_index_acc_applications';
  $handler->display->display_options['relationships']['field_organizations']['field'] = 'field_organizations';
  $handler->display->display_options['relationships']['field_organizations']['label'] = 'Submited By';
  /* Relationship: Indexed Node: Impacts */
  $handler->display->display_options['relationships']['field_acc_impacts']['id'] = 'field_acc_impacts';
  $handler->display->display_options['relationships']['field_acc_impacts']['table'] = 'search_api_index_acc_applications';
  $handler->display->display_options['relationships']['field_acc_impacts']['field'] = 'field_acc_impacts';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_acc_applications';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['link_to_entity'] = 0;
  /* Field: Indexed Node: Date  */
  $handler->display->display_options['fields']['field_date_app']['id'] = 'field_date_app';
  $handler->display->display_options['fields']['field_date_app']['table'] = 'search_api_index_acc_applications';
  $handler->display->display_options['fields']['field_date_app']['field'] = 'field_date_app';
  $handler->display->display_options['fields']['field_date_app']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Indexed Node: Application Types */
  $handler->display->display_options['fields']['field_acc_application_types']['id'] = 'field_acc_application_types';
  $handler->display->display_options['fields']['field_acc_application_types']['table'] = 'search_api_index_acc_applications';
  $handler->display->display_options['fields']['field_acc_application_types']['field'] = 'field_acc_application_types';
  $handler->display->display_options['fields']['field_acc_application_types']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_acc_application_types']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_acc_application_types']['bypass_access'] = 0;
  /* Field: Indexed Node: Source */
  $handler->display->display_options['fields']['field_organizations']['id'] = 'field_organizations';
  $handler->display->display_options['fields']['field_organizations']['table'] = 'search_api_index_acc_applications';
  $handler->display->display_options['fields']['field_organizations']['field'] = 'field_organizations';
  $handler->display->display_options['fields']['field_organizations']['label'] = 'Submitted By';
  $handler->display->display_options['fields']['field_organizations']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_organizations']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_organizations']['bypass_access'] = 0;
  /* Field: Taxonomy term: Type */
  $handler->display->display_options['fields']['field_organization_type']['id'] = 'field_organization_type';
  $handler->display->display_options['fields']['field_organization_type']['table'] = 'entity_taxonomy_term';
  $handler->display->display_options['fields']['field_organization_type']['field'] = 'field_organization_type';
  $handler->display->display_options['fields']['field_organization_type']['relationship'] = 'field_organizations';
  $handler->display->display_options['fields']['field_organization_type']['label'] = 'Organization Type';
  $handler->display->display_options['fields']['field_organization_type']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_organization_type']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_organization_type']['bypass_access'] = 0;
  /* Field: Indexed Node: Nationality */
  $handler->display->display_options['fields']['field_nationality']['id'] = 'field_nationality';
  $handler->display->display_options['fields']['field_nationality']['table'] = 'search_api_index_acc_applications';
  $handler->display->display_options['fields']['field_nationality']['field'] = 'field_nationality';
  $handler->display->display_options['fields']['field_nationality']['delta_offset'] = '0';
  /* Field: Taxonomy term: Parent terms */
  $handler->display->display_options['fields']['parent']['id'] = 'parent';
  $handler->display->display_options['fields']['parent']['table'] = 'entity_taxonomy_term';
  $handler->display->display_options['fields']['parent']['field'] = 'parent';
  $handler->display->display_options['fields']['parent']['relationship'] = 'field_geographical_location_dest';
  $handler->display->display_options['fields']['parent']['label'] = 'District';
  $handler->display->display_options['fields']['parent']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['parent']['view_mode'] = 'full';
  $handler->display->display_options['fields']['parent']['bypass_access'] = 0;
  /* Field: Indexed Node: Geographical Location (Destination) */
  $handler->display->display_options['fields']['field_geographical_location_dest']['id'] = 'field_geographical_location_dest';
  $handler->display->display_options['fields']['field_geographical_location_dest']['table'] = 'search_api_index_acc_applications';
  $handler->display->display_options['fields']['field_geographical_location_dest']['field'] = 'field_geographical_location_dest';
  $handler->display->display_options['fields']['field_geographical_location_dest']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_geographical_location_dest']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_geographical_location_dest']['bypass_access'] = 0;
  /* Field: Indexed Node: Submitted To */
  $handler->display->display_options['fields']['field_submited_to']['id'] = 'field_submited_to';
  $handler->display->display_options['fields']['field_submited_to']['table'] = 'search_api_index_acc_applications';
  $handler->display->display_options['fields']['field_submited_to']['field'] = 'field_submited_to';
  $handler->display->display_options['fields']['field_submited_to']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_submited_to']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_submited_to']['bypass_access'] = 0;
  /* Field: Indexed Node: Submission Status */
  $handler->display->display_options['fields']['field_acc_submission_status']['id'] = 'field_acc_submission_status';
  $handler->display->display_options['fields']['field_acc_submission_status']['table'] = 'search_api_index_acc_applications';
  $handler->display->display_options['fields']['field_acc_submission_status']['field'] = 'field_acc_submission_status';
  $handler->display->display_options['fields']['field_acc_submission_status']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_acc_submission_status']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_acc_submission_status']['bypass_access'] = 0;
  /* Field: Indexed Node: If denied, by whom? */
  $handler->display->display_options['fields']['field_if_denied_app']['id'] = 'field_if_denied_app';
  $handler->display->display_options['fields']['field_if_denied_app']['table'] = 'search_api_index_acc_applications';
  $handler->display->display_options['fields']['field_if_denied_app']['field'] = 'field_if_denied_app';
  $handler->display->display_options['fields']['field_if_denied_app']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_if_denied_app']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_if_denied_app']['bypass_access'] = 0;
  /* Field: Indexed Node: How many days to get an answer? */
  $handler->display->display_options['fields']['field_how_many_days']['id'] = 'field_how_many_days';
  $handler->display->display_options['fields']['field_how_many_days']['table'] = 'search_api_index_acc_applications';
  $handler->display->display_options['fields']['field_how_many_days']['field'] = 'field_how_many_days';
  $handler->display->display_options['fields']['field_how_many_days']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Indexed Node: Cluster */
  $handler->display->display_options['fields']['field_clusters']['id'] = 'field_clusters';
  $handler->display->display_options['fields']['field_clusters']['table'] = 'search_api_index_acc_applications';
  $handler->display->display_options['fields']['field_clusters']['field'] = 'field_clusters';
  $handler->display->display_options['fields']['field_clusters']['label'] = 'Sector';
  $handler->display->display_options['fields']['field_clusters']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_clusters']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_clusters']['bypass_access'] = 0;
  /* Field: Indexed Node: The main body text */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'search_api_index_acc_applications';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Description';
  /* Field: Field collection item: Type of impact */
  $handler->display->display_options['fields']['field_acc_impact_type']['id'] = 'field_acc_impact_type';
  $handler->display->display_options['fields']['field_acc_impact_type']['table'] = 'entity_field_collection_item';
  $handler->display->display_options['fields']['field_acc_impact_type']['field'] = 'field_acc_impact_type';
  $handler->display->display_options['fields']['field_acc_impact_type']['relationship'] = 'field_acc_impacts';
  /* Field: Field collection item: Value */
  $handler->display->display_options['fields']['field_acc_impact_value']['id'] = 'field_acc_impact_value';
  $handler->display->display_options['fields']['field_acc_impact_value']['table'] = 'entity_field_collection_item';
  $handler->display->display_options['fields']['field_acc_impact_value']['field'] = 'field_acc_impact_value';
  $handler->display->display_options['fields']['field_acc_impact_value']['relationship'] = 'field_acc_impacts';
  $handler->display->display_options['fields']['field_acc_impact_value']['label'] = 'Value of impact';
  $handler->display->display_options['fields']['field_acc_impact_value']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['path'] = 'access/applications/xls';
  $handler->display->display_options['displays'] = array(
    'master' => 'master',
    'table' => 'table',
    'list' => 'list',
    'default' => 0,
    'graphs' => 0,
  );

  /* Display: Reports Impediment on entry */
  $handler = $view->new_display('page', 'Reports Impediment on entry', 'page_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  $handler->display->display_options['path'] = 'access/applications/impediments';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Reports Impediment on entry';
  $handler->display->display_options['menu']['weight'] = '5';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Map Restriction on movement */
  $handler = $view->new_display('page', 'Map Restriction on movement', 'map');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'openlayers_map';
  $handler->display->display_options['style_options']['map'] = 'acc_applications';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['path'] = 'access/applications/map_restrictions';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Map Restriction on movement';
  $handler->display->display_options['menu']['weight'] = '3';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Layer Map Restrictions */
  $handler = $view->new_display('openlayers', 'Layer Map Restrictions', 'openlayers_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'openlayers_data';
  $handler->display->display_options['style_options']['data_source'] = array(
    'value' => 'other_latlon',
    'other_lat' => 'field_geographical_location_dest_field_location_lat',
    'other_lon' => 'field_geographical_location_dest_field_location_lon',
    'wkt' => 'title',
    'other_top' => 'title',
    'other_right' => 'title',
    'other_bottom' => 'title',
    'other_left' => 'title',
    'name_field' => 'title',
    'description_field' => '',
    'style_field' => '',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_acc_applications';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Geographical Location (Destination) » Location: Latitude (indexed) */
  $handler->display->display_options['fields']['field_geographical_location_dest_field_location_lat']['id'] = 'field_geographical_location_dest_field_location_lat';
  $handler->display->display_options['fields']['field_geographical_location_dest_field_location_lat']['table'] = 'search_api_index_acc_applications';
  $handler->display->display_options['fields']['field_geographical_location_dest_field_location_lat']['field'] = 'field_geographical_location_dest_field_location_lat';
  $handler->display->display_options['fields']['field_geographical_location_dest_field_location_lat']['precision'] = '0';
  $handler->display->display_options['fields']['field_geographical_location_dest_field_location_lat']['link_to_entity'] = 0;
  /* Field: Geographical Location (Destination) » Location: Longitude (indexed) */
  $handler->display->display_options['fields']['field_geographical_location_dest_field_location_lon']['id'] = 'field_geographical_location_dest_field_location_lon';
  $handler->display->display_options['fields']['field_geographical_location_dest_field_location_lon']['table'] = 'search_api_index_acc_applications';
  $handler->display->display_options['fields']['field_geographical_location_dest_field_location_lon']['field'] = 'field_geographical_location_dest_field_location_lon';
  $handler->display->display_options['fields']['field_geographical_location_dest_field_location_lon']['precision'] = '0';
  $handler->display->display_options['fields']['field_geographical_location_dest_field_location_lon']['link_to_entity'] = 0;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_acc_applications';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['label'] = 'Search';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    218860149 => 0,
    188284353 => 0,
    200153887 => 0,
    197637936 => 0,
    52310416 => 0,
    30037204 => 0,
    147444660 => 0,
    229782242 => 0,
  );
  /* Filter criterion: Indexed Node: Geographical Location (Destination) */
  $handler->display->display_options['filters']['field_geographical_location_dest']['id'] = 'field_geographical_location_dest';
  $handler->display->display_options['filters']['field_geographical_location_dest']['table'] = 'search_api_index_acc_applications';
  $handler->display->display_options['filters']['field_geographical_location_dest']['field'] = 'field_geographical_location_dest';
  $handler->display->display_options['filters']['field_geographical_location_dest']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_geographical_location_dest']['value'] = array();
  $translatables['acc_applications'] = array(
    t('Master'),
    t('Access Applications'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Node ID'),
    t('.'),
    t(','),
    t('Search'),
    t('Application Types'),
    t('Date '),
    t('Sunmitted By Organization Type'),
    t('Submission Status'),
    t('view'),
    t('<a href="[url]">view</a>'),
    t('Table'),
    t('View'),
    t('List'),
    t('Rreports Restriction on movement'),
    t('XLS'),
    t('Geographical Location (Destination)'),
    t('Parent terms'),
    t('Submited By'),
    t('Impacts'),
    t('Title'),
    t('Submitted By'),
    t('Organization Type'),
    t('Nationality'),
    t('District'),
    t('Submitted To'),
    t('If denied, by whom?'),
    t('How many days to get an answer?'),
    t('Sector'),
    t('Description'),
    t('Type of impact'),
    t('Value of impact'),
    t('Reports Impediment on entry'),
    t('Map Restriction on movement'),
    t('Layer Map Restrictions'),
    t('Latitude (indexed)'),
    t('Longitude (indexed)'),
  );
  $export['acc_applications'] = $view;

  return $export;
}
