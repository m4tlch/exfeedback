<?php

/**
 *  exfeedback_admin_form()
 */
function exfeedback_admin_form($form, &$form_state) {

  $settings = _exfeedback_admin_settings();

  $form['feedback'] = array(
    '#type' => 'fieldset',
    '#title' => t('Feedback form settings'),
    '#tree' => TRUE,
    '#collapsible' => FALSE,
    '#collapsed' => FALSE,
    '#description' => t(''),
  );

  $form['feedback']['ajaxURL'] = array(
    '#type' => 'textfield',
    '#title' => t('Ajax url (String)'),
    '#default_value' => $settings['feedback']['ajaxURL'],
    '#size' => 60,
    '#maxlength' => 60,
    '#required' => TRUE,
    '#description' => t('The URL where the plugin will post the screenshot and additional informations. (JSON datatype)'),
  );

  $form['feedback']['html2canvasURL'] = array(
    '#type' => 'textfield',
    '#title' => t('Url for html2canvas.js (String)'),
    '#default_value' => $settings['feedback']['html2canvasURL'],
    '#size' => 60,
    '#maxlength' => 60,
    '#required' => TRUE,
    '#description' => t('The URL where the plugin can download html2canvas.js from.'),
  );

  $form['feedback']['initButtonText'] = array(
    '#type' => 'textfield',
    '#title' => t('Init button text (String / HTML)'),
    '#default_value' => $settings['feedback']['initButtonText'],
    '#size' => 30,
    '#maxlength' => 50,
    '#description' => t('The default button text.'),
  );

  $form['feedback']['postBrowserInfo'] = array(
    '#type' => 'checkbox',
    '#title' => t('Send Browser info'),
    '#default_value' => $settings['feedback']['postBrowserInfo'],
    '#description' => t('Whether you want your client to post their browser information (such as useragent, plugins used, etc.)'),
  );

  $form['feedback']['postHTML'] = array(
    '#type' => 'checkbox',
    '#title' => t('Send page HTML'),
    '#default_value' => $settings['feedback']['postHTML'],
    '#description' => t("Whether you want your client to post the page's HTML structure."),
  );

  $form['feedback']['postURL'] = array(
    '#type' => 'checkbox',
    '#title' => t('Send page URL'),
    '#default_value' => $settings['feedback']['postURL'],
    '#description' => t('Whether you want your client to post the URL of the page.'),
  );
  $form['feedback']['proxy'] = array(
    '#type' => 'textfield',
    '#title' => t('Proxy (String)'),
    '#default_value' => $settings['feedback']['proxy'],
    '#size' => 60,
    '#maxlength' => 512,
    '#description' => t("Url to the proxy which is to be used for loading cross-origin images. If left empty, cross-origin images won't be loaded."),
  );

  $form['feedback']['letterRendering'] = array(
    '#type' => 'checkbox',
    '#title' => t('Letter rendering'),
    '#default_value' => $settings['feedback']['letterRendering'],
    '#description' => t('Whether to render each letter seperately. Necessary if letter-spacing is used.'),
  );
  $form['feedback']['strokeStyle'] = array(
    '#type' => 'textfield',
    '#title' => t('Stroke color (String / HEX color)'),
    '#default_value' => $settings['feedback']['strokeStyle'],
    '#size' => 10,
    '#maxlength' => 20,
    '#description' => t("The color of the highlight border. You can use values either like 'black', 'red', etc. or HEX codes like '#adadad'."),
  );
  $form['feedback']['shadowColor'] = array(
    '#type' => 'textfield',
    '#title' => t('Shadow color (String / HEX color)'),
    '#default_value' => $settings['feedback']['shadowColor'],
    '#size' => 10,
    '#maxlength' => 20,
    '#description' => t('The color of the shadow.'),
  );

  $form['feedback']['shadowOffsetX'] = array(
    '#type' => 'textfield',
    '#title' => t('Shadow offset X (Integer)'),
    '#default_value' => $settings['feedback']['shadowOffsetX'],
    '#size' => 3,
    '#maxlength' => 3,
    '#description' => t('Sets the horizontal distance of the shadow from the shape.'),
  );
  $form['feedback']['shadowOffsetY'] = array(
    '#type' => 'textfield',
    '#title' => t('Shadow offset Y (Integer)'),
    '#default_value' => $settings['feedback']['shadowOffsetY'],
    '#size' => 3,
    '#maxlength' => 3,
    '#description' => t('Sets the vertical distance of the shadow from the shape.'),
  );
  $form['feedback']['shadowBlur'] = array(
    '#type' => 'textfield',
    '#title' => t('Shadow blur (Integer)'),
    '#default_value' => $settings['feedback']['shadowBlur'],
    '#size' => 3,
    '#maxlength' => 3,
    '#description' => t('The blur level for the shadow.'),
  );

  $lj_options = array(
    'bevel' => t('bevel'),
    'round' => t('round'),
    'miter' => t('miter'),
  );

  $form['feedback']['lineJoin'] = array(
    '#type' => 'select',
    '#title' => t('Canvas lineJoin'),
    '#options' => $lj_options,
    '#default_value' => $settings['feedback']['lineJoin'],
    '#description' => t('Sets the type of corner created, when two lines meet.'),
  );

  $form['feedback']['lineWidth'] = array(
    '#type' => 'textfield',
    '#title' => t('Canvas  lineWidth (Integer)'),
    '#default_value' => $settings['feedback']['lineWidth'],
    '#size' => 3,
    '#maxlength' => 3,
    '#description' => t('Sets border of the highlighted area.'),
  );
  $form['feedback']['feedbackButton'] = array(
    '#type' => 'value',
    '#title' => t('Buttons HTML class (String)'),
    '#default_value' => $settings['feedback']['feedbackButton'],
    '#size' => 50,
    '#maxlength' => 128,
    '#disabled'=>TRUE,
    '#description' => t('Define a custom button instead of the default button that appears on the lower right corner.'),
  );
  $form['feedback']['showDescriptionModal'] = array(
    '#type' => 'checkbox',
    '#title' => t('Dialog modal'),
    '#default_value' => $settings['feedback']['showDescriptionModal'],
    '#description' => t('Sets whether the next modal for entering description should appear or not'),
  );
  $form['feedback']['isDraggable'] = array(
    '#type' => 'checkbox',
    '#title' => t('Dialog Draggable'),
    '#default_value' => $settings['feedback']['isDraggable'],
    '#description' => t('Sets whether the user will be able to drag the feedback options modal or not'),
  );

  $form['feedback']['screenshotStroke'] = array(
    '#type' => 'checkbox',
    '#title' => t('screenshotStroke'),
    '#default_value' => $settings['feedback']['screenshotStroke'],
    '#description' => t('Changing to false will remove the borders from the highlighted areas when taking the screenshot.'),
  );
  $form['feedback']['highlightElement'] = array(
    '#type' => 'checkbox',
    '#title' => t('Highlight element on mouse over'),
    '#default_value' => $settings['feedback']['highlightElement'],
    '#description' => t("By default when you move your cursor over an element the plugin will temporarily highlight it until you move your cursor out of that area. I'm not exactly sure whether it's a good thing or not, but Google has it, so yeah."),
  );
  $form['feedback']['initialBox'] = array(
    '#type' => 'checkbox',
    '#title' => t('initialBox'),
    '#default_value' => $settings['feedback']['initialBox'],
    '#description' => t('By Setting this true the user will have to describe the bug/idea before being able to highlight the area.'),
  );

  $options = array(
    EXFEEDBACK_VISIBILITY_NOTLISTED => t('All pages except those listed'),
    EXFEEDBACK_VISIBILITY_LISTED => t('Only the listed pages'),
  );
  $description = t("Specify pages by using their paths. Enter one path per line. The '*' character is a wildcard. Example paths are %blog for the blog page and %blog-wildcard for every personal blog. %front is the front page.", array('%blog' => 'blog', '%blog-wildcard' => 'blog/*', '%front' => '<front>'));


  $form['visibility'] = array(
    '#type' => 'fieldset',
    '#title' => t('Visibility'),
    '#tree' => TRUE,
    '#collapsible' => FALSE,
    '#collapsed' => FALSE,
    
  );

  $form['visibility']['visibility'] = array(
    '#type' => 'radios',
    '#title' => t('Show Feedback button on specific pages'),
    '#options' => $options,
    '#default_value' => $settings['visibility']['visibility'],
  );
  $form['visibility']['pages'] = array(
    '#type' => 'textarea',
    '#title' => '<span class="element-invisible">' . t('Pages') . '</span>',
    '#default_value' => $settings['visibility']['pages'],
    '#description' => $description,
  );


  $form['actions'] = array('#type' => 'actions');
  $form['actions']['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save')
  );
  return $form;
}

/**
 *  exfeedback_admin_form_submit()
 */
function exfeedback_admin_form_submit($form, &$form_state) {
  $default = _exfeedback_settings_default();
  $values = array_intersect_key($form_state['values'], $default);
  _exfeedback_admin_settings_save($values);
}
