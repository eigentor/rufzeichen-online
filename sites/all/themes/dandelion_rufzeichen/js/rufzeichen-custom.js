(function ($) {
  Drupal.behaviors.rufzeichen_theme = {
    attach: function (context, settings) {

// Toggle the mobile menu
$('.mobile-menu-button a').toggle(function(){
  $('#main-menu-mobile').slideDown('slow');
},
function(){
  $('#main-menu-mobile').slideUp('slow');
});

$('#front-main-text h2').click(function(){
  //_gaq.push(['_trackEvent', 'Inhalt', 'Ueberschrift', 'Klick mal was']);
  ga_event(['Ueberschrift', 'Hover']);
});

function resize_slideshow() {
  var slideshow_img_height = $('.node-type-projekt .view-images-project .views-slideshow-cycle-main-frame .field-content img').height() + 10;
  $('.node-type-projekt .view-images-project .views-slideshow-cycle-main-frame').height(slideshow_img_height);
  var slideshow_img_width = $('.node-type-projekt .view-images-project .views-slideshow-cycle-main-frame .field-content img').width();
  $('.node-type-projekt .view-images-project .views-slideshow-cycle-main-frame').width(slideshow_img_width);
}

$(window).resize(function(){
   resize_slideshow();
})




    } // end of attach function
  };

})(jQuery);