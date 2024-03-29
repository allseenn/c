# Урок 9

## Файлы и структурные типы данных

### Файлы

Типы и функции по файлам описаны в библиотеке stdio.h

#### fopen() - открыть файл

```
FILE * fopen(имя_файла, режим_работы);
```

##### Режимы работы

- "r" – чтения;
- "w" – создается новый и открывается на запись, содержимое удаляется
- "a" – для записи в конец файл или создается новый;
- "r+" – для чтения и записи, позиция устанавливается в начало файла;
- "w+" – создается новый файл, либо содержимое удаляется, для чтения и записи, позиция устанавливается в начало файла.
- "а+" – чтения и записи, текущая позиция устанавливается в конец файла, если файла нет, то создается новый

#### fclose() - закрыть файл

```
#include <stdio.h>

int main(void)
{
    FILE *f;
    f = fopen("in.txt", "w"); // открытие файла in.txt на запись
    fclose(f);                // Закрытие файла. После окончания работы с файлом необходимо убедиться,
    // что все записанные данные попали на диск, и освободить все ресурсы, связанные с ним.
    return 0;
}
```

Чтение и запись в файл — это буферизированный ввод и вывод.

#### Позиционирование в файле

##### ftell - текущий курсор

Cмещение указателя в байтах относительно начала файла. При ошибке функция возвращает -1.

```
long ftell(FILE *stream);
```

##### fseek - установка курсора

Установка позиции в файле

```
int fseek(FILE *stream, long offset, int origin);
```

###### origin
Позиция указателя, относительно которой будет выполняться смещение

- SEEK_SET – смещение в байтах относительно начала файла (параметр offset должен быть больше или равен 0);
- SEEK_CUR – смещение в байтах относительно текущей позиции в файле;
- SEEK_END – смещение в байтах относительно конца файла (offset должен быть меньше либо равен нуля)

```
fseek(ptrFile , 9 , SEEK_SET); // изменить позицию на 9 байт относительно начала файла
```

###### Особенности позиционирования

Если новое положение в файле находится 
- до начала файла, вернется ошибка.
- за текущим концом файла, который открыт на запись или чтение/запись, то файл расширяется нулями до требуемого размера.


#### fscanf - сканирование из файла

#### Задачи

1. Дан текстовый файл in.txt, содержащий целые числа. Посчитать сумму чисел.

```
int main(void)
{
    FILE *f;
    int c;
    f = fopen("in.txt", "r");
    while (fscanf(f, "%c", &c)==1)
    {
        printf("%c\n", c);
    }
    fclose(f);
    return 0;
}
```

2. Ввести имя файла и напечатать его размер. Функция ftell возвращает значение указателя текущего положения потока.

```
#include <stdio.h>

int main()
{
    FILE *f;
    int size = 0;
    char filename[50] = {0};
    printf("Enter file name: ");
    scanf("%s", filename);
    f = fopen(filename, "r");
    fseek(f, 0, SEEK_END);
    size = ftell(f);
    printf("%s %lu\n", filename, size);
    fclose(f);
    return 0;
}
```

3. Дан текстовый файл in.txt. Необходимо посчитать количество цифр в файле и дописать это число в конец данного файла.

```
#include <stdio.h>

int main()
{
    FILE *f;
    int sum = 0;
    int n = 0;
    char filename[50] = {0};
    printf("Enter file name: ");
    scanf("%s", filename);
    f = fopen(filename, "r+");
    while(fscanf(f, "%d", &n) == 1)
        sum+=n;
    
    fseek(f, 0, SEEK_END);
    fprintf(f, "%c%d", ' ', sum);
    printf("%s %lu\n", filename, sum);
    return 0;
}
```

4. В файле input.txt дана строка. Вывести ее в файл output.txt три раза через запятую и
показать количество символов в ней

```
#include <stdio.h>
#include <string.h>

int main()
{
    FILE *f;
    int sum = 0;
    char string[50] = {0};
    char file_read[50] = {0};
    char file_write[50] = {0};
    printf("Enter filename to read: ");
    scanf("%s", file_read);
    printf("Enter filename to write: ");
    scanf("%s", file_write);
    f = fopen(file_read, "r");
    fscanf(f, "%[^\n]", string);
    fclose(f);
    f = fopen(file_write, "w");
    for (int i = 0; i < 3; i++)
    {
        fprintf(f, "%s%s", string, ", ");
    }
    fprintf(f, "%d", strlen(string));
    fclose(f);
    return 0;
}
```

5. В файле input.txt дана строка из 1000 символов. Показать номера символов, совпадающих с последним символом строки. Результат записать в файл output.txt