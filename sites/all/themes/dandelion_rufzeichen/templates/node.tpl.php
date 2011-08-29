<div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?>">
	<div class="node-inner">
     <?php print render($title_prefix); ?>
    <?php if (!$page): ?>
      <h2<?php print $title_attributes; ?>><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h2>
    <?php endif; ?>
    <?php print render($title_suffix); ?>

    <?php print $user_picture; ?>
		    
    <?php if ($display_submitted): ?>
      <span class="submitted"><?php print $date; ?> — <?php print $name; ?> <span class="taxonomy">Tags <?php print render($content['taxonomy_vocabulary_3']); ?></span>
      <?php if ($node->comment_count != 0): ?>
      <span class="comment-count">
      <a href="<?php print url('node/' . $node->nid) ?>#comments">
       <?php print $node->comment_count; ?>
       </a> 
      </span>
      <?php endif; ?>
      
      </span>  
    <?php endif; ?>

  	<div class="content">
  	  <?php 
  	    // We hide the comments and links now so that we can render them later.
        hide($content['comments']);
        hide($content['links']);
        hide($content['taxonomy_vocabulary_3']);
        print render($content);
       ?>
  	</div>
  	
    <?php if (!empty($content['links']['terms'])): ?>
      <div class="terms"><?php print render($content['links']['terms']); ?></div>
    <?php endif;?>
  	
    <?php if (!empty($content['links'])): ?>
	    <div class="links"><?php print render($content['links']); ?></div>
	  <?php endif; ?>
        
	</div> <!-- /node-inner -->
</div> <!-- /node-->

<?php print render($content['comments']); ?>
<? dsm($vars); ?>
