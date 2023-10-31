#include <stdio.h>
#include <locale.h> //библиотека функций локализации
int main(int argc, char **argv)//аргументы командной строки
{
setlocale(LC_ALL, "Rus"); //устанавливаем русскую локализацию
printf("Вычисление корней квадратного уравнения \\ \"a*x*x+b*x+с=0\"\n");
printf("Введите a:\n");
printf("Введите b:\n");
printf("Введите c:\n");
printf("Корни квадратного уравнения \n");
printf("X1 = \n");
printf("X2 = \n");
return 0;
}
