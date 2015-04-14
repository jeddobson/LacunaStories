<?php
/**
 * @file
 * mapping_global_change.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function mapping_global_change_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-document-field_status'
  $field_instances['node-document-field_status'] = array(
    'bundle' => 'document',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_status',
    'label' => 'Status',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'comment' => 1,
        'name_as_title' => 1,
      ),
      'type' => 'options_buttons',
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Status');

  return $field_instances;
}
