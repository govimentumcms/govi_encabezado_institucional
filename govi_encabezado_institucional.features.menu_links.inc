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

  // Exported menu link: main-menu_atencin-al-ciudadano:<front>.
  $menu_links['main-menu_atencin-al-ciudadano:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Atención al Ciudadano',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'icon-user_circle',
        ),
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_atencin-al-ciudadano:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: main-menu_contacto:<front>.
  $menu_links['main-menu_contacto:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Contacto',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'icon-speech_4',
        ),
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_contacto:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: main-menu_eventos:calendario/ano.
  $menu_links['main-menu_eventos:calendario/ano'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'calendario/ano',
    'router_path' => 'calendario/ano',
    'link_title' => 'Eventos',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'icon-calendar',
        ),
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_eventos:calendario/ano',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
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
  // Exported menu link: main-menu_normatividad:<front>.
  $menu_links['main-menu_normatividad:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Normatividad',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_normatividad:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'main-menu_transparencia:node/1',
  );
  // Exported menu link: main-menu_noticias:noticias.
  $menu_links['main-menu_noticias:noticias'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'noticias',
    'router_path' => 'noticias',
    'link_title' => 'Noticias',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'icon-book_1',
        ),
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_noticias:noticias',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: main-menu_organizacin:organizacion.
  $menu_links['main-menu_organizacin:organizacion'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'organizacion',
    'router_path' => 'organizacion',
    'link_title' => 'Organización',
    'options' => array(
      'identifier' => 'main-menu_organizacin:organizacion',
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_transparencia:node/1',
  );
  // Exported menu link: main-menu_presupuesto:<front>.
  $menu_links['main-menu_presupuesto:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Presupuesto',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_presupuesto:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
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
    'weight' => -49,
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
  t('Atención al Ciudadano');
  t('Contacto');
  t('Contáctenos');
  t('Eventos');
  t('Inicio');
  t('Normatividad');
  t('Noticias');
  t('Organización');
  t('Presupuesto');
  t('Transparencia');

  return $menu_links;
}
