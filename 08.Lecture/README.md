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