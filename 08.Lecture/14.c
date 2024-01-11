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