<?php

function super_login_admin_form() {
  $form['super_login_css'] = array(
    '#type' => 'checkbox',
    '#title' => t('Enable Module CSS (stylesheet)'),    
    '#default_value' => variable_get('super_login_css', 1),    
    '#description' => t('Disable this option to turn off this module\'s CSS style sheet. If disabled, you should provide your own styling through your theme\'s stylesheet.'),    
  );
  return system_settings_form($form);

}