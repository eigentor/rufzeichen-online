/*
 * Adds dropshadow styles to IE for the elements
 * - h2
 */

(function ($) {
  Drupal.behaviors.undpaulDropshadow = {
    attach: function(context) {
      $('.view').dropShadow({
        left: -1,
        top: 2,
        blur: 2,
        opacity: 0.5,
        color: '#ddd'
      });
    }
  };
})(jQuery);