# Типы данных

- _Bool целый тип для хранения 0 и 1
- char - целый тип для хранения кода символа
- int - целый тип
- float - с плавающей точкой
- double - двойной точности
- void - без значения
- _Complex модификатор комплексного тип

**Основные типы данных:**

- char
- int
- float
- double

**К ним применимы модификаторы:**

- signed (по умолчанию)
- unsigned 
- short (для int)
- long (для int)
- long long (для int)

**Размерность комбинаций основных типов и модификаторов:**

<table border="1" class="dataframe">
<thead>
<tr style="text-align: right;">
<th>Data Type</th>
<th>Size (bytes)</th>
<th>Range</th>
<th>Format Specifier</th>
</tr>
</thead>
<tbody>
<tr>
<td>short int</td>
<td>2</td>
<td>-32,768 to 32,767</td>
<td>%hd</td>
</tr>
<tr>
<td>unsigned short int</td>
<td>2</td>
<td>0 to 65,535</td>
<td>%hu</td>
</tr>
<tr>
<td>unsigned int</td>
<td>4</td>
<td>0 to 4,294,967,295</td>
<td>%u</td>
</tr>
<tr>
<td>int</td>
<td>4</td>
<td>-2,147,483,648 to 2,147,483,647</td>
<td>%d</td>
</tr>
<tr>
<td>long int</td>
<td>4</td>
<td>-2,147,483,648 to 2,147,483,647</td>
<td>%ld</td>
</tr>
<tr>
<td>unsigned long int</td>
<td>4</td>
<td>0 to 4,294,967,295</td>
<td>%lu</td>
</tr>
<tr>
<td>long long int</td>
<td>8</td>
<td>-(2^63) to (2^63)-1</td>
<td>%lld</td>
</tr>
<tr>
<td>unsigned long long int</td>
<td>8</td>
<td>0 to 18,446,744,073,709,551,615</td>
<td>%llu</td>
</tr>
<tr>
<td>signed char</td>
<td>1</td>
<td>-128 to 127</td>
<td>%c</td>
</tr>
<tr>
<td>unsigned char</td>
<td>1</td>
<td>0 to 255</td>
<td>%c</td>
</tr>
<tr>
<td>float</td>
<td>4</td>
<td>1.2E-38 to 3.4E+38</td>
<td>%f</td>
</tr>
<tr>
<td>double</td>
<td>8</td>
<td>1.7E-308 to 1.7E+308</td>
<td>%lf</td>
</tr>
<tr>
<td>long double</td>
<td>16</td>
<td>3.4E-4932 to 1.1E+4932</td>
<td>%Lf</td>
</tr>
</tbody>
</table>

## Переменные

**Переменная** – это ячейка в памяти компьютера, которая имеет имя, адрес в памяти компьютера и хранит некоторое значение.

Могут включать:
- латинские буквы (A-Z, a-z)
- знак подчеркивания _
- цифры 0-9

**Выделение памяти для переменных:**

- автоматическое
- статическое
- динамическое




Константа – это неизменяемая ячейка в памяти компьютера, которая имеет имя,адрес в памяти компьютера и хранит некоторое значение. Эти фиксированные величины также называются литералами.
Радикс — основание системы счисления.
Оператор – это команда языка программирования.
Оператор присваивания – это команда по изменению переменной.
Приведение типа — преобразование значения одного типа в значение другого типа.
