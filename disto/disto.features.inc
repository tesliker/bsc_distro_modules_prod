<?php
/**
 * @file
 * disto.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function disto_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "boxes" && $api == "box") {
    return array("version" => "1");
  }
  if ($module == "panels_mini" && $api == "panels_default") {
    return array("version" => "1");
  }
}
