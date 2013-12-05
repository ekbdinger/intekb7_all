<?php
/**
 * @file
 * item_keys.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function item_keys_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'item_key';
  $feeds_importer->config = array(
    'name' => 'Item Key',
    'description' => 'created on 04/27/2013',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'direct' => FALSE,
        'allowed_extensions' => 'txt csv tsv xml opml',
        'directory' => 'private://feeds',
        'allowed_schemes' => array(
          0 => 'public',
          1 => 'private',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'bundle' => 'item_key',
        'update_existing' => '2',
        'expire' => '-1',
        'mappings' => array(
          0 => array(
            'source' => 'guid',
            'target' => 'guid',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'Item Key Number',
            'target' => 'field_ik_number',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'Version Code',
            'target' => 'field_ik_version_code',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'Name',
            'target' => 'title',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'Display Name',
            'target' => 'field_ik_display_name',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'Item ID',
            'target' => 'field_ik_item_id',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'Value',
            'target' => 'field_ik_value',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'Support Remarks',
            'target' => 'field_ik_support_remarks',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'Type',
            'target' => 'field_ik_type',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'Group ID',
            'target' => 'field_ik_group_id',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'UI Controlled',
            'target' => 'field_ik_ui_controlled',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'Version-Build',
            'target' => 'field_ik_version_build',
            'unique' => FALSE,
          ),
          12 => array(
            'source' => 'Section',
            'target' => 'field_ik_section',
            'unique' => FALSE,
          ),
          13 => array(
            'source' => 'Client Specific',
            'target' => 'field_ik_client_specific',
            'unique' => FALSE,
          ),
          14 => array(
            'source' => 'Affected Areas',
            'target' => 'field_ik_affected_areas',
            'unique' => FALSE,
          ),
          15 => array(
            'source' => 'Developer',
            'target' => 'field_ik_developer',
            'unique' => FALSE,
          ),
          16 => array(
            'source' => 'Status',
            'target' => 'field_ik_status',
            'unique' => FALSE,
          ),
        ),
        'input_format' => 'plain_text',
        'author' => 0,
        'authorize' => 1,
        'skip_hash_check' => 0,
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['item_key'] = $feeds_importer;

  return $export;
}
