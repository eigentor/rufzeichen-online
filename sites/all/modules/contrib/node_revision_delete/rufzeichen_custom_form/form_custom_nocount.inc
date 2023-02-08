<?php

function form_custom_nocount($form_state) {
  $form['check_me'] = array(
    '#type' => 'textfield',
    '#title' => t('Subject'),
  );

  return $form;
}
