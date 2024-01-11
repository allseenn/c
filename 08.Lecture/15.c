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