<?php

/**
 * @file
 * Helper functions.
 */

/**
 * Get all revision that are older than current deleted revision.
 *
 * @param int $nid
 *   The node id.
 * @param int $currently_deleted_revision_id
 *   The current revision.
 *
 * @return array
 *   An array with the previous revisions.
 */
function _node_revision_bulk_delete_get_previous_revisions($nid, $currently_deleted_revision_id) {
  // Getting the node.
  $node = node_load($nid);
  // Getting all revisions of the current node, in all languages.
  $revision_ids = node_revision_list($node);
  // Adding a placeholder for the deleted revision, as our custom submit
  // function is executed after the core delete the current revision.
  $revision_ids[$currently_deleted_revision_id] = array();

  $revisions_before = array();

  if (count($revision_ids) > 0) {
    // Ordering the array.
    krsort($revision_ids);

    // Getting the prior revisions.
    $revisions_before = array_slice($revision_ids, array_search($currently_deleted_revision_id, array_keys($revision_ids)) + 1, NULL, TRUE);
  }

  return $revisions_before;
}
