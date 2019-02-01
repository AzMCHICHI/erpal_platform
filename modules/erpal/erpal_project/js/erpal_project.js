/**
 * @file erpal_project.js
 *
 * Provides some client-side functionality for the ERPAL Project module.
 */
(function ($) {
  Drupal.behaviors.erpalProject = {
    attach: function(context) {

      // Use custom datepicker instead BEF, because there are no ability to change date format.
      var $datepickers = $('.field-datepicker', context);
      if ($datepickers.length > 0) {
        $datepickers.datepicker( { dateFormat: 'dd.mm.yy' } );
      }
    }
  };

}) (jQuery);
