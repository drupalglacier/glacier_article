<?php
/**
 * @file
 * glacier_article.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function glacier_article_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|article|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'article';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'author' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'author',
    ),
  );
  $export['node|article|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function glacier_article_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|article|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'article';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'media';
  $ds_layout->settings = array(
    'regions' => array(
      'header' => array(
        0 => 'title_field',
        1 => 'field_article_date',
        2 => 'author',
      ),
      'figure' => array(
        3 => 'field_article_image',
      ),
      'body' => array(
        4 => 'body',
      ),
    ),
    'fields' => array(
      'title_field' => 'header',
      'field_article_date' => 'header',
      'author' => 'header',
      'field_article_image' => 'figure',
      'body' => 'body',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'header' => 'header',
      'figure' => 'div',
      'body' => 'div',
      'footer' => 'footer',
    ),
    'layout_wrapper' => 'article',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|article|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|article|form';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'article';
  $ds_layout->view_mode = 'form';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_content',
        1 => 'title_field',
        2 => 'field_article_date',
        3 => 'body',
        4 => 'field_article_image',
      ),
      'hidden' => array(
        5 => 'rabbit_hole',
        6 => 'path',
        7 => 'xmlsitemap',
        8 => 'metatags',
        9 => '_add_existing_field',
      ),
    ),
    'fields' => array(
      'group_content' => 'ds_content',
      'title_field' => 'ds_content',
      'field_article_date' => 'ds_content',
      'body' => 'ds_content',
      'field_article_image' => 'ds_content',
      'rabbit_hole' => 'hidden',
      'path' => 'hidden',
      'xmlsitemap' => 'hidden',
      'metatags' => 'hidden',
      '_add_existing_field' => 'hidden',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|article|form'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|article|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'article';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'media';
  $ds_layout->settings = array(
    'regions' => array(
      'figure' => array(
        0 => 'field_article_image',
      ),
      'body' => array(
        1 => 'title_field',
        2 => 'field_article_date',
        3 => 'body',
      ),
    ),
    'fields' => array(
      'field_article_image' => 'figure',
      'title_field' => 'body',
      'field_article_date' => 'body',
      'body' => 'body',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'header' => 'div',
      'figure' => 'div',
      'body' => 'div',
      'footer' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|article|teaser'] = $ds_layout;

  return $export;
}
