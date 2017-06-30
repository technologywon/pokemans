<?php
/**
 * @file
 * pokemans.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pokemans_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function pokemans_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function pokemans_node_info() {
  $items = array(
    'pokemon' => array(
      'name' => t('Pokemon'),
      'base' => 'node_content',
      'description' => t('Individual pokemans'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
