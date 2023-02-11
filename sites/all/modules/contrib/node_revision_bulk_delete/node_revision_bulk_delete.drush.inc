<?php

/**
 * @file
 * Drush commands related to the Node Revision Bulk Delete module.
 */

require_once dirname(__FILE__) . '/node_revision_bulk_delete.helpers.inc';

/**
 * Implements hook_drush_command().
 */
function node_revision_bulk_delete_drush_command() {
  $items['nrbd-delete-prior-revisions'] = array(
    'description' => dt('Delete all revisions prior to a revision.'),
    'arguments' => array(
      'nid' => dt('The id of the node which revisions will be deleted.'),
      'vid' => dt('The revision id, all prior revisions to this revision will be deleted.'),
    ),
    'aliases' => array('nrbd-dpr'),
    'examples' => array(
      'nrbd-delete-prior-revisions 1 3' => dt('Delete all revisions prior to revision id 3 of node id 1.'),
    ),
  );
  return $items;
}

/**
 * Implements hook_drush_help().
 */
function node_revision_bulk_delete_drush_help($section) {
  switch ($section) {
    case 'drush:nrbd-delete-prior-revisions':
      return dt('Define which prior revisions to which revision of which node to delete.');
  }
}

/**
 * Implements drush_hook_COMMAND_validate().
 */
function drush_node_revision_bulk_delete_nrbd_delete_prior_revisions_validate() {
  $args = func_get_args();
  // Check for only 2 arguments.
  if (count($args) != 2) {
    return drush_set_error('NODE_REVISION_BULK_DELETE_INVALID_ARGUMENT', dt('This command use two arguments.'));
  }
  // Check if the first argument is a valid node id.
  $node = node_load($args[0]);
  if (!$node) {
    return drush_set_error('NODE_REVISION_BULK_DELETE_INVALID_ARGUMENT', dt('The first argument @nid is not a valid node id.', array('@nid' => $args[0])));
  }
  // Check if the second argument is a valid revision id.
  $revisions = node_revision_list($node);
  if (!isset($revisions[$args[1]])) {
    return drush_set_error('NODE_REVISION_BULK_DELETE_INVALID_ARGUMENT', dt('The second argument @vid is not a valid revision id or doesn\'t belong to the node id @nid.', array('@vid' => $args[1], '@nid' => $args[0])));
  }
  // Check if exists prior revisions.
  if (!count(_node_revision_bulk_delete_get_previous_revisions($args[0], $args[1]))) {
    drush_log(dt('There is no revision prior to revision @vid.', array('@vid' => $args[1])), 'warning');
    return FALSE;
  }
}

/**
 * Callback for nrbd-delete-prior-revisions command.
 */
function drush_node_revision_bulk_delete_nrbd_delete_prior_revisions() {
  $args = func_get_args();

  if (drush_confirm(dt("Additionally, do you want to delete the revision @vid?", array('@vid' => $args[1])))) {
    node_revision_delete($args[1]);
    drush_print(dt('The revision @vid was sucessfully deleted.', array('@vid' => $args[1])));
  }

  // Get a list of revisions to delete.
  $revisions_before = array_keys(_node_revision_bulk_delete_get_previous_revisions($args[0], $args[1]));

  // Loop through the list of revisions, then delete them one by one.
  foreach ($revisions_before as $revision) {
    node_revision_delete($revision);
  }

  // Print out success message.
  $singular = 'One revision of node @nid was successfully deleted.';
  $plural = 'Successfully deleted @count revisions of node @nid.';
  $message = _node_revision_bulk_delete_drush_plural(count($revisions_before), $singular, $plural, array('@count' => count($revisions_before), '@nid' => $args[0]));
  drush_print($message);
}

/**
 * Formats a plural string containing a count of items.
 *
 * This function ensures that the string is pluralized correctly. Since dt() is
 * called by this function, make sure not to pass already-localized strings to
 * it.
 *
 * For example:
 * @code
 *   $output = _node_revision_bulk_delete_drush_plural($node->comment_count, '1 comment', '@count comments');
 * @endcode
 *
 * @param int $count
 *   The item count to display.
 * @param string $singular
 *   The string for the singular case. Make sure it is clear this is singular,
 *   to ease translation (e.g. use "1 new comment" instead of "1 new"). Do not
 *   use @count in the singular string.
 * @param string $plural
 *   The string for the plural case. Make sure it is clear this is plural, to
 *   ease translation. Use @count in place of the item count, as in
 *   "@count new comments".
 * @param array $args
 *   An associative array of replacements to make after translation. Instances
 *   of any key in this array are replaced with the corresponding value.
 *   Based on the first character of the key, the value is escaped and/or
 *   themed. See format_string(). Note that you do not need to include @count
 *   in this array; this replacement is done automatically for the plural case.
 * @param array $options
 *   An associative array of additional options. See dt() for allowed keys.
 *
 * @return string
 *   A translated string.
 *
 * @see dt()
 */
function _node_revision_bulk_delete_drush_plural($count, $singular, $plural, array $args = array(), array $options = array()) {
  $args['@count'] = $count;
  if ($count == 1) {
    return dt($singular, $args, $options);
  }

  // Get the plural index through the gettext formula.
  $index = (function_exists('locale_get_plural')) ? locale_get_plural($count, isset($options['langcode']) ? $options['langcode'] : NULL) : -1;
  // If the index cannot be computed, use the plural as a fallback (which
  // allows for most flexiblity with the replaceable @count value).
  if ($index < 0) {
    return dt($plural, $args, $options);
  }
  else {
    switch ($index) {
      case "0":
        return dt($singular, $args, $options);

      case "1":
        return dt($plural, $args, $options);

      default:
        unset($args['@count']);
        $args['@count[' . $index . ']'] = $count;
        return dt(strtr($plural, array('@count' => '@count[' . $index . ']')), $args, $options);
    }
  }
}
