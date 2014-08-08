<?php

/**
 * The file description. *
 * @package Pico
 * @subpackage SortByMenuID
 * @version ??
 * @author Alexandre Kaspar <xion.luhnis@gmail.com>
 *
 */
class Sort_By_MenuID {

    public function __construct() {
    }

    public function before_read_file_meta(&$headers){
      $headers['menu_id'] = 'MenuID';
    }

    public function get_page_data(&$data, $page_meta){
      $data['menu_id'] = $page_meta['menu_id']; // transfer meta into page data
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
