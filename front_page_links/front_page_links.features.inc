<?php
/**
 * @file
 * front_page_links.features.inc
 */

/**
 * Implements hook_views_api().
 */
function front_page_links_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_fe_nodequeue_export_fields().
 */
function front_page_links_fe_nodequeue_export_fields() {
  $nodequeues = array();

  // Exported nodequeues: front_page_links
  $nodequeues['front_page_links'] = array(
    'name' => 'front_page_links',
    'title' => 'Front Page Links',
    'subqueue_title' => '',
    'size' => 4,
    'link' => '',
    'link_remove' => '',
    'owner' => 'nodequeue',
    'show_in_ui' => 1,
    'show_in_tab' => 1,
    'show_in_links' => 0,
    'reference' => 0,
    'reverse' => 0,
    'i18n' => 0,
    'subqueues' => 1,
    'types' => array(
      0 => 'front_page_links',
    ),
    'roles' => array(),
    'count' => 0,
  );

  return $nodequeues;
}

/**
 * Implements hook_node_info().
 */
function front_page_links_node_info() {
  $items = array(
    'front_page_links' => array(
      'name' => t('Front Page Links'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
