<?php
/**
 * @file
 * mapping_global_change.features.inc
 */

/**
 * Implements hook_default_Workflow().
 */
function mapping_global_change_default_Workflow() {
  $workflows = array();

  // Exported workflow: 'materials_publication_states'
  $workflows['materials_publication_states'] = entity_import('Workflow', '{
    "name" : "materials_publication_states",
    "tab_roles" : [],
    "options" : [],
    "states" : {
      "1" : {"sid":"1","wid":"1","weight":"-50","sysid":"1","state":"(creation)","status":"1","name":"(creation)"},
      "2" : {"sid":"2","wid":"1","weight":"-20","sysid":"0","state":"Draft","status":"1","name":"draft"},
      "3" : {"sid":"3","wid":"1","weight":"-19","sysid":"0","state":"Ready for Annotation","status":"1","name":"ready_for_annotation"}
    },
    "transitions" : {
      "11" : {"tid":"11","sid":"1","target_sid":"2","roles":{"-1":-1,"3":3,"4":4,"5":5},"wid":"1","name":"1_2","label":"","rdf_mapping":[]},
      "12" : {"tid":"12","sid":"2","target_sid":"2","roles":{"-1":-1,"3":3,"4":4,"5":5,"6":6},"wid":"1","name":"2_2","label":"","rdf_mapping":[]},
      "14" : {"tid":"14","sid":"2","target_sid":"3","roles":{"3":3,"4":4},"wid":"1","name":"2_3","label":"","rdf_mapping":[]},
      "15" : {"tid":"15","sid":"3","target_sid":"2","roles":{"3":3,"4":4,"5":5},"wid":"1","name":"3_2","label":"","rdf_mapping":[]},
      "13" : {"tid":"13","sid":"3","target_sid":"3","roles":{"-1":-1,"3":3,"4":4,"5":5,"6":6},"wid":"1","name":"3_3","label":"","rdf_mapping":[]}
    },
    "label" : "Materials Publication States",
    "typeMap" : [],
    "rdf_mapping" : [],
    "wid_original" : "1",
    "system_roles" : {
      "-1" : "(author)",
      "1" : "anonymous user",
      "2" : "authenticated user",
      "3" : "administrator",
      "4" : "Content Manager",
      "5" : "Instructor",
      "6" : "Student"
    }
  }');

  return $workflows;
}

/**
 * Implements hook_ctools_plugin_api().
 */
function mapping_global_change_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function mapping_global_change_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function mapping_global_change_node_info() {
  $items = array(
    'document' => array(
      'name' => t('Document'),
      'base' => 'node_content',
      'description' => t('Any primary or secondary text documents.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
