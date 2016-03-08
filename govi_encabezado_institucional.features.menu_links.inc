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
  // Exported menu link: main-menu_contratacin:transparencia/contratacion.
  $menu_links['main-menu_contratacin:transparencia/contratacion'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'transparencia/contratacion',
    'router_path' => 'transparencia/contratacion',
    'link_title' => 'Contratación',
    'options' => array(
      'cami' => array(
        'pages' => 'transparencia/contratacion',
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_contratacin:transparencia/contratacion',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -46,
    'customized' => 1,
    'parent_identifier' => 'main-menu_transparencia:node/1',
  );
  // Exported menu link: main-menu_directorio-de-funcionarios:transparencia/organizacion/directorio-funcionarios.
  $menu_links['main-menu_directorio-de-funcionarios:transparencia/organizacion/directorio-funcionarios'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'transparencia/organizacion/directorio-funcionarios',
    'router_path' => 'transparencia/organizacion/directorio-funcionarios',
    'link_title' => 'Directorio de Funcionarios',
    'options' => array(
      'cami' => array(
        'pages' => '',
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_directorio-de-funcionarios:transparencia/organizacion/directorio-funcionarios',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'main-menu_organizacin:transparencia/organizacion',
  );
  // Exported menu link: main-menu_ejecucin-de-contratos:transparencia/contratacion/ejecucion_contratos.
  $menu_links['main-menu_ejecucin-de-contratos:transparencia/contratacion/ejecucion_contratos'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'transparencia/contratacion/ejecucion_contratos',
    'router_path' => 'transparencia/contratacion',
    'link_title' => 'Ejecución de Contratos',
    'options' => array(
      'cami' => array(
        'pages' => 'transparencia/contratacion/ejecucion_contratos
transparencia/contratacion/ejecucion_contratos/*',
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_ejecucin-de-contratos:transparencia/contratacion/ejecucion_contratos',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'main-menu_contratacin:transparencia/contratacion',
  );
  // Exported menu link: main-menu_estados-financieros:<front>.
  $menu_links['main-menu_estados-financieros:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Estados Financieros',
    'options' => array(
      'cami' => array(
        'pages' => '',
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_estados-financieros:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_informacin-financiera-y-contable:<front>',
  );
  // Exported menu link: main-menu_estrategias-planes-e-informes:<front>.
  $menu_links['main-menu_estrategias-planes-e-informes:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Estrategias, planes e informes',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_estrategias-planes-e-informes:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_gestin-institucional:<front>',
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
  // Exported menu link: main-menu_gestin-institucional:<front>.
  $menu_links['main-menu_gestin-institucional:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Gestión Institucional',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_gestin-institucional:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_transparencia:node/1',
  );
  // Exported menu link: main-menu_informacin-contractual:transparencia/contratacion/informacion_contractual.
  $menu_links['main-menu_informacin-contractual:transparencia/contratacion/informacion_contractual'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'transparencia/contratacion/informacion_contractual',
    'router_path' => 'transparencia/contratacion/informacion_contractual',
    'link_title' => 'Información Contractual',
    'options' => array(
      'cami' => array(
        'pages' => 'transparencia/contratacion/informacion_contractual
transparencia/contratacion/informacion_contractual/*',
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_informacin-contractual:transparencia/contratacion/informacion_contractual',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_contratacin:transparencia/contratacion',
  );
  // Exported menu link: main-menu_informacin-financiera-y-contable:<front>.
  $menu_links['main-menu_informacin-financiera-y-contable:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Información Financiera y Contable',
    'options' => array(
      'cami' => array(
        'pages' => '',
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_informacin-financiera-y-contable:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -47,
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
  // Exported menu link: main-menu_lineamientos:transparencia/marco-legal/lineamientos.
  $menu_links['main-menu_lineamientos:transparencia/marco-legal/lineamientos'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'transparencia/marco-legal/lineamientos',
    'router_path' => 'transparencia/marco-legal/lineamientos',
    'link_title' => 'Lineamientos',
    'options' => array(
      'cami' => array(
        'pages' => '',
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_lineamientos:transparencia/marco-legal/lineamientos',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_marco-legal:transparencia/marco-legal',
  );
  // Exported menu link: main-menu_manual-de-contratacin:transparencia/contratacion/manual_contratacion.
  $menu_links['main-menu_manual-de-contratacin:transparencia/contratacion/manual_contratacion'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'transparencia/contratacion/manual_contratacion',
    'router_path' => 'transparencia/contratacion',
    'link_title' => 'Manual de contratación',
    'options' => array(
      'cami' => array(
        'pages' => 'transparencia/contratacion/manual_contratacion
transparencia/contratacion/manual_contratacion/*',
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_manual-de-contratacin:transparencia/contratacion/manual_contratacion',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_contratacin:transparencia/contratacion',
  );
  // Exported menu link: main-menu_marco-legal:transparencia/marco-legal.
  $menu_links['main-menu_marco-legal:transparencia/marco-legal'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'transparencia/marco-legal',
    'router_path' => 'transparencia/marco-legal',
    'link_title' => 'Marco Legal',
    'options' => array(
      'cami' => array(
        'pages' => '',
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_marco-legal:transparencia/marco-legal',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_transparencia:node/1',
  );
  // Exported menu link: main-menu_mecanismos-de-supervicin-notificacin-y-vigilancia:<front>.
  $menu_links['main-menu_mecanismos-de-supervicin-notificacin-y-vigilancia:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Mecanismos de Supervición Notificación y Vigilancia',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_mecanismos-de-supervicin-notificacin-y-vigilancia:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'parent_identifier' => 'main-menu_gestin-institucional:<front>',
  );
  // Exported menu link: main-menu_misin:transparencia/organizacion.
  $menu_links['main-menu_misin:transparencia/organizacion'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'transparencia/organizacion',
    'router_path' => 'transparencia/organizacion',
    'link_title' => 'Misión',
    'options' => array(
      'cami' => array(
        'pages' => '',
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_misin:transparencia/organizacion',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_organizacin:transparencia/organizacion',
  );
  // Exported menu link: main-menu_normatividad:transparencia/marco-legal/normatividad.
  $menu_links['main-menu_normatividad:transparencia/marco-legal/normatividad'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'transparencia/marco-legal/normatividad',
    'router_path' => 'transparencia/marco-legal/normatividad',
    'link_title' => 'Normatividad',
    'options' => array(
      'cami' => array(
        'pages' => '',
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_normatividad:transparencia/marco-legal/normatividad',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_marco-legal:transparencia/marco-legal',
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
  // Exported menu link: main-menu_organigrama:<front>.
  $menu_links['main-menu_organigrama:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Organigrama',
    'options' => array(
      'cami' => array(
        'pages' => '',
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_organigrama:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_organizacin:transparencia/organizacion',
  );
  // Exported menu link: main-menu_organizacin:transparencia/organizacion.
  $menu_links['main-menu_organizacin:transparencia/organizacion'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'transparencia/organizacion',
    'router_path' => 'transparencia/organizacion',
    'link_title' => 'Organización',
    'options' => array(
      'cami' => array(
        'pages' => '',
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_organizacin:transparencia/organizacion',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_transparencia:node/1',
  );
  // Exported menu link: main-menu_plan-anual-de-contrataciones:transparencia/contratacion/plan_anual_contrataciones.
  $menu_links['main-menu_plan-anual-de-contrataciones:transparencia/contratacion/plan_anual_contrataciones'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'transparencia/contratacion/plan_anual_contrataciones',
    'router_path' => 'transparencia/contratacion',
    'link_title' => 'Plan anual de contrataciones',
    'options' => array(
      'cami' => array(
        'pages' => 'transparencia/contratacion/plan_anual_contrataciones
transparencia/contratacion/plan_anual_contrataciones/*',
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_plan-anual-de-contrataciones:transparencia/contratacion/plan_anual_contrataciones',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_contratacin:transparencia/contratacion',
  );
  // Exported menu link: main-menu_planes:<front>.
  $menu_links['main-menu_planes:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Planes',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_planes:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_gestin-institucional:<front>',
  );
  // Exported menu link: main-menu_programas-y-proyectos:<front>.
  $menu_links['main-menu_programas-y-proyectos:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Programas y Proyectos',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_programas-y-proyectos:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_gestin-institucional:<front>',
  );
  // Exported menu link: main-menu_redicin-de-cuentas:<front>.
  $menu_links['main-menu_redicin-de-cuentas:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Redición de Cuentas',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_redicin-de-cuentas:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'main-menu_gestin-institucional:<front>',
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
  // Exported menu link: main-menu_visin:transparencia/organizacion.
  $menu_links['main-menu_visin:transparencia/organizacion'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'transparencia/organizacion',
    'router_path' => 'transparencia/organizacion',
    'link_title' => 'Visión',
    'options' => array(
      'cami' => array(
        'pages' => '',
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_visin:transparencia/organizacion',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_organizacin:transparencia/organizacion',
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
  // Exported menu link: menu-transparencia-segundo-nivel_contratacin:transparencia/contratacion.
  $menu_links['menu-transparencia-segundo-nivel_contratacin:transparencia/contratacion'] = array(
    'menu_name' => 'menu-transparencia-segundo-nivel',
    'link_path' => 'transparencia/contratacion',
    'router_path' => 'transparencia/contratacion',
    'link_title' => 'Contratación',
    'options' => array(
      'cami' => array(
        'pages' => 'transparencia/contratacion
transparencia/contratacion/*
',
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-transparencia-segundo-nivel_contratacin:transparencia/contratacion',
      'menu_token_link_uuid' => 'menutoken/56c73a5754c38',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-transparencia-segundo-nivel_gestin-institucional:menutoken/56c7354256ad9.
  $menu_links['menu-transparencia-segundo-nivel_gestin-institucional:menutoken/56c7354256ad9'] = array(
    'menu_name' => 'menu-transparencia-segundo-nivel',
    'link_path' => 'menutoken/56c7354256ad9',
    'router_path' => 'menutoken/%',
    'link_title' => 'Gestión Institucional',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'menu_token_link_path' => '[site:url]gestion-institucional/*',
      'menu_token_data' => array(),
      'menu_token_options' => array(
        'clear' => 0,
      ),
      'alter' => TRUE,
      'identifier' => 'menu-transparencia-segundo-nivel_gestin-institucional:menutoken/56c7354256ad9',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-transparencia-segundo-nivel_informacin-financiera-y-contable:menutoken/56c73803dac15.
  $menu_links['menu-transparencia-segundo-nivel_informacin-financiera-y-contable:menutoken/56c73803dac15'] = array(
    'menu_name' => 'menu-transparencia-segundo-nivel',
    'link_path' => 'menutoken/56c73803dac15',
    'router_path' => 'menutoken/%',
    'link_title' => 'Información Financiera y Contable',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'menu_token_link_path' => '[site:url]/informacion-financiera-contable',
      'menu_token_data' => array(),
      'menu_token_options' => array(
        'clear' => 0,
      ),
      'alter' => TRUE,
      'identifier' => 'menu-transparencia-segundo-nivel_informacin-financiera-y-contable:menutoken/56c73803dac15',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: menu-transparencia-segundo-nivel_marco-legal:transparencia/marco-legal.
  $menu_links['menu-transparencia-segundo-nivel_marco-legal:transparencia/marco-legal'] = array(
    'menu_name' => 'menu-transparencia-segundo-nivel',
    'link_path' => 'transparencia/marco-legal',
    'router_path' => 'transparencia/marco-legal',
    'link_title' => 'Marco Legal',
    'options' => array(
      'cami' => array(
        'pages' => 'transparencia/marco-legal
transparencia/marco-legal/*',
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-transparencia-segundo-nivel_marco-legal:transparencia/marco-legal',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-transparencia-segundo-nivel_organizacin:transparencia/organizacion.
  $menu_links['menu-transparencia-segundo-nivel_organizacin:transparencia/organizacion'] = array(
    'menu_name' => 'menu-transparencia-segundo-nivel',
    'link_path' => 'transparencia/organizacion',
    'router_path' => 'transparencia/organizacion',
    'link_title' => 'Organización',
    'options' => array(
      'cami' => array(
        'pages' => 'transparencia/organizacion
transparencia/organizacion/*',
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-transparencia-segundo-nivel_organizacin:transparencia/organizacion',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Atención al Ciudadano');
  t('Contacto');
  t('Contratación');
  t('Contáctenos');
  t('Directorio de Funcionarios');
  t('Ejecución de Contratos');
  t('Estados Financieros');
  t('Estrategias, planes e informes');
  t('Eventos');
  t('Gestión Institucional');
  t('Información Contractual');
  t('Información Financiera y Contable');
  t('Inicio');
  t('Lineamientos');
  t('Manual de contratación');
  t('Marco Legal');
  t('Mecanismos de Supervición Notificación y Vigilancia');
  t('Misión');
  t('Normatividad');
  t('Noticias');
  t('Organigrama');
  t('Organización');
  t('Plan anual de contrataciones');
  t('Planes');
  t('Programas y Proyectos');
  t('Redición de Cuentas');
  t('Transparencia');
  t('Visión');

  return $menu_links;
}
