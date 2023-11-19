// На вход подается произвольное четырехзначное число 
// Нужно напечатать среднее арифметическое цифр

#include <stdio.h>

int main() {
    int inputValue;
    int count = 0;
    int sum = 0;

    printf("Введите целое число: ");
    scanf("%d", &inputValue);

    // Подсчет количества ненулевых цифр в числе
    int tempValue = inputValue;
    while (tempValue > 0) {
        int digit = tempValue % 10;
        if (digit != 0) {
            count++;
            sum += digit;
        }
        tempValue /= 10;
    }

    // Создание массива соответствующего размера
    int nonZeroDigits[count];
    int index = 0;

    // Заполнение массива ненулевыми цифрами
    while (inputValue > 0) {
        int digit = inputValue % 10;
        if (digit != 0) {
            nonZeroDigits[index] = digit;
            index++;
        }
        inputValue /= 10;
    }

    // Вывод ненулевых цифр
    printf("Ненулевые цифры: ");
    for (int i = count - 1; i >= 0; i--) {
        printf("%d ", nonZeroDigits[i]);
    }

    // Подсчет и вывод среднего арифметического
    if (count > 0) {
        double average = (double)sum / count;
        printf("\nСреднее арифметическое: %.2f\n", average);
    } else {
        printf("\nНет ненулевых цифр для вычисления среднего арифметического.\n");
    }

    return 0;
}

