<?php

/**
 * The file description. *
 * @package Pico
 * @subpackage MenuPlugin
 * @version ??
 * @author Alexandre Kaspar <xion.luhnis@gmail.com>
 *
 */
class Menu_Plugin {

    public function __construct() {
    }

    public function before_read_file_meta(&$headers){
      $headers['menu'] = 'Menu';
      $headers['menu_id'] = 'MenuID';
    }

    public function get_page_data(&$data, $page_meta){
      // transfer meta into page data
      $data['menu'] = $page_meta['menu'];
      $data['menu_id'] = $page_meta['menu_id'];
    }

    public function get_pages(&$pages, &$current_page, &$prev_page, &$next_page){
      $sorted_pages = array();
      $default_id = count($pages) + 1;
      foreach($pages as $page){
        $mid = $page['menu_id'];
        if(isset($mid)){
          $sorted_pages[$mid] = $page;
        } else {
          $sorted_pages['999' . $default_id] = $page;
          $default_id += 1;
        }
      }
      // effective sorting
      ksort($sorted_pages);
      $pages = $sorted_pages;
    }

}
