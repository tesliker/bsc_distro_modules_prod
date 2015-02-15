<?php
/**
 * @file
 * disto.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function disto_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'footer';
  $mini->category = '';
  $mini->admin_title = 'Footer';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'ead15477-98e1-4727-9838-a5c8f3bc8ea7';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-0effc461-6710-4289-96c7-b99265fd14c3';
    $pane->panel = 'middle';
    $pane->type = 'panels_mini';
    $pane->subtype = 'footer_left';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'col-sm-8',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '0effc461-6710-4289-96c7-b99265fd14c3';
    $display->content['new-0effc461-6710-4289-96c7-b99265fd14c3'] = $pane;
    $display->panels['middle'][0] = 'new-0effc461-6710-4289-96c7-b99265fd14c3';
    $pane = new stdClass();
    $pane->pid = 'new-a1878d72-8ffc-4c4c-a069-7d85beb0d33b';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'boxes-address';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'col-sm-4',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'a1878d72-8ffc-4c4c-a069-7d85beb0d33b';
    $display->content['new-a1878d72-8ffc-4c4c-a069-7d85beb0d33b'] = $pane;
    $display->panels['middle'][1] = 'new-a1878d72-8ffc-4c4c-a069-7d85beb0d33b';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-0effc461-6710-4289-96c7-b99265fd14c3';
  $mini->display = $display;
  $export['footer'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'footer_left';
  $mini->category = '';
  $mini->admin_title = 'Footer Left';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '68d05198-b25c-41fa-acf2-da2bb20a9cf8';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-3084f5fd-7226-4215-9884-7f18e50421fc';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'boxes-about_us';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'col-sm-12',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '3084f5fd-7226-4215-9884-7f18e50421fc';
    $display->content['new-3084f5fd-7226-4215-9884-7f18e50421fc'] = $pane;
    $display->panels['middle'][0] = 'new-3084f5fd-7226-4215-9884-7f18e50421fc';
    $pane = new stdClass();
    $pane->pid = 'new-7d7a8159-7c7a-4a5e-9503-40e8501fccf2';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'boxes-client_centered';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'col-sm-3',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '7d7a8159-7c7a-4a5e-9503-40e8501fccf2';
    $display->content['new-7d7a8159-7c7a-4a5e-9503-40e8501fccf2'] = $pane;
    $display->panels['middle'][1] = 'new-7d7a8159-7c7a-4a5e-9503-40e8501fccf2';
    $pane = new stdClass();
    $pane->pid = 'new-28aec576-ad25-4553-a774-ddb4ef044f68';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'boxes-popular_blogs';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'col-sm-3',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '28aec576-ad25-4553-a774-ddb4ef044f68';
    $display->content['new-28aec576-ad25-4553-a774-ddb4ef044f68'] = $pane;
    $display->panels['middle'][2] = 'new-28aec576-ad25-4553-a774-ddb4ef044f68';
    $pane = new stdClass();
    $pane->pid = 'new-7d3bd8c1-8ac5-47e3-be7c-011771db298b';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'boxes-misc_pages';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'col-sm-3',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '7d3bd8c1-8ac5-47e3-be7c-011771db298b';
    $display->content['new-7d3bd8c1-8ac5-47e3-be7c-011771db298b'] = $pane;
    $display->panels['middle'][3] = 'new-7d3bd8c1-8ac5-47e3-be7c-011771db298b';
    $pane = new stdClass();
    $pane->pid = 'new-99cf5d4e-620d-4212-8c9e-cf78646d6fd3';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'boxes-services';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'col-sm-3',
    );
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '99cf5d4e-620d-4212-8c9e-cf78646d6fd3';
    $display->content['new-99cf5d4e-620d-4212-8c9e-cf78646d6fd3'] = $pane;
    $display->panels['middle'][4] = 'new-99cf5d4e-620d-4212-8c9e-cf78646d6fd3';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-3084f5fd-7226-4215-9884-7f18e50421fc';
  $mini->display = $display;
  $export['footer_left'] = $mini;

  return $export;
}
