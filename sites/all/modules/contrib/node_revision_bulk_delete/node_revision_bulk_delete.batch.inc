<?php

/**
 * @file
 * Batch operation functions for node revisions bulk delete.
 */

/**
 * Process for one batch step, deleting a revision.
 *
 * @param int $nid
 *   The node id.
 * @param int $revision
 *   The current revision.
 * @param array $context
 *   The context.
 */
function node_revision_bulk_delete_batch_delete_prior_revisions($nid, $revision, array &$context) {
  if (empty($context['results'])) {
    $context['results']['revisions'] = 0;
  }

  // Count the number of revisions deleted.
  $context['results']['revisions']++;
  $context['results']['node'] = $nid;
  $context['message'] = t('Processing revision: @id', array('@id' => $revision));

  node_revision_delete($revision);
}

/**
 * Finishing bulk operations.
 *
 * @param bool $success
 *   A boolean indicating the operations success.
 * @param array $results
 *   The results variables.
 * @param array $operations
 *   The operations.
 */
function node_revision_bulk_delete_batch_delete_prior_revisions_finished($success, array $results, array $operations) {
  if ($success) {
    $message = format_plural($results['revisions'], 'One prior revision deleted.', '@count prior revisions deleted.');
    drupal_set_message($message);

    // Getting the node.
    $node = node_load($results['node']);
    // Get all revisions of the current node.
    $revision_ids = node_revision_list($node);
    // In case there are no more revisions, we should be redirected to the node
    // view as the node revision page does not exist.
    if (count($revision_ids) == 1) {
      drupal_goto('node/' . $results['node']);
    }
  }
  else {
    $error_operation = reset($operations);
    drupal_set_message(t('An error occurred while processing @operation with arguments: @args', array(
      '@operation' => $error_operation[0],
      '@args' => print_r($error_operation[0], TRUE),
    )));
  }

}
