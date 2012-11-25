<?php
/**
 * @file views-view-fields.tpl.php
 * Default simple view template to all the fields as a row.
 *
 * - $view: The view in use.
 * - $fields: an array of $field objects. Each one contains:
 *   - $field->content: The output of the field.
 *   - $field->raw: The raw data for the field, if it exists. This is NOT output safe.
 *   - $field->class: The safe class id to use.
 *   - $field->handler: The Views field handler object controlling this field. Do not use
 *     var_export to dump this object, as it can't handle the recursion.
 *   - $field->inline: Whether or not the field should be inline.
 *   - $field->inline_html: either div or span based on the above flag.
 *   - $field->wrapper_prefix: A complete wrapper containing the inline_html to use.
 *   - $field->wrapper_suffix: The closing tag for the wrapper.
 *   - $field->separator: an optional separator that may appear before a field.
 *   - $field->label: The wrap label text to use.
 *   - $field->label_html: The full HTML of the label to use including
 *     configured element type.
 * - $row: The raw result object from the query, with all data it fetched.
 *
 * @ingroup views_templates
 */

$options['bt_rufzeichen_projects_page'] = array(
      'cssSelect' => '.beautytips',
      'trigger' => array( 'click',/*'mouseover','mouseout'*/),
      'width' => 350,
      'style' => 'hulu',
      'shrinkToFit' => 'true',
      'positions' => array('top', 'bottom'),
	  'overlap' => '1',
	  'spikeGirth' => '15',
	  'spikeLength' => '10',
	  'shadowBlur' => '5',
	  'shadowColor' => '#666',
	  'shadowOffsetX' => '1',   
      'shadowOffsetY' => '1',
      'strokeStyle' => '#888',
      'noShadowOpts' => array('strokeStyle' => '#444'),
    );
    beautytips_add_beautytips($options); 

// Get the body value and strip all HTML from it
$short_description = strip_tags(render($row->field_body));
// Shorten the text and do it only on a word boundary
if (preg_match('/^.{1,120}\b/s', $short_description, $match))
{
    $short_description = $match[0] . '...';
}   
 
$beautytip_content = render($row->field_field_project_images_1);
$beautytip_content .= '<h3>' . $row->node_title . '</h3>';
$beautytip_content .= $short_description; 

dpm ($short_description);
?>

<?php foreach ($fields as $id => $field): ?>
  <?php if (!empty($field->separator)): ?>
    <?php print $field->separator; ?>
  <?php endif; ?>


  <?php print $field->wrapper_prefix; ?>
    <?php print $field->label_html; ?>
    <div>
    <?php print $field->content; ?>
    </div>
  <?php print $field->wrapper_suffix; ?>
<?php endforeach; ?>