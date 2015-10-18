<?php
/**
 * @file
 * govi_encabezado_institucional.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function govi_encabezado_institucional_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'boton_contacto';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Boton Contacto';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Boton Contacto';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Enlace */
  $handler->display->display_options['fields']['field_enlace']['id'] = 'field_enlace';
  $handler->display->display_options['fields']['field_enlace']['table'] = 'field_data_field_enlace';
  $handler->display->display_options['fields']['field_enlace']['field'] = 'field_enlace';
  $handler->display->display_options['fields']['field_enlace']['label'] = '';
  $handler->display->display_options['fields']['field_enlace']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_enlace']['click_sort_column'] = 'url';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'enlace_simple' => 'enlace_simple',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['boton_contacto'] = $view;

  return $export;
}
