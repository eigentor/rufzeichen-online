(function ($) {
  
  $(document).ready(function(){ 

    // disable colorbox if the window is smaller than 700px
    if (window.matchMedia) {
      // Establishing media check
        width700Check = window.matchMedia("(max-width: 700px)");
        if (width700Check.matches){
        $.colorbox.remove();
        $(".colorbox").click(function(e){
          e.preventDefault();
        });
        $(".overview-thumb-wrapper").removeAttr("bt-xtitle");        
      }
    }
  }); //document.ready

})(jQuery); 