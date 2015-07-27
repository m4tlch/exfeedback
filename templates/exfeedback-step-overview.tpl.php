<div id="feedback-overview">
  <div class="feedback-logo"><?php print $title ?></div>
  <div id="feedback-overview-description">
    <div id="feedback-overview-description-text">
      <h3><?php print $h3_description ?></h3>
      <!--h3 class="feedback-additional">Additional info</h3-->
      <!--div id="feedback-additional-none"><span>None</span></div-->
      <!--div id="feedback-browser-info"><span>Browser Info</span></div-->
      <!--div id="feedback-page-info"><span>Page Info</span></div-->
      <!--div id="feedback-page-structure"><span>Page Structure</span></div-->
    </div>
  </div>
  <div id="feedback-overview-screenshot">
    <h3><?php print $h3_screenshot ?></h3>
  </div>
  <div class="feedback-buttons">
    <button id="feedback-submit" class="feedback-submit-btn feedback-btn-blue">
      <?php print $button_submit ?>
    </button>
    <button id="feedback-overview-back" class="feedback-back-btn feedback-btn-gray">
      <?php print $button_back ?>
    </button>
  </div>
  <div id="feedback-overview-error"><?php print $message_error ?></div>
  <div class="feedback-wizard-close"></div>
</div>