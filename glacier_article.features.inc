<?php
/**
 * @file
 * glacier_article.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function glacier_article_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function glacier_article_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function glacier_article_image_default_styles() {
  $styles = array();

  // Exported image style: article_image_full_size_l.
  $styles['article_image_full_size_l'] = array(
    'label' => 'Article image: full [l]',
    'effects' => array(
      1 => array(
        'name' => 'focal_point_scale_and_crop',
        'data' => array(
          'width' => 460,
          'height' => 310,
          'focal_point_advanced' => array(
            'shift_x' => '',
            'shift_y' => '',
          ),
        ),
        'weight' => 1,
      ),
      2 => array(
        'name' => 'image_progressive_effect',
        'data' => array(),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: article_image_teaser_size_l.
  $styles['article_image_teaser_size_l'] = array(
    'label' => 'Article image: teaser [l]',
    'effects' => array(
      3 => array(
        'name' => 'focal_point_scale_and_crop',
        'data' => array(
          'width' => 280,
          'height' => 190,
          'focal_point_advanced' => array(
            'shift_x' => '',
            'shift_y' => '',
          ),
        ),
        'weight' => 1,
      ),
      4 => array(
        'name' => 'image_progressive_effect',
        'data' => array(),
        'weight' => 2,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function glacier_article_node_info() {
  $items = array(
    'article' => array(
      'name' => t('Article'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
