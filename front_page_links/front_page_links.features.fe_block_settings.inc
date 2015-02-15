<?php
/**
 * @file
 * front_page_links.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function front_page_links_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-front_page_links-block'] = array(
    'cache' => -1,
    'css_class' => 'front-page-links',
    'custom' => 0,
    'delta' => 'front_page_links-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'tylerbrothers' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'tylerbrothers',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
