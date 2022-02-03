<h1 align="center"><code>ШКОЛА 21</code></h1>

![42 School](./03_Norme____(%D0%9D%D0%BE%D1%80%D0%BC%D1%8B_%D0%B8_%D0%9F%D1%80%D0%B0%D0%B2%D0%B8%D0%BB%D0%B0_%D0%A8%D0%BA%D0%BE%D0%BB%D1%8B)/src/header/header_004_.png)


> ###### _Chose language: [[ en ]](README.md) [[ ru ]](README_ru.md)_

- [Введение](#введение)
- [0. Документация по школе](#0-документация-по-школе)
- [1. Бассейн по языку Си](#1-бассейн-по-языку-си)
- [2. Основное обучение](#2-основное-обучение)
  - [Общая ветвь](#global---общая-ветвь)
  - [Ветвь UNIX](#ветвь-unix)
  - [Ветвь Алгоритмов](#ветвь-алгоритмов)
  - [Системное & Сетевое Администрирование](#системное--сетевое-администрирование)


# Введение #

Этот репозиторий содержит ВСЕ ЗАДАНИЯ по программе обучения от [французской школы программирования `Ecole 42`](https://www.42.fr/).

Проекты и задания позволят вам самостоятельно развить навыки программирования, а практический опыт и знания, полученные при выполнении заданий и проектов Школы 42, дадут вам необходимую основу для профессиональной интеграции, помогая с нуля получить востребованную профессию. 

Последовательно двигаясь по направлениям, языкам и учебным проектам Школы 42, используя [карту проектов `Holy Graph`](./00_Projects__(%D0%9E%D1%81%D0%BD%D0%BE%D0%B2%D0%BD%D0%BE%D0%B5_%D0%9E%D0%B1%D1%83%D1%87%D0%B5%D0%BD%D0%B8%D0%B5)/Holy_Graph.png), вы сформируете у себя фундаментальные технические навыки:

- Навыки системного программирования.
- Знание и понимание сути операционных систем, сетей, облаков и содержащихся в них служб.
- Навыки системного и сетевого администрирования.
- Навыки информационной безопасности.
- Навыки по AI.
- Навыки Mobile Dev.
- Навыки работы с графикой.
- Навыки WEB разработки.
- Навыки Network.
- Навыки БД и Данных.
- и т.д.

Программа обучения Школы 42 индивидуализирована. Здесь каждый прогрессирует сам по себе, в своем собственном темпе, а не в соответствии со всем классом студентов (где самый поздний элемент замедляет работу всей группы), получая таким образом своё собственное понимание парадигм программирования.
 


# 0. ДОКУМЕНТАЦИЯ ПО ШКОЛЕ #

Здесь вы сможете ознакомиться с правилами, действующими в стенах Школы 42, узнаете о самом учебном курсе, прочтете о стандартах, по которым нужно будет писать код при решении заданий и проектов, а также же увидите все то, что поможет вам начать обучение програмированию по программе Школы 42.

 * Описание учебного курса школы: [[ en ]](./03_Norme____(%D0%9D%D0%BE%D1%80%D0%BC%D1%8B_%D0%B8_%D0%9F%D1%80%D0%B0%D0%B2%D0%B8%D0%BB%D0%B0_%D0%A8%D0%BA%D0%BE%D0%BB%D1%8B)/cursus_manual.en.pdf) [[ ru ]](./03_Norme____(%D0%9D%D0%BE%D1%80%D0%BC%D1%8B_%D0%B8_%D0%9F%D1%80%D0%B0%D0%B2%D0%B8%D0%BB%D0%B0_%D0%A8%D0%BA%D0%BE%D0%BB%D1%8B)/cursus_manual.ru.md)

 * Информация о самой системе `peer-to-peer` обучения: [[ en ]](./03_Norme____(%D0%9D%D0%BE%D1%80%D0%BC%D1%8B_%D0%B8_%D0%9F%D1%80%D0%B0%D0%B2%D0%B8%D0%BB%D0%B0_%D0%A8%D0%BA%D0%BE%D0%BB%D1%8B)/the_art_of_peer_evaluation.EN.pdf) [[ ru ]](./03_Norme____(%D0%9D%D0%BE%D1%80%D0%BC%D1%8B_%D0%B8_%D0%9F%D1%80%D0%B0%D0%B2%D0%B8%D0%BB%D0%B0_%D0%A8%D0%BA%D0%BE%D0%BB%D1%8B)/the_art_of_peer_evaluation.RU.md)

 * Подсказки по `Git` для взаимодействия с репозиторием в `Vogsphere`: [[ fr ]](./03_Norme____(%D0%9D%D0%BE%D1%80%D0%BC%D1%8B_%D0%B8_%D0%9F%D1%80%D0%B0%D0%B2%D0%B8%D0%BB%D0%B0_%D0%A8%D0%BA%D0%BE%D0%BB%D1%8B)/vogsphere.git.EN.pdf) [[ ru ]](./03_Norme____(%D0%9D%D0%BE%D1%80%D0%BC%D1%8B_%D0%B8_%D0%9F%D1%80%D0%B0%D0%B2%D0%B8%D0%BB%D0%B0_%D0%A8%D0%BA%D0%BE%D0%BB%D1%8B)/vogsphere.git.RU.md)

 * Интерактивный тур, который познакомит вас с основами Git [[ru]](https://githowto.com/ru)

 * Нормы, описывающие то, как нужно писать код: [[ fr ]](./03_Norme____(%D0%9D%D0%BE%D1%80%D0%BC%D1%8B_%D0%B8_%D0%9F%D1%80%D0%B0%D0%B2%D0%B8%D0%BB%D0%B0_%D0%A8%D0%BA%D0%BE%D0%BB%D1%8B)/norme_1_8.FR.pdf) [[ ru ]](./03_Norme____(%D0%9D%D0%BE%D1%80%D0%BC%D1%8B_%D0%B8_%D0%9F%D1%80%D0%B0%D0%B2%D0%B8%D0%BB%D0%B0_%D0%A8%D0%BA%D0%BE%D0%BB%D1%8B)/norme_1_8.RU.md)

 * Проверка кода через `Norminette` [[ ru ]](./03_Norme____(%D0%9D%D0%BE%D1%80%D0%BC%D1%8B_%D0%B8_%D0%9F%D1%80%D0%B0%D0%B2%D0%B8%D0%BB%D0%B0_%D0%A8%D0%BA%D0%BE%D0%BB%D1%8B)/code-check_norminette.md)

 * 10 правил, для тех кто начинает плавать в бассейне [[ ru ]](./03_Norme____(%D0%9D%D0%BE%D1%80%D0%BC%D1%8B_%D0%B8_%D0%9F%D1%80%D0%B0%D0%B2%D0%B8%D0%BB%D0%B0_%D0%A8%D0%BA%D0%BE%D0%BB%D1%8B)/10_rules_for_piscine.md)

 * Видеокурс по языку Си(для тех кто начинает бассейн с нуля) [[ ru ]](https://www.youtube.com/watch?v=kCYT19xs8mE&list=PLG9dLrY9JZKgXfVYlg_0lq6s-i5r0Lw0w&ab_channel=GenaANTG) 

 * Очень хорошо составленые видеоуроки по языку Си на английском языке (используйте яндекс браузер для просмотра этих видео на русском языке )[[ en ]] (https://www.youtube.com/playlist?list=PLBlnK6fEyqRhX6r2uhhlubuF5QextdCSM)

<details>
<summary> Список упражнений по программированию на языке Cи: </summary>

0) https://fresh2refresh.com/c-programming/
1) https://www.sanfoundry.com/simple-c-programs/
2) https://www.w3resource.com/c-programming-exercises/file-handling/index.php
3) http://www.c4learn.com/
4) https://www.tutorialspoint.com/learn_c_by_examples/index.htm
5) https://www.learn-c.org/
6) https://beginnersbook.com/2015/02/simple-c-programs/
7) https://www.programmingsimplified.com/c-program-examples

</details>

---

> Для ускорения процесса перевода и понимания содержимого, скачанных на компьютер `pdf` файлов с заданиями, используйте кроссплатформенный перевочик текста [`Crow Translate`](https://crow-translate.github.io/).(Помните, что символ перевода текста на следующую строку может восприниматься переводчиками как конец предложения!)
 
---

> #### (!) Не торопитесь выполнять бассейн по Си, пока не прочли документацию.

---


# 1. БАССЕЙН ПО ЯЗЫКУ СИ #

Именно с этого бассейна начнётся обучение программированию в Школе 42.
- Бассейн по Си: [[ en ]](./00_Piscine_C_(%D0%98%D1%81%D0%BF%D1%8B%D1%82%D0%B0%D1%82%D0%B5%D0%BB%D1%8C%D0%BD%D1%8B%D0%B9_%D0%91%D0%B0%D1%81%D1%81%D0%B5%D0%B9%D0%BD_%D0%A8%D0%BA%D0%BE%D0%BB%D1%8B))
- Экзаменационные задания начального бассейна по Си: [[ en ][ fr ][ ro ]](./00_Piscine_C_(%D0%98%D1%81%D0%BF%D1%8B%D1%82%D0%B0%D1%82%D0%B5%D0%BB%D1%8C%D0%BD%D1%8B%D0%B9_%D0%91%D0%B0%D1%81%D1%81%D0%B5%D0%B9%D0%BD_%D0%A8%D0%BA%D0%BE%D0%BB%D1%8B)/Exam_C)
- Готовые и закомментированные решения заданий бассейна по Си: [[ ru ][ en ]](https://github.com/evgenkarlson/COMPLETED_PISCINE_C)

Здесь вас будет ждать полное погружение в глубокую часть кода, которое позволит по-настоящему открыть для себя школу, ее уникальный метод обучения и, прежде всего, что такое программирование на самом деле.

Каждый день бассейна вы будете получать порцию заданий (обычно 10 – 25), выстроенных по нарастающей сложности. И каждый день вы будете проходить новую тему и новые особености языка, которые будете понимать и запоминать, выполняя задания этого дня. 

Чтобы помочь в них разобраться вам предоставляются обучающие видео на 10-30 минут с теорией и примерами(используйте в плеере функцию субтитров и их перевода на нужный вам язык), но, как правило, этого никогда не будет достаточно. Поэтому всю нужную информацию для обучения вы ищите самостоятельно через интернет. 

С первого же дня вы сталкиваетесь не просто со сложными задачами, а с целыми областями знаний, о существовании которых вы могли даже не знать. Таким образом, какой бы высокий начальный уровень у вас ни был, вы обязательно встретитесь с заданием, которое точно вызовет затруднения. Увидя его, вы сначала войдете в ступор, но потом, путем неимоверных усилий, совершая череду ошибок, вы все-таки справляетесь с заданием и приобретаете навык, который становится привычным инструментом. Бассейн станет испытанием на прочность для тех, кто решит начать путь программирования, чтобы определить наиболее мотивированных.

Помните, что изучение языка программирования C является основным для изучения всех других языков программирования, таких как C++, Java, Python и т.д. Потому что все другие продвинутые языки программирования были получены только на основе концепций языка C.

---

> #### (!) Не будьте дураком и не торопитесь переходить к основному обучению, пока не прошли и полностью не усволили материал бассейна по Си.

---


# 2. ОСНОВНОЕ ОБУЧЕНИЕ #

[Проекты основного обучения](./00_Projects__(%D0%9E%D1%81%D0%BD%D0%BE%D0%B2%D0%BD%D0%BE%D0%B5_%D0%9E%D0%B1%D1%83%D1%87%D0%B5%D0%BD%D0%B8%D0%B5)/)  представляют собой следующий этап обучения программированию. Все они сгруппированы по направлениям, которые представлены в виде ветвей. Помните, что каждый последующий проект выбранной вами ветки сложнее предыдущего и может быть решен только с помощью навыков полученных в предыдущих проектах.

Для продвижения по заданиям/проектам основного обучения Школы 42 используйте [карту проектов `Holy Graph`](./00_Projects__(%D0%9E%D1%81%D0%BD%D0%BE%D0%B2%D0%BD%D0%BE%D0%B5_%D0%9E%D0%B1%D1%83%D1%87%D0%B5%D0%BD%D0%B8%D0%B5)/Holy_Graph.png) и [наглядную карту направлений `highlighting_branches`](./00_Projects__(%D0%9E%D1%81%D0%BD%D0%BE%D0%B2%D0%BD%D0%BE%D0%B5_%D0%9E%D0%B1%D1%83%D1%87%D0%B5%D0%BD%D0%B8%D0%B5)/highlighting_branches_Holy_Graph.gif)

---
> ### [[GLOBAL - Общая ветвь]](./00_Projects__(%D0%9E%D1%81%D0%BD%D0%BE%D0%B2%D0%BD%D0%BE%D0%B5_%D0%9E%D0%B1%D1%83%D1%87%D0%B5%D0%BD%D0%B8%D0%B5)/00_Global_(begin_cadet)/)
---
>> #### С этой ветки начинается основное обучение.
> - [[>]](./00_Projects__(%D0%9E%D1%81%D0%BD%D0%BE%D0%B2%D0%BD%D0%BE%D0%B5_%D0%9E%D0%B1%D1%83%D1%87%D0%B5%D0%BD%D0%B8%D0%B5)/00_Global_(begin_cadet)/00____42_commandements) 42_commandements
> - [[>]](./00_Projects__(%D0%9E%D1%81%D0%BD%D0%BE%D0%B2%D0%BD%D0%BE%D0%B5_%D0%9E%D0%B1%D1%83%D1%87%D0%B5%D0%BD%D0%B8%D0%B5)/00_Global_(begin_cadet)/00____ft_debut) ft_debut
> - [[>]](./00_Projects__(%D0%9E%D1%81%D0%BD%D0%BE%D0%B2%D0%BD%D0%BE%D0%B5_%D0%9E%D0%B1%D1%83%D1%87%D0%B5%D0%BD%D0%B8%D0%B5)/00_Global_(begin_cadet)/00____piscine_reloaded(remindes_you_last_material_before_you_start_learning)) piscine reloaded
> - [[>]](./00_Projects__(%D0%9E%D1%81%D0%BD%D0%BE%D0%B2%D0%BD%D0%BE%D0%B5_%D0%9E%D0%B1%D1%83%D1%87%D0%B5%D0%BD%D0%B8%D0%B5)/00_Global_(begin_cadet)/01____libft) libft
> - [[>]](./00_Projects__(%D0%9E%D1%81%D0%BD%D0%BE%D0%B2%D0%BD%D0%BE%D0%B5_%D0%9E%D0%B1%D1%83%D1%87%D0%B5%D0%BD%D0%B8%D0%B5)/00_Global_(begin_cadet)/02____netwhat) netwhat
> - [[>]](./00_Projects__(%D0%9E%D1%81%D0%BD%D0%BE%D0%B2%D0%BD%D0%BE%D0%B5_%D0%9E%D0%B1%D1%83%D1%87%D0%B5%D0%BD%D0%B8%D0%B5)/00_Global_(begin_cadet)/03____get_next_line) get_next_Line
> - [[>]](./00_Projects__(%D0%9E%D1%81%D0%BD%D0%BE%D0%B2%D0%BD%D0%BE%D0%B5_%D0%9E%D0%B1%D1%83%D1%87%D0%B5%D0%BD%D0%B8%D0%B5)/00_Global_(begin_cadet)/04____fillit) fillit
---


> ### [[Ветвь UNIX]](./00_Projects__(%D0%9E%D1%81%D0%BD%D0%BE%D0%B2%D0%BD%D0%BE%D0%B5_%D0%9E%D0%B1%D1%83%D1%87%D0%B5%D0%BD%D0%B8%D0%B5)/01_Unix/)
---
>> #### Эта ветвь содержит в себе несколько направлений: Unix, Kernel, Virus, Security, Network.
> - [[>]](./00_Projects__(%D0%9E%D1%81%D0%BD%D0%BE%D0%B2%D0%BD%D0%BE%D0%B5_%D0%9E%D0%B1%D1%83%D1%87%D0%B5%D0%BD%D0%B8%D0%B5)/01_Unix/00________ft_ls) ft_ls
> - [[>]](./00_Projects__(%D0%9E%D1%81%D0%BD%D0%BE%D0%B2%D0%BD%D0%BE%D0%B5_%D0%9E%D0%B1%D1%83%D1%87%D0%B5%D0%BD%D0%B8%D0%B5)/01_Unix/02________minishell) minishell
>   - [[>]](./00_Projects__(%D0%9E%D1%81%D0%BD%D0%BE%D0%B2%D0%BD%D0%BE%D0%B5_%D0%9E%D0%B1%D1%83%D1%87%D0%B5%D0%BD%D0%B8%D0%B5)/01_Unix/03_0______ft_select) ft_select
> - [[>]](./00_Projects__(%D0%9E%D1%81%D0%BD%D0%BE%D0%B2%D0%BD%D0%BE%D0%B5_%D0%9E%D0%B1%D1%83%D1%87%D0%B5%D0%BD%D0%B8%D0%B5)/01_Unix/03_1______21sh) 21sh
>   - [[>]](./00_Projects__(%D0%9E%D1%81%D0%BD%D0%BE%D0%B2%D0%BD%D0%BE%D0%B5_%D0%9E%D0%B1%D1%83%D1%87%D0%B5%D0%BD%D0%B8%D0%B5)/01_Unix/04_0______taskmaster) Taskmaster
> - [[>]](./00_Projects__(%D0%9E%D1%81%D0%BD%D0%BE%D0%B2%D0%BD%D0%BE%D0%B5_%D0%9E%D0%B1%D1%83%D1%87%D0%B5%D0%BD%D0%B8%D0%B5)/01_Unix/04_1______42sh) 42sh
> - [[>]](./00_Projects__(%D0%9E%D1%81%D0%BD%D0%BE%D0%B2%D0%BD%D0%BE%D0%B5_%D0%9E%D0%B1%D1%83%D1%87%D0%B5%D0%BD%D0%B8%D0%B5)/01_Unix/05________malloc) Malloc
>   - [[>]](./00_Projects__(%D0%9E%D1%81%D0%BD%D0%BE%D0%B2%D0%BD%D0%BE%D0%B5_%D0%9E%D0%B1%D1%83%D1%87%D0%B5%D0%BD%D0%B8%D0%B5)/01_Unix/06________ft_script) ft_script
>   - [[>]](./00_Projects__(%D0%9E%D1%81%D0%BD%D0%BE%D0%B2%D0%BD%D0%BE%D0%B5_%D0%9E%D0%B1%D1%83%D1%87%D0%B5%D0%BD%D0%B8%D0%B5)/01_Unix/06________philosophers) Philosophers
> - [[>]](./00_Projects__(%D0%9E%D1%81%D0%BD%D0%BE%D0%B2%D0%BD%D0%BE%D0%B5_%D0%9E%D0%B1%D1%83%D1%87%D0%B5%D0%BD%D0%B8%D0%B5)/01_Unix/07________nm-otool) Nm-otool
>   - [[>]](./00_Projects__(%D0%9E%D1%81%D0%BD%D0%BE%D0%B2%D0%BD%D0%BE%D0%B5_%D0%9E%D0%B1%D1%83%D1%87%D0%B5%D0%BD%D0%B8%D0%B5)/01_Unix/09_0______ft_p) ft_p
>   - [[>]](./00_Projects__(%D0%9E%D1%81%D0%BD%D0%BE%D0%B2%D0%BD%D0%BE%D0%B5_%D0%9E%D0%B1%D1%83%D1%87%D0%B5%D0%BD%D0%B8%D0%B5)/01_Unix/09_0______irc) IRC
>     - [[>]](./00_Projects__(%D0%9E%D1%81%D0%BD%D0%BE%D0%B2%D0%BD%D0%BE%D0%B5_%D0%9E%D0%B1%D1%83%D1%87%D0%B5%D0%BD%D0%B8%D0%B5)/01_Unix/09_1_0____ft_ping) ft_ping
>     - [[>]](./00_Projects__(%D0%9E%D1%81%D0%BD%D0%BE%D0%B2%D0%BD%D0%BE%D0%B5_%D0%9E%D0%B1%D1%83%D1%87%D0%B5%D0%BD%D0%B8%D0%B5)/01_Unix/09_1_1____ft_traceroute) ft_traceroute
>     - [[>]](./00_Projects__(%D0%9E%D1%81%D0%BD%D0%BE%D0%B2%D0%BD%D0%BE%D0%B5_%D0%9E%D0%B1%D1%83%D1%87%D0%B5%D0%BD%D0%B8%D0%B5)/01_Unix/09_1_2____ft_nmap) ft_nmap
>     - [[>]](./00_Projects__(%D0%9E%D1%81%D0%BD%D0%BE%D0%B2%D0%BD%D0%BE%D0%B5_%D0%9E%D0%B1%D1%83%D1%87%D0%B5%D0%BD%D0%B8%D0%B5)/01_Unix/09_2______zappy) Zappy
>     - [[>]](./00_Projects__(%D0%9E%D1%81%D0%BD%D0%BE%D0%B2%D0%BD%D0%BE%D0%B5_%D0%9E%D0%B1%D1%83%D1%87%D0%B5%D0%BD%D0%B8%D0%B5)/01_Unix/09_3______lem-ipc) Lem-ipc
>     - [[>]](./00_Projects__(%D0%9E%D1%81%D0%BD%D0%BE%D0%B2%D0%BD%D0%BE%D0%B5_%D0%9E%D0%B1%D1%83%D1%87%D0%B5%D0%BD%D0%B8%D0%B5)/01_Unix/09_4_0____matt_daemon) Matt Daemon
>     - [[>]](./00_Projects__(%D0%9E%D1%81%D0%BD%D0%BE%D0%B2%D0%BD%D0%BE%D0%B5_%D0%9E%D0%B1%D1%83%D1%87%D0%B5%D0%BD%D0%B8%D0%B5)/01_Unix/09_4_1____durex) Durex
>   - [[>]](./00_Projects__(%D0%9E%D1%81%D0%BD%D0%BE%D0%B2%D0%BD%D0%BE%D0%B5_%D0%9E%D0%B1%D1%83%D1%87%D0%B5%D0%BD%D0%B8%D0%B5)/01_Unix/10_1_0____Libft-ASM) LibftASM
>     - [[>]](./00_Projects__(%D0%9E%D1%81%D0%BD%D0%BE%D0%B2%D0%BD%D0%BE%D0%B5_%D0%9E%D0%B1%D1%83%D1%87%D0%B5%D0%BD%D0%B8%D0%B5)/01_Unix/10_1_1____gbmu) GBmu
>     - [[>]](./00_Projects__(%D0%9E%D1%81%D0%BD%D0%BE%D0%B2%D0%BD%D0%BE%D0%B5_%D0%9E%D0%B1%D1%83%D1%87%D0%B5%D0%BD%D0%B8%D0%B5)/01_Unix/10_1_1____strace) strace
>       - [[>]](./00_Projects__(%D0%9E%D1%81%D0%BD%D0%BE%D0%B2%D0%BD%D0%BE%D0%B5_%D0%9E%D0%B1%D1%83%D1%87%D0%B5%D0%BD%D0%B8%D0%B5)/01_Unix/10_1_2____root_me_app_systeme) Root-me | App-Systeme
>       - [[>]](./00_Projects__(%D0%9E%D1%81%D0%BD%D0%BE%D0%B2%D0%BD%D0%BE%D0%B5_%D0%9E%D0%B1%D1%83%D1%87%D0%B5%D0%BD%D0%B8%D0%B5)/01_Unix/10_1_2____root_me_cracking) Root-me | Cracking
>     - [[>]](./00_Projects__(%D0%9E%D1%81%D0%BD%D0%BE%D0%B2%D0%BD%D0%BE%D0%B5_%D0%9E%D0%B1%D1%83%D1%87%D0%B5%D0%BD%D0%B8%D0%B5)/01_Unix/10_2_0____snow_crash) Snow Crash
>     - [[>]](./00_Projects__(%D0%9E%D1%81%D0%BD%D0%BE%D0%B2%D0%BD%D0%BE%D0%B5_%D0%9E%D0%B1%D1%83%D1%87%D0%B5%D0%BD%D0%B8%D0%B5)/01_Unix/10_2_1____boot2root) boot2root
>       - [[>]](./00_Projects__(%D0%9E%D1%81%D0%BD%D0%BE%D0%B2%D0%BD%D0%BE%D0%B5_%D0%9E%D0%B1%D1%83%D1%87%D0%B5%D0%BD%D0%B8%D0%B5)/01_Unix/10_2_1____rain-fall) RainFall
>       - [[>]](./00_Projects__(%D0%9E%D1%81%D0%BD%D0%BE%D0%B2%D0%BD%D0%BE%D0%B5_%D0%9E%D0%B1%D1%83%D1%87%D0%B5%D0%BD%D0%B8%D0%B5)/01_Unix/10_2_2____override) Override
>   - [[>]](./00_Projects__(%D0%9E%D1%81%D0%BD%D0%BE%D0%B2%D0%BD%D0%BE%D0%B5_%D0%9E%D0%B1%D1%83%D1%87%D0%B5%D0%BD%D0%B8%D0%B5)/01_Unix/11_2_0____Woody_Woodpacker) Woody Woodpacker
>     - [[>]](./00_Projects__(%D0%9E%D1%81%D0%BD%D0%BE%D0%B2%D0%BD%D0%BE%D0%B5_%D0%9E%D0%B1%D1%83%D1%87%D0%B5%D0%BD%D0%B8%D0%B5)/01_Unix/11_3_0____dr_quine) Dr Quine
>     - [[>]](./00_Projects__(%D0%9E%D1%81%D0%BD%D0%BE%D0%B2%D0%BD%D0%BE%D0%B5_%D0%9E%D0%B1%D1%83%D1%87%D0%B5%D0%BD%D0%B8%D0%B5)/01_Unix/11_3_1____famine) Famine
>     - [[>]](./00_Projects__(%D0%9E%D1%81%D0%BD%D0%BE%D0%B2%D0%BD%D0%BE%D0%B5_%D0%9E%D0%B1%D1%83%D1%87%D0%B5%D0%BD%D0%B8%D0%B5)/01_Unix/11_3_2____pestilence) Pestilence
>     - [[>]](./00_Projects__(%D0%9E%D1%81%D0%BD%D0%BE%D0%B2%D0%BD%D0%BE%D0%B5_%D0%9E%D0%B1%D1%83%D1%87%D0%B5%D0%BD%D0%B8%D0%B5)/01_Unix/11_3_3____war) War
>     - [[>]](./00_Projects__(%D0%9E%D1%81%D0%BD%D0%BE%D0%B2%D0%BD%D0%BE%D0%B5_%D0%9E%D0%B1%D1%83%D1%87%D0%B5%D0%BD%D0%B8%D0%B5)/01_Unix/11_3_4____death) Death
>   - [[>]](./00_Projects__(%D0%9E%D1%81%D0%BD%D0%BE%D0%B2%D0%BD%D0%BE%D0%B5_%D0%9E%D0%B1%D1%83%D1%87%D0%B5%D0%BD%D0%B8%D0%B5)/01_Unix/12_0_0____ft_linux) ft_linux
>   - [[>]](./00_Projects__(%D0%9E%D1%81%D0%BD%D0%BE%D0%B2%D0%BD%D0%BE%D0%B5_%D0%9E%D0%B1%D1%83%D1%87%D0%B5%D0%BD%D0%B8%D0%B5)/01_Unix/12_1_0_0__little_penguin_1) little-penguin-1
>     - [[>]](./00_Projects__(%D0%9E%D1%81%D0%BD%D0%BE%D0%B2%D0%BD%D0%BE%D0%B5_%D0%9E%D0%B1%D1%83%D1%87%D0%B5%D0%BD%D0%B8%D0%B5)/01_Unix/12_1_0_1__userspace_digressions) userspace digressions
>     - [[>]](./00_Projects__(%D0%9E%D1%81%D0%BD%D0%BE%D0%B2%D0%BD%D0%BE%D0%B5_%D0%9E%D0%B1%D1%83%D1%87%D0%B5%D0%BD%D0%B8%D0%B5)/01_Unix/12_1_1____Driver_and_Interrupts_OR_Keyboard) Drivers and Interrupts -=OR=- Drivers and Keyboard
>     - [[>]](./00_Projects__(%D0%9E%D1%81%D0%BD%D0%BE%D0%B2%D0%BD%D0%BE%D0%B5_%D0%9E%D0%B1%D1%83%D1%87%D0%B5%D0%BD%D0%B8%D0%B5)/01_Unix/12_1_2____Process_and_Memory) Process and Memory 
>     - [[>]](./00_Projects__(%D0%9E%D1%81%D0%BD%D0%BE%D0%B2%D0%BD%D0%BE%D0%B5_%D0%9E%D0%B1%D1%83%D1%87%D0%B5%D0%BD%D0%B8%D0%B5)/01_Unix/12_1_3____Filesystem) Filesystem
>     - [[>]](./00_Projects__(%D0%9E%D1%81%D0%BD%D0%BE%D0%B2%D0%BD%D0%BE%D0%B5_%D0%9E%D0%B1%D1%83%D1%87%D0%B5%D0%BD%D0%B8%D0%B5)/01_Unix/12_2_0____kfs-1) KFS-1
>     - [[>]](./00_Projects__(%D0%9E%D1%81%D0%BD%D0%BE%D0%B2%D0%BD%D0%BE%D0%B5_%D0%9E%D0%B1%D1%83%D1%87%D0%B5%D0%BD%D0%B8%D0%B5)/01_Unix/12_2_1____kfs-2) KFS-2
>     - [[>]](./00_Projects__(%D0%9E%D1%81%D0%BD%D0%BE%D0%B2%D0%BD%D0%BE%D0%B5_%D0%9E%D0%B1%D1%83%D1%87%D0%B5%D0%BD%D0%B8%D0%B5)/01_Unix/12_2_2____kfs-3) KFS-3
>     - [[>]](./00_Projects__(%D0%9E%D1%81%D0%BD%D0%BE%D0%B2%D0%BD%D0%BE%D0%B5_%D0%9E%D0%B1%D1%83%D1%87%D0%B5%D0%BD%D0%B8%D0%B5)/01_Unix/12_2_3____kfs-4) KFS-4
>     - [[>]](./00_Projects__(%D0%9E%D1%81%D0%BD%D0%BE%D0%B2%D0%BD%D0%BE%D0%B5_%D0%9E%D0%B1%D1%83%D1%87%D0%B5%D0%BD%D0%B8%D0%B5)/01_Unix/12_2_4____kfs-5) KFS-5
>     - [[>]](./00_Projects__(%D0%9E%D1%81%D0%BD%D0%BE%D0%B2%D0%BD%D0%BE%D0%B5_%D0%9E%D0%B1%D1%83%D1%87%D0%B5%D0%BD%D0%B8%D0%B5)/01_Unix/12_2_5____kfs-6) KFS-6
>     - [[>]](./00_Projects__(%D0%9E%D1%81%D0%BD%D0%BE%D0%B2%D0%BD%D0%BE%D0%B5_%D0%9E%D0%B1%D1%83%D1%87%D0%B5%D0%BD%D0%B8%D0%B5)/01_Unix/12_2_6____kfs-7) KFS-7
>     - [[>]](./00_Projects__(%D0%9E%D1%81%D0%BD%D0%BE%D0%B2%D0%BD%D0%BE%D0%B5_%D0%9E%D0%B1%D1%83%D1%87%D0%B5%D0%BD%D0%B8%D0%B5)/01_Unix/12_2_7____kfs-8) KFS-8
>     - [[>]](./00_Projects__(%D0%9E%D1%81%D0%BD%D0%BE%D0%B2%D0%BD%D0%BE%D0%B5_%D0%9E%D0%B1%D1%83%D1%87%D0%B5%D0%BD%D0%B8%D0%B5)/01_Unix/12_2_8____kfs-9) KFS-9
>     - [[>]](./00_Projects__(%D0%9E%D1%81%D0%BD%D0%BE%D0%B2%D0%BD%D0%BE%D0%B5_%D0%9E%D0%B1%D1%83%D1%87%D0%B5%D0%BD%D0%B8%D0%B5)/01_Unix/12_2_9____kfs-x  ) KFS-X
---



> ### [[Ветвь Алгоритмов]](./00_Projects__(%D0%9E%D1%81%D0%BD%D0%BE%D0%B2%D0%BD%D0%BE%D0%B5_%D0%9E%D0%B1%D1%83%D1%87%D0%B5%D0%BD%D0%B8%D0%B5)/02_Algorithmic/)
---
>> #### Эта ветвь содержит в себе несколько  направлений: Algorithms, Data Science, Cryptography.
> - [[>]](./00_Projects__(%D0%9E%D1%81%D0%BD%D0%BE%D0%B2%D0%BD%D0%BE%D0%B5_%D0%9E%D0%B1%D1%83%D1%87%D0%B5%D0%BD%D0%B8%D0%B5)/02_Algorithmic/00____ft_printf) ft_printf
---



> ### [[Системное & Сетевое Администрирование]](./00_Projects__(%D0%9E%D1%81%D0%BD%D0%BE%D0%B2%D0%BD%D0%BE%D0%B5_%D0%9E%D0%B1%D1%83%D1%87%D0%B5%D0%BD%D0%B8%D0%B5)/05_Infrastructure_and_Admin/)
---
> - [[>]](./00_Projects__(%D0%9E%D1%81%D0%BD%D0%BE%D0%B2%D0%BD%D0%BE%D0%B5_%D0%9E%D0%B1%D1%83%D1%87%D0%B5%D0%BD%D0%B8%D0%B5)/05_Infrastructure_and_Admin/00____init) init
> - [[>]](./00_Projects__(%D0%9E%D1%81%D0%BD%D0%BE%D0%B2%D0%BD%D0%BE%D0%B5_%D0%9E%D0%B1%D1%83%D1%87%D0%B5%D0%BD%D0%B8%D0%B5)/05_Infrastructure_and_Admin/01____docker-1) docker-1
---
