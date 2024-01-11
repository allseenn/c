#include <stdio.h>

void addSpaceToEnd(char *text) {
    // Находим конец строки
    while (*text != '\0') {
        text++;
    }

    // Добавляем пробел в конец строки
    *text = '?';
    *(text + 1) = '\0';
}

int main() {
    char text[100] = "Привет, мир!"; // Исходная строка

    addSpaceToEnd(text); // Добавление пробела в конец строки

    printf("Итоговая строка: %s\n", text);

    return 0;
}
