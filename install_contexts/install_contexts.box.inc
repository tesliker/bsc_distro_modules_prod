<?php
/**
 * @file
 * install_contexts.box.inc
 */

/**
 * Implements hook_default_box().
 */
function install_contexts_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'developed_by_broadstreet';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'developed by Broadstreet';
  $box->options = array(
    'body' => array(
      'value' => '<p>Site developed and maintained by Broadstreet Consulting</p>
',
      'format' => 'full_html',
    ),
    'additional_classes' => 'text-center',
  );
  $export['developed_by_broadstreet'] = $box;

  return $export;
}
