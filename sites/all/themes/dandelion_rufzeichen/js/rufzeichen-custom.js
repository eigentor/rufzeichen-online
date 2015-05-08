(function ($) {

// Scripte als Drupal Behaviors hinzufuegen statt als document.ready.
// Funktioniert dann auch bei Ajax Reloads.
  Drupal.behaviors.oebv = {
    attach: function (context, settings) {

// Toggle the mobile menu
$('.mobile-menu-button a').toggle(function(){
  $('#main-menu-mobile').slideDown('slow');
},
function(){
  $('#main-menu-mobile').slideUp('slow');
});

/**
 * Wrapper function for Google Analytics events
 * From: https://www.commercialprogression.com/post/google-analytics-events-drupal
 */

function ga_event(params) {
  params.splice(0, 0, "_trackEvent");
  if (typeof _gaq === "object") {
    _gaq.push(params);
  }
};
//
// Capture Next and Prev events in Slideshow
$(".front .flex-direction-nav a").bind('click', function(e){
  if ($(this).hasClass("flex-prev")) {
    ga_event(['FP Slideshow', 'Arrow Left']);
    _gaq.push(['_trackEvent', 'Slider', 'Navigation', 'Slide back']);
  }
  else {
    ga_event(['FP Slideshow', 'Arrow Right']);
  }
});

$('a.flex-prev').mouseover(function(){
  //_gaq.push(['_trackEvent', 'Inhalt', 'Ueberschrift', 'Klick mal was']);
  ga_event(['Slideshow-Zaehler', 'Zahl']);
});

$('#front-main-text h2').mouseover(function(){
  //_gaq.push(['_trackEvent', 'Inhalt', 'Ueberschrift', 'Klick mal was']);
  ga_event(['Ueberschrift', 'Hover']);
});


    } // end of attach function
  };

})(jQuery);