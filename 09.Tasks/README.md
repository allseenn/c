# Домашнее задание №9

## Задача 0. Hello name (Доп.задача, семинар 9)

В файле .txt в одной строке фамилию, имя и отчество. Сформировать файл  приветствие .txt, где останутся имя и фамилия 
- Данные на входе: Строка состоящая из английских букв и пробелов не более  100 символов. Формат: Фамилия Имя Отчество 
- Данные на выходе: Строка состоящая из английских букв и пробелов 

Пример
- Данные на входе: Pupkin Vasiliy Ivanovich 
- Данные на выходе: Hello, Vasiliy Pupkin!

## Задача 1. По одному разу

В файле .txt даны два слова не более 100 символов каждое, разделенные одним пробелом. Найдите только те символы слов, которые встречаются в обоих словах только один раз. Напечатайте их через пробел в файл .txt в лексикографическом порядке.

- Данные на входе: Два слова из маленьких английских букв через пробел. Длинна каждого слова не больше 100 символов.
- Данные на выходе: Маленькие английские буквы через пробел.

Пример №1
- Данные на входе: hello world
- Данные на выходе: o

- Данные на входе: aabcd bcef
- Данные на выходе: b c

## Задача 2. Заменить a на b

В файле .txt дана символьная строка не более 1000 символов. Необходимо заменить все буквы "а" на буквы "b" и наоборот, как заглавные, так и строчные. Результат записать в .txt.

- Данные на входе: Строка из маленьких и больших английских букв, знаков препинания и пробелов.
- Данные на выходе: Строка из маленьких и больших английских букв, знаков препинания и пробелов.

Пример
- Данные на входе: aabbccddABCD
- Данные на выходе: bbaaccddBACD

## Задача 3. Числа в массив

В файле .txt дана строка, не более 1000 символов, содержащая буквы, целые числа и иные символы. Требуется все числа, которые встречаются в строке, поместить в отдельный целочисленный массив. Например, если дана строка "data 48 call 9 read13 blank0a", то в массиве числа 48, 9, 13 и 0. Вывести массив по возрастанию в файл .txt.

- Данные на входе: Строка из английских букв, цифр и знаков препинания
- Данные на выходе: Последовательность целых чисел отсортированная по возрастанию

Пример
- Данные на входе: data 48 call 9 read13 blank0a
- Данные на выходе: 0 9 13 48

## Задача 4. Удалить повторяющиеся символы

В файле .txt строка из маленьких и больших английских букв, знаков препинания и пробелов. Требуется удалить из нее повторяющиеся символы и все пробелы. Результат записать в файл .txt.

- Данные на входе: Строка из маленьких и больших английских букв, знаков препинания и пробелов. Размер строки не более 1000 символов.
- Данные на выходе: Строка из маленьких и больших английских букв.

Пример
- Данные на входе: abc cde def
- Данные на выходе: abcdef

## Задача 5. Самое длинное слово

В файле .txt дана строка слов, разделенных пробелами. Найти самое длинное слово и вывести его в файл .txt. Случай, когда самых длинных слов может быть несколько, не обрабатывать.

- Данные на входе: Строка из английских букв и пробелов. Не более 1000 символов.
- Данные на выходе: Одно слово из английских букв.

Пример
- Данные на входе: Hello beautiful world
- Данные на выходе: beautiful

## Задача 6. Заканчивается на a

В файле .txt дано предложение. Необходимо определить, сколько слов заканчиваются на букву 'а'. Ответ записать в файл .txt.
- Данные на входе: Строка из английских букв и пробелов не более 1000 символов.
- Данные на выходе: Одно целое число

Пример
- Данные на входе: Mama mila ramu
- Данные на выходе: 2

# Решение

- [Задача 0](https://github.com/allseenn/c/blob/master/09.Tasks/00.c)
- [Задача 1](https://github.com/allseenn/c/blob/master/09.Tasks/01.c)
- [Задача 2](https://github.com/allseenn/c/blob/master/09.Tasks/02.c)
- [Задача 3](https://github.com/allseenn/c/blob/master/09.Tasks/03.c)
- [Задача 4](https://github.com/allseenn/c/blob/master/09.Tasks/04.c)
- [Задача 5](https://github.com/allseenn/c/blob/master/09.Tasks/05.c)
- [Задача 6](https://github.com/allseenn/c/blob/master/09.Tasks/06.c)