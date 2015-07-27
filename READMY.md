exFeedback
======
Предоставляет функционал, подобный [Google Feedback](http://www.google.com/tools/feedback/intl/ru/).

###Описание:
1.Выводит на странице кнопку "Feedback" (текст кнопки настраивается), при клике на которой
открывается форма выделения подсветкой необходимых регионов страницы текущей страницы.
2.На следующем шаге генерируется скриншот страницы с выделеными областями, и выводиться 
текстовое поле для коментария к скриншоту.
3.При сохранении формы на сервер отправляется:
 - url текущей страницы
 - сгенерированный скриншот текущей страницы
 - коментарий к скриншоту
 - html-код текущей страницы
 - Информация о браузере пользователя, отправившего сообщение.
4.На сервере полученная информация сохраняется в сущность "Feedback" типа "entityform".

##Использованы js-библиотеки
-------------
1. [feedback.js](https://github.com/ivoviz/feedback)
2. [html2canvas.js](https://github.com/niklasvh/html2canvas)
Файлы библиотек в составе модуля.

##Установка
-------------
1.Загружаем модуль в папку /sites/all/modules
2.Загружаем зависимости модуля (если еще не установлены):
 - [features](https://www.drupal.org/project/features)
 - [link](https://www.drupal.org/project/link)
 - [entityform](https://www.drupal.org/project/entityform)
 - [image](https://www.drupal.org/project/image)
 - [entity](https://www.drupal.org/project/entity)
 - [views](https://www.drupal.org/project/views)
3.Модуль "exfeedback_feathure" уже находиться в папке модуля "exFeedback".
4.Открываем страницу управления модулями вашего сайта ( /admin/modules )
5.Активируем модуль "exFeedback" и сохраняем изменения.
6.Все

##Настройка модуля
-------------
1.Конфигурация -> Разработка -> Обратная связь
/admin/config/development/feedback
Тут настраиваются параметры библиотеки-плагина feedback.js
В секции "Видимость" настраивается видимость кнопки на различных страницах (как блоки)

2.Содержимое -> Обратная связь
/admin/content/feedback-list
Тут модулем views выводятся сохраненные сообщения.

3.Пользователи -> Прав доступа
/admin/people/permissions
Секция "Feedback"
Установить для ролей настройки доступа:
1.Доступ к настройкам ExFeedback - например для администраторов.
2.Выводить кнопку ExFeedback для роли - например для тестеров.

##TODO
---------------------
1.Разработать функционал, для "приема" сообщений со сторонних сайтов как на Drupal так и других систем,
путем вставки в html-код страниц сторонних сайтов "специального" кода.
2.Улучшить юзабилити и функционал формы отправки сообщений:
 - Минимизация формы при пометке областей страницы.
 - Автоматическая категоризация сообщений по словарю таксономии.
 - Предоставление возможности пользователю просматривать "историю" сообщений прямо на форме отправки сообщения
   ,отправленных с текущей страницы. 


==============
Автор: [orion76](http://www.drupal.ru/username/orion76), email: gpb@yandex.ru  
Лицензия: [GPL v3](http://choosealicense.com/licenses/gpl-v3/)