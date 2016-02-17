(function ($) {

  // Scripte als Drupal Behaviors hinzufuegen statt als document.ready.
  // Funktioniert dann auch bei Ajax Reloads.
  Drupal.behaviors.rufzeichen_slick_slider = {
    attach: function (context, settings) {

      $('.front .view-projekte-overview .view-content').slick({
        dots: false,
        autoplay: true,
        infinite: true,
        speed: 700,
        slidesToShow: 1,
        slidesToScroll: 1,
        slide: 'div.views-row',
        responsive: [
        {
          breakpoint: 480,
          settings: {
            arrows: false,
          }
        }
      ]
      });


    } // end of attach function
  };

})(jq111); // This makes sure everything above uses Jquery 1.11
