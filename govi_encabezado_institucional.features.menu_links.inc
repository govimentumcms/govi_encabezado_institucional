<?php
/**
 * @file
 * govi_encabezado_institucional.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function govi_encabezado_institucional_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_home:<front>.
  $menu_links['main-menu_home:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'identifier' => 'main-menu_home:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-barra-superior_mapa-del-sitio:<front>.
  $menu_links['menu-barra-superior_mapa-del-sitio:<front>'] = array(
    'menu_name' => 'menu-barra-superior',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Mapa del sitio',
    'options' => array(
      'attributes' => array(
        'title' => 'Acceda a la estructura de navegacioń general del sitio',
      ),
      'identifier' => 'menu-barra-superior_mapa-del-sitio:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Home');
  t('Mapa del sitio');

  return $menu_links;
}
