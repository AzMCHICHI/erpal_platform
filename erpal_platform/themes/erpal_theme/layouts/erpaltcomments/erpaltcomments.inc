<?php

// Plugin definition
$plugin = array(
  'title' => t('ERPAL Comments'),
  'category' => t('ERPAL'),
  'icon' => 'erpaltcomments.png',
  'theme' => 'erpaltcomments',
  'css' => 'erpaltcomments.css',
  'regions' => array(
    'avatar' => t('Avatar'),
    'header' => t('Header'),
    'body' => t('Body'),
    'footer' => t('Footer')
  ),
);
