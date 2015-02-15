<?php
/**
 * @file
 * install_contexts.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function install_contexts_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'all_pages';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '*' => '*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'boxes-site_logo' => array(
          'module' => 'boxes',
          'delta' => 'site_logo',
          'region' => 'branding_left',
          'weight' => '-10',
        ),
        'superfish-1' => array(
          'module' => 'superfish',
          'delta' => '1',
          'region' => 'navigation',
          'weight' => '-10',
        ),
        'panels_mini-footer' => array(
          'module' => 'panels_mini',
          'delta' => 'footer',
          'region' => 'footer',
          'weight' => '-10',
        ),
        'boxes-developed_by_broadstreet' => array(
          'module' => 'boxes',
          'delta' => 'developed_by_broadstreet',
          'region' => 'footer',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['all_pages'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'front_page';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-front_page_slideshow-block_1' => array(
          'module' => 'views',
          'delta' => 'front_page_slideshow-block_1',
          'region' => 'header',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['front_page'] = $context;

  return $export;
}
