(function ($) {
  
  $(document).ready(function(){

	// Toggle the mobile menu
    $('.mobile-menu-button a').toggle(function(){
      $('#main-menu-mobile').slideDown('slow');
    },
    function(){
      $('#main-menu-mobile').slideUp('slow');
    });


   // end document_ready()
  });

// end wrapper function
})(jQuery);