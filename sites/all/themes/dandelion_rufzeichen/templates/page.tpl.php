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
      <?php if ($page['mobile_menu_controls']): ?>
        <div id="mobile-menu-region">
          <?php print render($page['mobile_menu_controls']); ?>
        </div>
      <?php endif; ?>

       <div id="navigation" class="menu">
       <?php print render($page['main_menu']); ?>
      </div>
     </div>

  <!-- special region for the main menu in mobile view -->
  <?php if ($page['main_menu_mobile']): ?>
      <div id="main-menu-mobile">
        <?php print render($page['main_menu_mobile']); ?>
      </div>
  <?php endif; ?>
  
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


    <?php if ($page['sidebar_second']): ?>
      <div id="sidebar-second" class="column sidebar second">
        <div id="sidebar-second-inner" class="inner">
          <?php print render($page['sidebar_second']); ?>
        </div>
      </div>
    <?php endif; ?> <!-- /sidebar-second -->

  </div> <!-- /main -->

  <!-- ______________________ FOOTER _______________________ -->
   
   <?php if ($page['footer_top']): ?>
    <div id="footer-top" class="clearfix">
     <div class="footer-top-inner clearfix">
       <?php print render($page['footer_top']); ?>
     </div>
      
    </div> <!-- /footer -->
  <?php endif; ?>

   <?php if ($page['footer']): ?>
    <div id="footer" class="clearfix">
     <div class="footer-inner clearfix">
       <?php print render($page['footer']); ?>
     </div>
      
    </div> <!-- /footer -->
  <?php endif; ?>
 
  <div id="footer-bottom" class="clearfix">
  <div class="footer-bottom-inner" class="clearfix">
    <div id="footer-left">
    	&copy; rufzeichen <?php print date("Y");?>&nbsp;&nbsp;&nbsp;&nbsp; Danke für das Dandelion Theme an <a href="http://themeforest.net/user/pexeto" target="_blank">Pexeto</a>
    </div>
   <div id="footer-bottom-region">
   	  <?php print render($page['footer_bottom']); ?>
   </div>
  </div>
   
  </div>
   

</div>
</div> <!-- /page -->

<script type="text/javascript">

  var _gaq = _gaq || [];
  _gaq.push(['_setAccount', 'UA-3262151-1']);
  _gaq.push(['_trackPageview']);

  (function() {
    var ga = document.createElement('script'); ga.type = 'text/javascript'; ga.async = true;
    ga.src = ('https:' == document.location.protocol ? 'https://ssl' : 'http://www') + '.google-analytics.com/ga.js';
    var s = document.getElementsByTagName('script')[0]; s.parentNode.insertBefore(ga, s);
  })();

</script>