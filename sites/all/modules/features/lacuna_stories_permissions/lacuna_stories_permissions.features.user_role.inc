<?php
/**
 * @file
 * lacuna_stories_permissions.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function lacuna_stories_permissions_user_default_roles() {
  $roles = array();

  // Exported role: ARC Collaborator.
  $roles['ARC Collaborator'] = array(
    'name' => 'ARC Collaborator',
    'weight' => 5,
  );

  // Exported role: ARC Member.
  $roles['ARC Member'] = array(
    'name' => 'ARC Member',
    'weight' => 4,
  );

  // Exported role: Content Manager.
  $roles['Content Manager'] = array(
    'name' => 'Content Manager',
    'weight' => 3,
  );

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 2,
  );

  return $roles;
}
