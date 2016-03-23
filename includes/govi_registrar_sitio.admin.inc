<?php 
/**
 * @file
 * Configuración Header Institucional
 */

/**
 * Form callback.
 * Formulario de configuraciones principales
 *
 * @see feature_institutional_header_menu()
 */

function govi_registrar_sitio() {

    global $base_url;
    global $user;
    
    $form = array();

    $msg = '<h3>Registro del Sitio Web</h3>';
    $msg .= '<p>Por favor diligencie los siguientes campos para ';
    $msg .= 'permitir la activación de algunos servicios como la Barra ';
    $msg .= 'Institucional, o el cliente SOAP del Sistema Distrital de ';
    $msg .= 'Quejas y Soluciones.<br/>';
    $msg .= 'Los datos acá registrados estarán sujetos a verificación por ';
    $msg .= 'la Alta Consejería Distrital de TIC, la Dirección Distrital de ';
    $msg .= 'Servicio al Ciudadano, la Subdirección de Sistemas y las ';
    $msg .= 'dependencias involucradas en la gestión de estos servicios.';
    
    $form['intro'] = array(
        '#markup' => $msg,
    );

    $form['datos_sitio'] = array(
        '#type' => 'fieldset',
        '#title' => 'Datos del sitio web',
        '#description' => 'Lorem Ipsum Dolor Sit Amet',
    );

    $form['datos_sitio']['nombre_dominio'] = array(
        '#type' => 'textfield',
        '#title' => 'Nombre de dominio',
        '#required' => TRUE,
        '#disabled' => TRUE,
        '#default_value' => $base_url
    );
    
    $form['datos_sitio']['direccion_ip'] = array(
        '#type' => 'textfield',
        '#title' => 'Dirección IP',
        '#required' => TRUE,
        '#disabled' => TRUE,
        '#default_value' => ip_address()
    );

    $form['datos_sitio']['sector'] = array(
        '#type' => 'textfield',
        '#title' => 'Sector',
        '#required' => TRUE,
        '#disabled' => TRUE,
        '#default_value' => variable_get('header_sector'),
    );

    $form['datos_sitio']['entidad'] = array(
        '#type' => 'textfield',
        '#title' => 'Entidad',
        '#required' => TRUE,
        '#disabled' => TRUE,
        '#access' => empty(variable_get('header_entidad')) ? FALSE : TRUE,
        '#default_value' => variable_get('header_entidad'),
    );
    
    $form['datos_webmaster'] = array(
        '#type' => 'fieldset',
        '#title' => 'Datos del administrador del sitio',
        '#description' => 'Lorem Ipsum Dolor Sit Amet',
    );

    $form['datos_webmaster']['nombre_admin'] = array(
        '#type' => 'textfield',
        '#title' => 'Nombre del webmaster encargado del sitio',
        '#description' => 'Por favor ingrese nombres y apellidos completos',
        '#required' => TRUE,
        '#default_value' => !empty(variable_get('sitio_nombre_admin')) ? variable_get('sitio_nombre_admin') : '',
    );

    $form['datos_webmaster']['cargo_admin'] = array(
        '#type' => 'textfield',
        '#title' => 'Cargo',
        '#description' => 'Por favor ingrese su cargo',
        '#required' => TRUE,
        '#default_value' => !empty(variable_get('sitio_cargo_admin')) ? variable_get('sitio_cargo_admin') : '',
    );

    $form['datos_webmaster']['dependencia_admin'] = array(
        '#type' => 'textfield',
        '#title' => 'Dependencia',
        '#description' => 'Por favor ingrese su dependencia',
        '#required' => TRUE,
        '#default_value' => !empty(variable_get('sitio_dependencia_admin')) ? variable_get('sitio_dependencia_admin') : '',
    );

    $form['datos_webmaster']['telefono_admin'] = array(
        '#type' => 'textfield',
        '#title' => 'Teléfono y extensión de la oficina',
        '#required' => TRUE,
        '#default_value' => !empty(variable_get('sitio_telefono_admin')) ? variable_get('sitio_telefono_admin') : '',
    );

    $form['datos_seguridad'] = array(
        '#type' => 'fieldset',
        '#title' => 'Datos de seguridad',
        '#description' => 'Lorem Ipsum Dolor Sit Amet',
    );

    $form['datos_seguridad']['token'] = array(
        '#type' => 'textfield',
        '#title' => 'Token del sitio',
        '#required' => TRUE,
        '#disabled' => TRUE,
        '#default_value' => !empty(variable_get('sitio_token')) ? variable_get('sitio_token') : drupal_hash_base64((string)time()),
    );

    $form['submit'] = array(
        '#type' => 'submit',
        '#value' => t('Submit')
    );
                      
    return $form;
}

function govi_registrar_sitio_submit($form, &$form_state) {

    global $user;

    variable_set('sitio_nombre_admin', $form_state['values']['nombre_admin']);
    variable_set('sitio_cargo_admin', $form_state['values']['cargo_admin']);
    variable_set('sitio_dependencia_admin', $form_state['values']['dependencia_admin']);
    variable_set('sitio_telefono_admin', $form_state['values']['telefono_admin']);
    variable_set('sitio_token', $form_state['values']['token']);

    $params = array(
        'user' => $user,
        'fecha_actual' => format_date(time(), 'long', 'l, F j'),
        'form' => $form_state['values'],
    );

    drupal_mail('govi_encabezado_institucional',
                'registro',
                $user->mail,
                user_preferred_language($user),
                $params,
                $user->mail,
                TRUE
    );

    variable_set('sitio_registro_solicitud_enviada', TRUE);

    drupal_set_message('Se ha enviado un correo electrónico con la solicitud de registro');
}

function govi_encabezado_institucional_mail($key, &$message, $params) {

    $asunto = '[Govimentum] Solicitud de registro nuevo sitio web '. $params['form']['nombre_dominio'];

    $msg = 'El sitio ' . $params['form']['nombre_dominio'] . ' ha solicitado el registro de ';
    $msg .= 'una nueva instalación de Govimentum.' . PHP_EOL;
    $msg .= '' . PHP_EOL;
    $msg .= 'Los datos del solicitante son: ' . PHP_EOL;
    $msg .= '' . PHP_EOL;
    $msg .= 'Nombre: ' . $params['form']['nombre_admin']  . PHP_EOL;
    $msg .= 'Cargo: ' . $params['form']['cargo_admin'] . PHP_EOL;
    $msg .= 'Dependencia: ' . $params['form']['dependencia_admin'] . PHP_EOL;
    $msg .= 'Correo electrónico: ' . $params['user']->mail . PHP_EOL;
    $msg .= 'Teléfono oficina: ' . $params['form']['telefono_admin'] . PHP_EOL;
    $msg .= 'Dirección ip del sitio: '. $params['form']['direccion_ip'] . PHP_EOL;
    $msg .= 'Sector al cual pertenece el sitio: ' . $params['form']['sector'] . PHP_EOL;
    if (!empty($params['form']['entidad'])) {
        $msg .= 'Nombre de la entidad: ' . $params['form']['entitad'] . PHP_EOL;
    }
    $msg .= 'Fecha de solicitud: ' . $params['fecha_actual'] . PHP_EOL;

    switch ($key) {
    case 'registro':
        $message['subject'] = $asunto;
        $message['body'][] = $msg;

        break;
    }
}