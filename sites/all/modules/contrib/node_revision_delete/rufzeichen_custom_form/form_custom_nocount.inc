<?php

function form_custom_nocount($form_state) {

  $form['description'] = array(
    '#type' => 'item',
    '#title' => t('Delete old revisions that are no longer needed'),
  );
  $form['select_active'] = array(
    '#type' => 'checkbox',
    '#title' => t('Delete Revisions now'),
  );
  $form['submit'] = [
    '#type' => 'submit',
    '#value' => t('Start deleting'),
  ];
  return $form;
}
