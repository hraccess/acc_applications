<?php
/**
 * @file
 * acc_applications.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function acc_applications_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'clear acc_submission_status feeds'.
  $permissions['clear acc_submission_status feeds'] = array(
    'name' => 'clear acc_submission_status feeds',
    'roles' => array(
      'access manager' => 'access manager',
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'clear csv_acc_application feeds'.
  $permissions['clear csv_acc_application feeds'] = array(
    'name' => 'clear csv_acc_application feeds',
    'roles' => array(
      'access manager' => 'access manager',
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'clear csv_acc_application_types feeds'.
  $permissions['clear csv_acc_application_types feeds'] = array(
    'name' => 'clear csv_acc_application_types feeds',
    'roles' => array(
      'access manager' => 'access manager',
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'create acc_application content'.
  $permissions['create acc_application content'] = array(
    'name' => 'create acc_application content',
    'roles' => array(
      'access editor' => 'access editor',
      'access manager' => 'access manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any acc_application content'.
  $permissions['delete any acc_application content'] = array(
    'name' => 'delete any acc_application content',
    'roles' => array(
      'access manager' => 'access manager',
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own acc_application content'.
  $permissions['delete own acc_application content'] = array(
    'name' => 'delete own acc_application content',
    'roles' => array(
      'access editor' => 'access editor',
      'access manager' => 'access manager',
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in acc_application_submission_status'.
  $permissions['delete terms in acc_application_submission_status'] = array(
    'name' => 'delete terms in acc_application_submission_status',
    'roles' => array(
      'access manager' => 'access manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in acc_application_types'.
  $permissions['delete terms in acc_application_types'] = array(
    'name' => 'delete terms in acc_application_types',
    'roles' => array(
      'access manager' => 'access manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit any acc_application content'.
  $permissions['edit any acc_application content'] = array(
    'name' => 'edit any acc_application content',
    'roles' => array(
      'access manager' => 'access manager',
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own acc_application content'.
  $permissions['edit own acc_application content'] = array(
    'name' => 'edit own acc_application content',
    'roles' => array(
      'access editor' => 'access editor',
      'access manager' => 'access manager',
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in acc_application_submission_status'.
  $permissions['edit terms in acc_application_submission_status'] = array(
    'name' => 'edit terms in acc_application_submission_status',
    'roles' => array(
      'access manager' => 'access manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in acc_application_types'.
  $permissions['edit terms in acc_application_types'] = array(
    'name' => 'edit terms in acc_application_types',
    'roles' => array(
      'access manager' => 'access manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'import acc_submission_status feeds'.
  $permissions['import acc_submission_status feeds'] = array(
    'name' => 'import acc_submission_status feeds',
    'roles' => array(
      'access manager' => 'access manager',
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'import csv_acc_application feeds'.
  $permissions['import csv_acc_application feeds'] = array(
    'name' => 'import csv_acc_application feeds',
    'roles' => array(
      'access manager' => 'access manager',
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'import csv_acc_application_types feeds'.
  $permissions['import csv_acc_application_types feeds'] = array(
    'name' => 'import csv_acc_application_types feeds',
    'roles' => array(
      'access manager' => 'access manager',
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock acc_submission_status feeds'.
  $permissions['unlock acc_submission_status feeds'] = array(
    'name' => 'unlock acc_submission_status feeds',
    'roles' => array(
      'access manager' => 'access manager',
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock csv_acc_application feeds'.
  $permissions['unlock csv_acc_application feeds'] = array(
    'name' => 'unlock csv_acc_application feeds',
    'roles' => array(
      'access manager' => 'access manager',
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock csv_acc_application_types feeds'.
  $permissions['unlock csv_acc_application_types feeds'] = array(
    'name' => 'unlock csv_acc_application_types feeds',
    'roles' => array(
      'access manager' => 'access manager',
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'feeds',
  );

  return $permissions;
}
