<?php

function cptc_custom_menu(){
  
  $items['team/%/captain/score/%'] = array(
    'title' => 'Score Entry Page',
    'page callback' => 'drupal_get_form',
    'page arguments' => array('cptc_custom_score_entry_form', 1, 4),
    'access callback' => 'user_access',
    'access arguments' => array('access captain functions'),
    'type' => MENU_CALLBACK,
  );
  
  $items['helloworld/%'] = array(
    'title' => 'Hello World Page',
    'page callback' => 'drupal_get_form',
    'page arguments' => array('cptc_custom_test_form', 1),
    'access callback' => 'user_access',
    'access arguments' => array('access captain functions'),
    'type' => MENU_CALLBACK,
  );
  
  return $items;

}