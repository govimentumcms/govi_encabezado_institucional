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
  // Exported menu link: main-menu_concurso-de-mritos:<front>.
  $menu_links['main-menu_concurso-de-mritos:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Concurso de méritos',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_concurso-de-mritos:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_contratacin:<front>',
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
  // Exported menu link: main-menu_contratacin-directa:<front>.
  $menu_links['main-menu_contratacin-directa:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Contratación Directa',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_contratacin-directa:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'main-menu_contratacin:<front>',
  );
  // Exported menu link: main-menu_contratacin:<front>.
  $menu_links['main-menu_contratacin:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Contratación',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_contratacin:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
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
  // Exported menu link: main-menu_ejecucin-presupuestal:transparencia/presupuesto/ejecucion-presupuestal.
  $menu_links['main-menu_ejecucin-presupuestal:transparencia/presupuesto/ejecucion-presupuestal'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'transparencia/presupuesto/ejecucion-presupuestal',
    'router_path' => 'transparencia/presupuesto/ejecucion-presupuestal',
    'link_title' => 'Ejecución presupuestal',
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
      'identifier' => 'main-menu_ejecucin-presupuestal:transparencia/presupuesto/ejecucion-presupuestal',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_presupuesto:transparencia/presupuesto',
  );
  // Exported menu link: main-menu_estados-financieros:transparencia/presupuesto/estados-financieros.
  $menu_links['main-menu_estados-financieros:transparencia/presupuesto/estados-financieros'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'transparencia/presupuesto/estados-financieros',
    'router_path' => 'transparencia/presupuesto/estados-financieros',
    'link_title' => 'Estados financieros',
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
      'identifier' => 'main-menu_estados-financieros:transparencia/presupuesto/estados-financieros',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_presupuesto:transparencia/presupuesto',
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
  // Exported menu link: main-menu_informes-de-empalme:transparencia/planeacion/informes-empalme.
  $menu_links['main-menu_informes-de-empalme:transparencia/planeacion/informes-empalme'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'transparencia/planeacion/informes-empalme',
    'router_path' => 'transparencia/planeacion/informes-empalme',
    'link_title' => 'Informes de empalme',
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
      'identifier' => 'main-menu_informes-de-empalme:transparencia/planeacion/informes-empalme',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'parent_identifier' => 'main-menu_planeacin:transparencia/planeacion',
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
  // Exported menu link: main-menu_licitacin-pblica:<front>.
  $menu_links['main-menu_licitacin-pblica:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Licitación pública',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_licitacin-pblica:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_contratacin:<front>',
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
  // Exported menu link: main-menu_metas-objetivos-e-indicadores:transparencia/planeacion/metas-objetivos-indicadores.
  $menu_links['main-menu_metas-objetivos-e-indicadores:transparencia/planeacion/metas-objetivos-indicadores'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'transparencia/planeacion/metas-objetivos-indicadores',
    'router_path' => 'transparencia/planeacion/metas-objetivos-indicadores',
    'link_title' => 'Metas, objetivos e indicadores',
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
      'identifier' => 'main-menu_metas-objetivos-e-indicadores:transparencia/planeacion/metas-objetivos-indicadores',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_planeacin:transparencia/planeacion',
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
  // Exported menu link: main-menu_mnima-cuanta:<front>.
  $menu_links['main-menu_mnima-cuanta:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Mínima CuantÍa',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_mnima-cuanta:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'parent_identifier' => 'main-menu_contratacin:<front>',
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
  // Exported menu link: main-menu_participacin-ciudadana:transparencia/planeacion/participacion-ciudadana.
  $menu_links['main-menu_participacin-ciudadana:transparencia/planeacion/participacion-ciudadana'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'transparencia/planeacion/participacion-ciudadana',
    'router_path' => 'transparencia/planeacion/participacion-ciudadana',
    'link_title' => 'Participación Ciudadana',
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
      'identifier' => 'main-menu_participacin-ciudadana:transparencia/planeacion/participacion-ciudadana',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'main-menu_planeacin:transparencia/planeacion',
  );
  // Exported menu link: main-menu_planeacin:transparencia/planeacion.
  $menu_links['main-menu_planeacin:transparencia/planeacion'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'transparencia/planeacion',
    'router_path' => 'transparencia/planeacion',
    'link_title' => 'Planeación',
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
      'identifier' => 'main-menu_planeacin:transparencia/planeacion',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_transparencia:node/1',
  );
  // Exported menu link: main-menu_planes:transparencia/planeacion/planes.
  $menu_links['main-menu_planes:transparencia/planeacion/planes'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'transparencia/planeacion/planes',
    'router_path' => 'transparencia/planeacion/planes',
    'link_title' => 'Planes',
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
      'identifier' => 'main-menu_planes:transparencia/planeacion/planes',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_planeacin:transparencia/planeacion',
  );
  // Exported menu link: main-menu_presupuesto-general:transparencia/presupuesto/general.
  $menu_links['main-menu_presupuesto-general:transparencia/presupuesto/general'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'transparencia/presupuesto/general',
    'router_path' => 'transparencia/presupuesto/general',
    'link_title' => 'Presupuesto general',
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
      'identifier' => 'main-menu_presupuesto-general:transparencia/presupuesto/general',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_presupuesto:transparencia/presupuesto',
  );
  // Exported menu link: main-menu_presupuesto:transparencia/presupuesto.
  $menu_links['main-menu_presupuesto:transparencia/presupuesto'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'transparencia/presupuesto',
    'router_path' => 'transparencia/presupuesto',
    'link_title' => 'Presupuesto',
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
      'identifier' => 'main-menu_presupuesto:transparencia/presupuesto',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'main-menu_transparencia:node/1',
  );
  // Exported menu link: main-menu_programas-y-proyectos:transparencia/planeacion/programas-proyectos.
  $menu_links['main-menu_programas-y-proyectos:transparencia/planeacion/programas-proyectos'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'transparencia/planeacion/programas-proyectos',
    'router_path' => 'transparencia/planeacion/programas-proyectos',
    'link_title' => 'Programas y Proyectos',
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
      'identifier' => 'main-menu_programas-y-proyectos:transparencia/planeacion/programas-proyectos',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_planeacin:transparencia/planeacion',
  );
  // Exported menu link: main-menu_seleccin-abreviada:<front>.
  $menu_links['main-menu_seleccin-abreviada:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Selección Abreviada',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_seleccin-abreviada:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_contratacin:<front>',
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
transparencia/contratación
transparencia/contratación/',
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
  // Exported menu link: menu-transparencia-segundo-nivel_planeacin:transparencia/planeacion.
  $menu_links['menu-transparencia-segundo-nivel_planeacin:transparencia/planeacion'] = array(
    'menu_name' => 'menu-transparencia-segundo-nivel',
    'link_path' => 'transparencia/planeacion',
    'router_path' => 'transparencia/planeacion',
    'link_title' => 'Planeación',
    'options' => array(
      'cami' => array(
        'pages' => 'transparencia/planeacion
transparencia/planeacion/*',
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
      'identifier' => 'menu-transparencia-segundo-nivel_planeacin:transparencia/planeacion',
      'menu_token_link_uuid' => 'menutoken/56c7354256ad9',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-transparencia-segundo-nivel_presupuesto:transparencia/presupuesto.
  $menu_links['menu-transparencia-segundo-nivel_presupuesto:transparencia/presupuesto'] = array(
    'menu_name' => 'menu-transparencia-segundo-nivel',
    'link_path' => 'transparencia/presupuesto',
    'router_path' => 'transparencia/presupuesto',
    'link_title' => 'Presupuesto',
    'options' => array(
      'cami' => array(
        'pages' => 'transparencia/presupuesto/
transparencia/presupuesto/*',
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
      'identifier' => 'menu-transparencia-segundo-nivel_presupuesto:transparencia/presupuesto',
      'menu_token_link_uuid' => 'menutoken/56c73803dac15',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Atención al Ciudadano');
  t('Concurso de méritos');
  t('Contacto');
  t('Contratación');
  t('Contratación Directa');
  t('Contáctenos');
  t('Directorio de Funcionarios');
  t('Ejecución presupuestal');
  t('Estados financieros');
  t('Eventos');
  t('Informes de empalme');
  t('Inicio');
  t('Licitación pública');
  t('Lineamientos');
  t('Marco Legal');
  t('Metas, objetivos e indicadores');
  t('Misión');
  t('Mínima CuantÍa');
  t('Normatividad');
  t('Noticias');
  t('Organigrama');
  t('Organización');
  t('Participación Ciudadana');
  t('Planeación');
  t('Planes');
  t('Presupuesto');
  t('Presupuesto general');
  t('Programas y Proyectos');
  t('Selección Abreviada');
  t('Transparencia');
  t('Visión');

  return $menu_links;
}
