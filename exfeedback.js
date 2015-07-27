(function ($) {

  Drupal.behaviors.exfeedback = {
    attach: function (context, settings) {
      var options = settings.exfeedback || {};
      $.feedback(options);
    }
  }
})(jQuery);