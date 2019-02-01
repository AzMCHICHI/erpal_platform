<?php

// Plugin definition
$plugin = array(
  'title' => t('ERPAL Activity Details'),
  'category' => t('ERPAL'),
  'icon' => 'erpalactivitydetails.png',
  'theme' => 'erpalactivitydetails',
  'css' => 'erpalactivitydetails.css',
  'regions' => array(
    'header-left' => t('Header left'),
    'header-right' => t('Header right'),
    'body' => t('Body')
  ),
);
