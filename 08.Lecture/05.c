#include <stdio.h>

int main() {
    char s[100];

    // Считываем строку, включая пробелы и символ новой строки
    printf("Enter lowercase letters: ");
    scanf(" %[a-z]", s);
    printf("%s\n", s);

    // Очищаем входной буфер перед следующим вводом
    while (getchar() != '\n');

    // Считываем строку с цифрами
    printf("Enter digits: ");
    scanf("%[0-9]", s);
    printf("%s\n", s);

    return 0;
}

