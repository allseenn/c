#include<stdio.h>

unsigned long long recurs_power(int n, int p)
{
    long long sum = n; // Для максимально возможного значение со знаком, т.к. есть отрицательные расчеты степени
    int static count = 1; // Статика при выходе сбросится - 17 строка
    int static base; // Переменная основания, чтобы не менялась в рекурсии
    int static pow; // Переменная показателя, чтобы не менялась в рекурсии
    if(count == 1) // Установим только один раз значения показателя и степени
    {
        pow = p;
        base = n;
    }
    if (count == pow) // условие выхода
    {
        count = 1; // Сброс счетчика, на случай повторного вызова функции
        return sum;
    }
    return sum *= recurs_power(base, count++); // рекурсия
}

int main()
{
    int n, p;
    printf("Введите целое основание степени в пределе (-100;+100) \nи натуральную степень не более 100, через пробел: ");
    scanf("%d%d", &n, &p);
    if(-100 > n) 
    {
        printf("Основание степени меньше -100!\n");
        return 1;
    }
    else if (n > 100) 
    {
    ("Основание степени меньше -100!\n");
        return 2;
    }
    else if(0 > p) 
    {
        printf("Показатель степени меньше 0!\n");
        return 3;
    }
    else if(p > 100) 
    {
        printf("Показатель степени больше 100!\n");
        return 4;
    }
    printf("%lld\n", recurs_power(n, p));
    return 0;
}