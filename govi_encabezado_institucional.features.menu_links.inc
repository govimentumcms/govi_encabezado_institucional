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

  // Exported menu link: main-menu_gestin:node/1.
  $menu_links['main-menu_gestin:node/1'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/1',
    'router_path' => 'node/%',
    'link_title' => 'Gestión',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_gestin:node/1',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_transparencia:node/1',
  );
  // Exported menu link: main-menu_inicio:<front>.
  $menu_links['main-menu_inicio:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Inicio',
    'options' => array(
      'identifier' => 'main-menu_inicio:<front>',
      'attributes' => array(
        'class' => array(
          0 => 'icon-home',
        ),
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: main-menu_marco-legal:node/1.
  $menu_links['main-menu_marco-legal:node/1'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/1',
    'router_path' => 'node/%',
    'link_title' => 'Marco legal',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_marco-legal:node/1',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_transparencia:node/1',
  );
  // Exported menu link: main-menu_misin:node/1.
  $menu_links['main-menu_misin:node/1'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/1',
    'router_path' => 'node/%',
    'link_title' => 'Misión',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_misin:node/1',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'main-menu_organizacin:node/1',
  );
  // Exported menu link: main-menu_organizacin:node/1.
  $menu_links['main-menu_organizacin:node/1'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/1',
    'router_path' => 'node/%',
    'link_title' => 'Organización',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_organizacin:node/1',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_transparencia:node/1',
  );
  // Exported menu link: main-menu_transparencia:node/1.
  $menu_links['main-menu_transparencia:node/1'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/1',
    'router_path' => 'node/%',
    'link_title' => 'Transparencia',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'icon-circle_ok',
        ),
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_transparencia:node/1',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-menu-secundario_contctenos:node/1.
  $menu_links['menu-menu-secundario_contctenos:node/1'] = array(
    'menu_name' => 'menu-menu-secundario',
    'link_path' => 'node/1',
    'router_path' => 'node/%',
    'link_title' => 'Contáctenos',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-menu-secundario_contctenos:node/1',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-menu-secundario_inicio:<front>.
  $menu_links['menu-menu-secundario_inicio:<front>'] = array(
    'menu_name' => 'menu-menu-secundario',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Inicio',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-menu-secundario_inicio:<front>',
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
  t('Contáctenos');
  t('Gestión');
  t('Inicio');
  t('Marco legal');
  t('Misión');
  t('Organización');
  t('Transparencia');

  return $menu_links;
}
