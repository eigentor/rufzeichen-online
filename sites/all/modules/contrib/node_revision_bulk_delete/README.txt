CONTENTS OF THIS FILE
---------------------

 * Introduction
 * Requirements
 * Recommended modules
 * Installation
 * Configuration
 * Maintainers


INTRODUCTION
------------

The Node Revision Bulk Delete module gives you an extra feature to delete
manually all revisions of a specific node prior a selected one.

 * For a full description of the module, visit the project page:
   https://www.drupal.org/project/node_revision_bulk_delete

 * To submit bug reports and feature suggestions, or to track changes:
   https://www.drupal.org/project/issues/search/node_revision_bulk_delete


REQUIREMENTS
------------

No special requirements.


RECOMMENDED MODULES
-------------------

 * Responsive Tables (https://www.drupal.org/project/responsive_tables):
   When enabled some table columns in the module pages will be hidden on mobile
   devices for improve the page readability.


INSTALLATION
------------

 * Install as you would normally install a contributed Drupal module.
   See: https://www.drupal.org/node/895232 for further information.


CONFIGURATION
-------------

The module has no menu or modifiable settings. There is no configuration. When
enabled, and you are deleting a revision of a node, a new checkbox will appear
in a fieldset saying: "Also delete X revisions prior to this one."; if you check
it, all the prior revisions will be deleted as well for the given node.

If you are deleting the oldest revision, the checkbox will not appear as no
prior revisions are available.

 * Drush commands

   - drush nrbd-delete-prior-revisions

     Delete all revisions prior to a revision.


MAINTAINERS
-----------

Current maintainers:
 * Adrian Cid Almaguer (adriancid) - https://www.drupal.org/u/adriancid


This project has been sponsored by:

 * Drupiter
 * Penceo
