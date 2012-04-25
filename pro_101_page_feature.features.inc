<?php
/**
 * @file
 * pro_101_page_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pro_101_page_feature_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function pro_101_page_feature_node_info() {
  $items = array(
    'page' => array(
      'name' => t('Page'),
      'base' => 'node_content',
      'description' => t('Use <em>Page</em> for your static content, such as an \'About us\' page.'),
      'has_title' => '1',
      'title_label' => t('Page Title'),
      'help' => '',
    ),
  );
  return $items;
}
