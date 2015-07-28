<?php

/**
 * Implements hook_views_default_views().
 */
function exfeedback_views_default_views() {
  $view = new view();
  $view->name = 'feedback_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'entityform';
  $view->human_name = 'Feedback list';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Сообщения';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'ещё';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Применить';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Сбросить';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Сортировать по';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Элементов на страницу';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Все -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Пропустить';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« первая';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ предыдущая';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'следующая ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'последняя »';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Поле: Entityform Submission: Entityform submission ID */
  $handler->display->display_options['fields']['entityform_id']['id'] = 'entityform_id';
  $handler->display->display_options['fields']['entityform_id']['table'] = 'entityform';
  $handler->display->display_options['fields']['entityform_id']['field'] = 'entityform_id';
  $handler->display->display_options['fields']['entityform_id']['label'] = 'ID';
  /* Поле: Entityform Submission: Date submitted */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'entityform';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Отправлено';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'medium';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Поле: Entityform Submission: Скриншот */
  $handler->display->display_options['fields']['field_exfeedback_img']['id'] = 'field_exfeedback_img';
  $handler->display->display_options['fields']['field_exfeedback_img']['table'] = 'field_data_field_exfeedback_img';
  $handler->display->display_options['fields']['field_exfeedback_img']['field'] = 'field_exfeedback_img';
  $handler->display->display_options['fields']['field_exfeedback_img']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_exfeedback_img']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  /* Поле: Entityform Submission: Page url */
  $handler->display->display_options['fields']['field_exfeedback_url']['id'] = 'field_exfeedback_url';
  $handler->display->display_options['fields']['field_exfeedback_url']['table'] = 'field_data_field_exfeedback_url';
  $handler->display->display_options['fields']['field_exfeedback_url']['field'] = 'field_exfeedback_url';
  $handler->display->display_options['fields']['field_exfeedback_url']['label'] = 'URL';
  $handler->display->display_options['fields']['field_exfeedback_url']['click_sort_column'] = 'url';
  /* Поле: Entityform Submission: Delete Link */
  $handler->display->display_options['fields']['delete_entityform']['id'] = 'delete_entityform';
  $handler->display->display_options['fields']['delete_entityform']['table'] = 'entityform';
  $handler->display->display_options['fields']['delete_entityform']['field'] = 'delete_entityform';
  $handler->display->display_options['fields']['delete_entityform']['label'] = '';
  $handler->display->display_options['fields']['delete_entityform']['exclude'] = TRUE;
  $handler->display->display_options['fields']['delete_entityform']['element_label_colon'] = FALSE;
  /* Поле: Entityform Submission: Edit Link */
  $handler->display->display_options['fields']['edit_entityform']['id'] = 'edit_entityform';
  $handler->display->display_options['fields']['edit_entityform']['table'] = 'entityform';
  $handler->display->display_options['fields']['edit_entityform']['field'] = 'edit_entityform';
  $handler->display->display_options['fields']['edit_entityform']['label'] = 'Действия';
  $handler->display->display_options['fields']['edit_entityform']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['edit_entityform']['alter']['text'] = '[edit_entityform]</br>
[delete_entityform]';
  /* Sort criterion: Entityform Submission: Date submitted */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'entityform';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Entityform Submission: Entityform Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'entityform';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'feedback' => 'feedback',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/content/feedback-list';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Обратная связь';
  $handler->display->display_options['menu']['name'] = 'management';
  $translatables['feedback_list'] = array(
    t('Master'),
    t('Сообщения'),
    t('ещё'),
    t('Применить'),
    t('Сбросить'),
    t('Сортировать по'),
    t('Asc'),
    t('Desc'),
    t('Элементов на страницу'),
    t('- Все -'),
    t('Пропустить'),
    t('« первая'),
    t('‹ предыдущая'),
    t('следующая ›'),
    t('последняя »'),
    t('ID'),
    t('.'),
    t(','),
    t('Отправлено'),
    t('Скриншот'),
    t('URL'),
    t('Действия'),
    t('[edit_entityform]</br>
[delete_entityform]'),
    t('Page'),
  );
  $export['feedback_list'] = $view;

  return $export;
}
