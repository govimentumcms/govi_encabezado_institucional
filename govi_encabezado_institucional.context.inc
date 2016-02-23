<?php
/**
 * @file
 * govi_encabezado_institucional.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function govi_encabezado_institucional_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'menus_segundo_nivel';
  $context->description = 'habilita el menu tranparencia en las paginas internas';
  $context->tag = 'Transparencia';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'marco_legal' => 'marco_legal',
        'organizacion' => 'organizacion',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'path' => array(
      'values' => array(
        'marco-legal/*' => 'marco-legal/*',
        'marco-legal' => 'marco-legal',
        'organizacion/*' => 'organizacion/*',
        'organizacion' => 'organizacion',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-transparencia-segundo-nivel' => array(
          'module' => 'menu',
          'delta' => 'menu-transparencia-segundo-nivel',
          'region' => 'posicion_e_1',
          'weight' => '-5',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Transparencia');
  t('habilita el menu tranparencia en las paginas internas');
  $export['menus_segundo_nivel'] = $context;

  return $export;
}