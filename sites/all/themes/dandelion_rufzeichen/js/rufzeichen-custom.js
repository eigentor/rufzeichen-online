(function ($) {
  
  $(document).ready(function(){

	// Toggle the mobile menu
    $('.mobile-menu-button a').toggle(function(){
      $('#navigation').slideDown('slow');
    },
    function(){
      $('#navigation').slideUp('slow');
    });


   // end document_ready()
  });

// end wrapper function
})(jQuery);