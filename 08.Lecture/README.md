# Урок 8

## Строки. Многомерные массивы

### Строки

**Строка в языке Си** — это массив из символов типа char, в конце символ с кодом 0(\0).

- Строки состоят из символов кроме \0
- Длина строки не содержится в самой строке
- Нет ограничений на длину строки

```
char s[10]; // Строка из 9 значимых символов
char s[N]; // Строка из N-1 значимых символов, в строке всегда есть символ \0
char st[] = "hello"; // st[0]='h' st[1]='e' st[2]=’l’ st[3]=’l’ st[4]='o' st[5]='\0'
printf(“%lu”, sizeof(st)); // 6
char st[10] = "hello"; // st[0]='h' st[1]='e' st[2]=’l’ st[3]=’l’ st[4]='o' st[5]='\0'
printf(“%lu”, sizeof(st)); // 10
```

#### Ввод и вывод строк

```
char s[10];
scanf("%s",s); // функция считывает строку до первого пробельного символа или \n, и при наличии таковых подставляет \0 в конец
printf("%s", s); // напечатать строку
char s1[10];
scanf("%9s",s1); // считать строку не более 9 символов
printf("%s\n",s1); // напечатать строку
```

##### Посимвольный ввод строки с помощью функции getchar()

```
char s[10], c;
int i=0;
while( (c=getchar())!='\n' )
    s[i++]=c;
s[i]='\0';
i = 0;
while(s[i]) // s[i] != 0
    putchar(s[i++]);
return 0;
```

#### Множество сканирования scanf (шаблоны)

scanf() можно задавать шаблоны  (подобие регулярноых выражений) считывания

```
char s[100];
scanf("%[a-z]", s); // helloWORLD (считать только буквы) 
printf("%s\n", s); // hello

while (getchar() != '\n'); // очистка буфера ввода
scanf("%[0-9]", s); // 123WORLD (считать цифры) 
printf("%s\n",s); // 123

while (getchar() != '\n');
scanf("%[^\n]", s); // Hello world (все кроме \n)
printf("%s\n",s); // Hello world

while (getchar() != '\n');
char s1[100], s2[100];
scanf("%s%s",s1,s2); // Hello world
printf("s1 = %s s2 = %s\n",s1,s2); // s1 = Hello s2 = world

while (getchar() != '\n'); 
scanf("%[0-9]=%[a-z]", s1, s2); // 123 = hello (= символ разделителя между спецификаторами)
printf("s1 = %s s2 = %s\n", s1, s2); // s1 = 123 s2 = hello
```

while (getchar() != '\n') - данная инструкция нужна для очистки буфера ввода перед новым вызовом scanf() с шаблонами, т.к.в шаблонах отсекаются управляющие символы типа \n, и scanf() не знает, что ввод закончен и продолжает принимать символы далее, либо до завершения программы либо до scanf() без шаблона. Запрос на ввод будет одним, а выводов в консоль сразу будет несколько, причем все одинаковые, т.к. буфер содержит один и тот же массив данных, выводов же будет несколько и все они будут одинаковыми.

##### Возврат scanf()

**scanf()** возвращает количество успешно распознанных спецификаторов или -1 в случае ошибки, либо получив символ перехода на новую строку.

```
char s1[100], s2[100];
int r;
r=scanf("%[0-9]=%[a-z]",s1,s2); // 123=hello
printf("r = %d\n",r);           // r = 2

while (getchar() != '\n'); 
r=scanf("%[0-9]=%[a-z]",s1,s2); // 123=123
printf("r = %d\n",r);           // r = 1

while (getchar() != '\n'); 
r=scanf("%[0-9]=%[a-z]",s1,s2); // hello=123
printf("r = %d\n",r);           // r = 0

while (getchar() != '\n'); 
r=scanf("%[0-9]=%[a-z]",s1,s2); // \EOF
printf("r = %d\n",r);           // r = -1
```

### Библиотека string.h

#### strlen()

strlen(const char *cs) - возвращает длину строки

```
char st[10] = "hello";
printf("Sizeof = %lu\n", sizeof(st)); // Sizeof = 10
printf("Strlen = %lu\n", strlen(st)); // strlen = 6
```

Нельзя использовать операции ==, !=, etc, т.к. происходит сравнение указателей на начало строк.

```
    char st1[10] = "hello";
    char st2[10] = "hello";
    if(st1 == st2)
        printf("Yes\n");
    else
        printf("No\n"); // No
```

#### Задачи на строки

1. Своя реализация strlen()

```
unsigned long strlen(const char *cs) {
    int count = 0;
    while(*cs++) count++;
    return count;
}
```

2. Своя реализация strcpy()

```
char* strcpy(char *dst, const char *src)
{
    for (int i = 0; i < sizeof(src); i++)
        dst[i] = src[i];
    return dst;
}
```

3. Своя реализация strcmp()

```
int strcmp(const char *a, const char *b)
{   
    while(*a && *b && *a == *b) *a++, b++;
    return *a - *b;
}
```

4. Своя реализация wordcnt() - подсчет слов

```
unsigned long wordcnt(const char *cs) {
    int count = 0;
    short word = 0;
    while(*cs) 
    {
        if(*cs++ != ' ' && word == 0)
        {
            count++;
            word = 1;
        }
        else word = 0;
    }
    return count;
}
```

5. str_sum_digits(const char *cs) - сумма цифр в строке

```
unsigned long digcnt(const char *cs) {
    int summa = 0;
    while(*cs) 
    {
        if(*cs > '0' && *cs <= '9')
            summa += (*cs - '0');
        cs++;
    }
    return summa;
}
```

6. int StrToHex(const char *str,char* Hex) - преобразует str, в шестнадцатеричный формат

```
int StrToHex(const char *string, unsigned char *Hex)
{
    unsigned char byte = 0;
    short int half = 0;
    short int space = 0;
    int index;
    int size = 0;
    char str[100];

    for(index = 0; *(string+index); index++)
        str[index] = *(string+index);
      
    str[index] = ' ', str[index+1] = '\0';

    for (index = 0; str[index] != '\0'; index++)
    {

        if (str[index] >= '0' && str[index] <= '9')
            byte += (str[index] - '0');
        else if (str[index] >= 'A' && str[index] <= 'F')
            byte += (str[index] - 55);
        else if (str[index] >= 'a' && str[index] <= 'f')
            byte += (str[index] - 87);
        else space = 1;
      
        if (half == 0 && space == 0)
        {
            byte *= 16;
            half++;
        }
        else if (half == 1 && space == 0)
        {
            *Hex = byte;
            Hex++;
            byte = 0;
            half = 0;
            size++;
        }
        else if (half == 0 && space == 1)
        {
            space = 0; 
 
        }
        else if (half == 1 && space == 1)
        {
            space = 0;
            byte /= 16;
            *Hex = byte;
            Hex++;
            byte = 0;
            half = 0;
            size++;
        }
    }
    return size;
}
```

### Библиотека string.h

#### 1. Функции работы с памятью

##### memcopy()

Копирует данные из одного массива в другой:

```
#include <stdio.h>
#include <string.h>

int main() {
    char source[] = "Hello, World!";
    char destination[20];

    memcpy(destination, source, strlen(source) + 1);

    printf("Source: %s\n", source);
    printf("Destination: %s\n", destination);

    return 0;
}
```

##### memmove

Копирует n байт из области памяти src в dest, которые в отличие от memcpy могут перекрываться

```
#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello, World!";
    char buffer[20];

    // Копируем данные из str в buffer с использованием memmove
    memmove(buffer, str, strlen(str) + 1);

    printf("Source: %s\n", str);
    printf("Destination: %s\n", buffer);

    return 0;
}
```

##### memchr()

Возвращает указатель на первое вхождение значения c среди первых n байтов s или NULL, если не найдено

```
#include <stdio.h>
#include <string.h>

int main() {
    const char str[] = "Hello, World!";
    char target = 'W';

    // Ищем первое вхождение 'W' в строке str
    const char *result = memchr(str, target, strlen(str));

    if (result != NULL) {
        printf("Первое вхождение символа '%c' в строке: %s\n", target, result);
    } else {
        printf("Символ '%c' не найден в строке.\n", target);
    }

    return 0;
}

```

##### memcmp()

Сравнивает первые n символов в областях памяти

```
#include <stdio.h>
#include <string.h>

int main() {
    const char str1[] = "Hello";
    const char str2[] = "Hello";
    const char str3[] = "World";

    // Сравниваем блоки памяти str1 и str2
    int result1 = memcmp(str1, str2, strlen(str1));
    if (result1 == 0) {
        printf("str1 и str2 идентичны.\n");
    } else {
        printf("str1 и str2 не идентичны.\n");
    }

    // Сравниваем блоки памяти str1 и str3
    int result2 = memcmp(str1, str3, strlen(str1));
    if (result2 == 0) {
        printf("str1 и str3 идентичны.\n");
    } else {
        printf("str1 и str3 не идентичны.\n");
    }

    return 0;
}
```

Если блоки памяти одинаковы, memcmp возвращает 0; если они различны, возвращается значение, показывающее относительный порядок первых несовпадающих байт.

##### memset

Заполняет область памяти одним байтом A

```
#include <stdio.h>
#include <string.h>

int main() {
    char buffer[10];

    // Заполняем блок памяти buffer значением 'A' на 10 байт
    memset(buffer, 'A', sizeof(buffer));

    // Выводим результат
    for (int i = 0; i < sizeof(buffer); i++) {
        printf("%c ", buffer[i]);
    }

    return 0;
}
```

#### 2. Функции для работы со строками

- *strcpy - копирует строку из одного места в другое
- *strncpy копирует до n байт строки из одного места в другое
- strlen возвращает длину строки
- *strpbrk находит первое вхождение любого символа, перечисленного в accept
- *strstr находит первое вхождение строки needle в haystack
- strcat дописывает строку src в конец dest
- strncat дописывает не более n начальных символов строки src (или всю src, если её длина меньше) в конец dest
- *strchr возвращает адрес символа c в строке s, начиная с головы, или NULL, если строка s не содержит символ c
- *strrchr возвращает адрес символа c в строке s, начиная с хвоста, или NULL, если строка s не содержит символ c
- strcmp лексикографическое сравнение строк (возвращает "0", если строки одинаковые, положительное, если первая строка больше, и отрицательное, если меньше)
- strncmp лексикографическое сравнение первых n байтов строк

##### Пример строковых функций

```
#include <stdio.h>
#include <string.h>
int main(void)
{
    char destination[30] = "Hello ";
    char source[30] = "GB!!!";
    strcat(destination, source);
    printf("%s\n", destination); // Hello GB!!!
    strcpy(source, destination);
    printf("%s\n", source); // Hello GB!!!
    int n = strlen(source); // количество копируемых символов
    strncpy(destination, source, n - 1);
    // функция strncpy НЕ заканчивает скопированную строку нулевым символом,
    // что может привести к переполнению буфера.
    // Поэтому после копирования следует вручную устанавливать нулевой символ
    destination[n - 1] = '\0';
    printf("%s %d\n", destination, n); // Hello GB!! 11
    char substring[14] = "GB!";
    char *substring_ptr = strstr(destination, substring);
    // если подстрока найдена
    if (substring_ptr)
    {
        // вычисляем позицию подстроки в строке
        long position = substring_ptr - destination;
        printf("Substring index: %ld\n", position); // Substring index: 6
    }
    else
    // если подстрока не найдена
    {
        printf("Substring not found\n");
    }
    return 0;
}
```

### Заголовочный файл stdlib.h

#### Функции преобразования

- atof символ в число двойной точности (double; НЕ float)
- atoi символ в целое число (integer)
- atol символ в длинное целое число (long integer)
- atoll символ в длинное целое число (long long integer)
- strtod строка в число двойной точности (double)
- strtof строка в число одиночной точности (float)
- strtol строка в длинное целое число (long integer)
- strtold строка в длинное число двойной точности (long double)
- strtoll строка в длинное целое число (long long integer)
- strtoul строка в беззнаковое длинное целое число (unsigned long integer)
- strtoull строка в беззнаковое длинное целое число (unsigned long long integer)

#### Функции генерации

- rand генерирует псевдослучайное значение
- srand устанавливает начальное псевдослучайных чисел значение генератора

#### Работа с кучей

- malloc, calloc, realloc выделяет память из кучи Да Да
- free освобождает память обратно в кучу Да Д

#### Сортировка

- qsort - quicksort

#### Примеры использования stdlib.h

```
#include <stdio.h> // Для printf()
#include <stdlib.h> //Для atoi()

int main(void)
{
    char *Str = "652.2345brrt 7"; // Строка для преобразования
    char *ptr = Str;
  
    int Num = atoi(Str); // Преобразование строки в число типа int 
    printf("%d\n", Num); // Вывод результата преобразования

    float Num1 = atof(Str);
    printf("%f\n", Num1); // Вывод результата преобразования

    ptr += 13;
    int Num3 = atoi(ptr);
    printf("%d\n", Num3); // Вывод результата преобразования
    return 0;
}
```

### Массивы

#### Массив указателей

Где каждый элемент это ссылка на объект одного типа (обычно  строки). Каждый элемент содержит адрес нулевого символа строки.

```
#include <stdio.h>
#include <stdint.h>

int main(int argc, char const *argv[])
{
    const uint8_t *ps[] = {"one", "two", "three", NULL}; // NULL признак конца
    for(uint32_t i=0; ps[i] ;i++)
        printf("%s\n", ps[i]);
    return 0;

}
```

#### Многомерные массивы

Это одномерный массив, каждый элемент которого представляет собой массив размерности n - 1

```
int matr[3][5]; // 3 строки и 5 столбцов
```
<table>
  <tr>
    <td>matr[0][0]</td>
    <td>matr[0][1]</td>
    <td>matr[0][2]</td>
    <td>matr[0][3]</td>
    <td>matr[0][4]</td>
  </tr>
  <tr>
    <td>matr[1][0]</td>
    <td>matr[1][1]</td>
    <td>matr[1][2]</td>
    <td>matr[1][3]</td>
    <td>matr[1][4]</td>
  </tr>
  <tr>
    <td>matr[2][0]</td>
    <td>matr[2][1]</td>
    <td>matr[2][2]</td>
    <td>matr[2][3]</td>
    <td>matr[2][4]</td>
  </tr>
</table>

#### Варианты инициализации многомерных массивов

```
int m[4][3] =  {{11, 15, 30},
                {10, 20, 31},
                { 5, 8, 0},
                {17, 25, 47}};
```

если инициализируются все элементы, то внутренние фигурные скобки можно опустить

```
int m[4][3] =  {11, 15, 30,
                10, 20, 31,
                5, 8, 0,
                17, 25, 47};
```

если же в массиве заданы не все элементы, то все скобки обяательны

```
int m[4][3] =  {{11, 15, 30},
                {10, -2},
                {5},
                {}};
```

