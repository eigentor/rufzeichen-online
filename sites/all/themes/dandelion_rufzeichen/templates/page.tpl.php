<div id="page-wrapper" class="clearfix">
 <div id="page" class="<?php print $classes; ?>"<?php print $attributes; ?>>

  <!-- ______________________ HEADER _______________________ -->

  
     <div id="header-top">
      <div id="logo">
       <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home" class="logo">
        <img src="<?php print url($directory) ?>/images/new-adapted/rufzeichen-logo.png" alt="<?php print t('Home'); ?>"/>
      </a>
       <?php if ($site_slogan): ?>
          <div id="site-slogan"><?php print $site_slogan; ?></div>
        <?php endif; ?>
      </div>
       <div id="navigation" class="menu">
       <?php print render($page['main_menu']); ?>
      </div>
     </div>

  
  <div id="header">
  <div id="header-top-line">
  </div>    

    <?php if ($page['header']): ?>
      <div id="header-region">
        <?php print render($page['header']); ?>
      </div>
    <?php endif; ?>

  </div> <!-- /header -->

  <!-- ______________________ MAIN _______________________ -->

  <div id="main" class="clearfix content-gradient">

    <div id="content">
      <div id="content-inner" class="inner column center">

	      <?php
				    $path = isset($_GET['q']) ? $_GET['q'] : '<front>';
            $link = url($path, array('absolute' => TRUE));
            print $link;
				?>      
      	
				<a href="https://www.xing.com/app/user?op=share;url=http://<?php print $link; ?>" target="_blank" title="Ihren XING-Kontakten zeigen">
<img src="http://www.xing.com/img/n/xing_icon_16x16.png" width="16" height="16" alt="Ihren XING-Kontakten zeigen" />
</a>

        <?php if ($breadcrumb || $title|| $messages || $tabs || $action_links): ?>
          <div id="content-header">

            <?php print $breadcrumb; ?>

            <?php if ($page['highlighted']): ?>
              <div id="highlight"><?php print render($page['highlighted']) ?></div>
            <?php endif; ?>

            <?php if ($title): ?>
              <h1 class="title"><?php print $title; ?></h1>
            <?php endif; ?>

            <?php print render($title_suffix); ?>
            <?php print $messages; ?>
            <?php print render($page['help']); ?>

            <?php if ($tabs['#primary'] != ''): ?>
              <div class="tabs"><?php print render($tabs); ?></div>
            <?php endif; ?>

            <?php if ($action_links): ?>
              <ul class="action-links"><?php print render($action_links); ?></ul>
            <?php endif; ?>
            
          </div> <!-- /#content-header -->
        <?php endif; ?>

        <div id="content-area">
          <?php print render($page['content']) ?>
        </div>

        <?php print $feed_icons; ?>

      </div>
    </div> <!-- /content-inner /content -->


    <?php if ($page['sidebar_first']): ?>
      <div id="sidebar-first" class="column sidebar first">
        <div id="sidebar-first-inner" class="inner">
          <?php print render($page['sidebar_first']); ?>
        </div>
      </div>
    <?php endif; ?> <!-- /sidebar-first -->

    <?php if ($page['sidebar_second']): ?>
      <div id="sidebar-second" class="column sidebar second">
        <div id="sidebar-second-inner" class="inner">
          <?php print render($page['sidebar_second']); ?>
        </div>
      </div>
    <?php endif; ?> <!-- /sidebar-second -->

  </div> <!-- /main -->

  <!-- ______________________ FOOTER _______________________ -->
   <?php if ($page['footer']): ?>
    <div id="footer" class="clearfix">
     <div class="footer-inner clearfix">
       <?php print render($page['footer']); ?>
     </div>
      
    </div> <!-- /footer -->
  <?php endif; ?>
 
  <div id="footer-bottom" class="clearfix">
  <div class="footer-bottom-inner" class="clearfix">
    &copy; rufzeichen <?php print date("Y");?>&nbsp;&nbsp;&nbsp;&nbsp; Danke für das Dandelion Theme an <a href="http://themeforest.net/user/pexeto" target="_blank">Pexeto</a>
  </div>
   
  </div>
   

</div>
</div> <!-- /page -->