<div class="<?php print $classes . ' ' . $zebra; ?>">
	<div class="comment-inner">
	<div class="user-picture">
     <?php print $picture ?>
     <div class="comment-author">
      <?php print $author; ?>
     </div>
    </div>
		
   <div class="comment-content">
     <h3 class="title"><?php print $title ?></h3>
    
    <?php if ($new) : ?>
      <span class="new"><?php print drupal_ucfirst($new) ?></span>
    <?php endif; ?>
    
    
	    
    <span class="submitted"><?php print $created; ?> </span>
    
    <div class="content">
      <?php 
        hide($content['links']); 
        print render($content);
        ?>
      <?php if ($signature): ?>
        <div class="signature"><?php print $signature ?></div>
      <?php endif; ?>
    </div>
    
    <?php if (!empty($content['links'])): ?>
	    <div class="links"><?php print render($content['links']); ?></div>
	  <?php endif; ?>
   </div>

  </div> <!-- /comment-inner -->
</div> <!-- /comment -->