<?php
/**
 * @file
 * lacuna_stories_permissions.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function lacuna_stories_permissions_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:course_or_other_group:add user'
  $permissions['node:course_or_other_group:add user'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:course_or_other_group:administer group'
  $permissions['node:course_or_other_group:administer group'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:course_or_other_group:approve and deny subscription'
  $permissions['node:course_or_other_group:approve and deny subscription'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:course_or_other_group:create blog content'
  $permissions['node:course_or_other_group:create blog content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:course_or_other_group:create document content'
  $permissions['node:course_or_other_group:create document content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:course_or_other_group:delete any blog content'
  $permissions['node:course_or_other_group:delete any blog content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:course_or_other_group:delete any document content'
  $permissions['node:course_or_other_group:delete any document content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:course_or_other_group:delete own blog content'
  $permissions['node:course_or_other_group:delete own blog content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:course_or_other_group:delete own document content'
  $permissions['node:course_or_other_group:delete own document content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:course_or_other_group:manage members'
  $permissions['node:course_or_other_group:manage members'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:course_or_other_group:manage permissions'
  $permissions['node:course_or_other_group:manage permissions'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:course_or_other_group:manage roles'
  $permissions['node:course_or_other_group:manage roles'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:course_or_other_group:publish any content'
  $permissions['node:course_or_other_group:publish any content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:course_or_other_group:publish editable content'
  $permissions['node:course_or_other_group:publish editable content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:course_or_other_group:subscribe'
  $permissions['node:course_or_other_group:subscribe'] = array(
    'roles' => array(
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:course_or_other_group:subscribe without approval'
  $permissions['node:course_or_other_group:subscribe without approval'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:course_or_other_group:unpublish any content'
  $permissions['node:course_or_other_group:unpublish any content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:course_or_other_group:unpublish editable content'
  $permissions['node:course_or_other_group:unpublish editable content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:course_or_other_group:unsubscribe'
  $permissions['node:course_or_other_group:unsubscribe'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:course_or_other_group:update any blog content'
  $permissions['node:course_or_other_group:update any blog content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:course_or_other_group:update any document content'
  $permissions['node:course_or_other_group:update any document content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:course_or_other_group:update group'
  $permissions['node:course_or_other_group:update group'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:course_or_other_group:update own blog content'
  $permissions['node:course_or_other_group:update own blog content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:course_or_other_group:update own document content'
  $permissions['node:course_or_other_group:update own document content'] = array(
    'roles' => array(),
  );

  return $permissions;
}
