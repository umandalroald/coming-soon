<?php
/**
 * coming soon admin form.
 */

/**
 * Implements FAPI.
 */
function coming_soon_admin_form($form, &$form_state) {
  $form = array();

  $form['comming-soon'] = array(
    '#type' => 'fieldset', 
    '#title' => t('Coming Soon'), 
    '#weight' => 5, 
    '#collapsible' => FALSE, 
    '#collapsed' => FALSE,
  );

  $form['comming-soon']['header'] = array(
    '#type' => 'fieldset', 
    '#title' => t('Page Content'), 
    '#weight' => 5, 
    '#collapsible' => TRUE, 
    '#collapsed' => FALSE,
    '#weight' => 1,
  );

  $form['comming-soon']['media'] = array(
    '#type' => 'fieldset', 
    '#title' => t('Social Media'), 
    '#weight' => 5, 
    '#collapsible' => TRUE, 
    '#collapsed' => TRUE,
    '#weight' => 2,
  );

  $form['comming-soon']['header']['header'] = array(
    '#type' => 'textfield',
    '#title' => t('Page Title'),
    '#description' => t('Page title of your coming soon page.'),
  );

  $form['comming-soon']['header']['background'] = array(
    '#type' => 'managed_file',
    '#title' => t('Background'),
    '#description' => t('Upload background image in coming soon page.'),
  );

  $form['comming-soon']['header']['timer'] = array(
    '#type' => 'date',
    '#title' => t('Date'),
    '#description' => t('Set the date when the page will become available.'),
  );

  $form['comming-soon']['media']['facebook'] = array(
    '#type' => 'textfield',
    '#title' => t('Facebook')
  );

  $form['comming-soon']['media']['google'] = array(
    '#type' => 'textfield',
    '#title' => t('Google+')
  );

  $form['comming-soon']['media']['twitter'] = array(
    '#type' => 'textfield',
    '#title' => t('Twitter')
  );

  $form['comming-soon']['media']['github'] = array(
    '#type' => 'textfield',
    '#title' => t('Github')
  );

  $form['comming-soon']['media']['linkedin'] = array(
    '#type' => 'textfield',
    '#title' => t('Linkedin')
  );

  $form['comming-soon']['submit'] = array(
    '#type' => 'submit',
    '#value' => 'Save',
    '#weight' => 3,
  );

  return $form;
}

/**
 * Save the settings.
 */
function coming_soon_admin_form_submit($form, &$form_state) {
  variable_set('calendar_settings', $form_state['values']['calendar_settings']);
}