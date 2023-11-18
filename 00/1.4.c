#include<stdio.h>
main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower=0;
    upper=300;
    step=20;

    celsius=lower;
    printf("Celsius to Fahrenheit\n\n");
    printf("%3s %7s\n", "cel", "fahr");
    while(fahr<=upper)
    {
        fahr=(celsius/5*9)+32;
        printf("%3.0f %6.0f\n", celsius, fahr);
        celsius=celsius+step;
    }
}
