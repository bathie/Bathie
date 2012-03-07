<?php
/**
 * @file
 * form_features.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function form_features_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function form_features_node_info() {
  $items = array(
    'page' => array(
      'name' => t('Page de base'),
      'base' => 'node_content',
      'description' => t('Utilisez les <em>pages de base</em> pour votre contenu statique, tel que la page \'Qui sommes-nous\'.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
