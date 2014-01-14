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

  return $permissions;
}
