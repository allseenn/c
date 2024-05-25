#include "temp_functions.h"

long filesize(char filename[])
{
    FILE *f;
    f = fopen(filename, "r");
    if (f == NULL)
        return 1;

    fseek(f, 0, SEEK_END);
    long file_size = ftell(f);
    rewind(f);
    fclose(f);
    return file_size;
}

int readfile(char filename[], list *myArray)
{
    FILE *f;
    f = fopen(filename, "r");
    if (f == NULL)
        return 1;


    int columns = 0;
    int year, month, day, hour, minute, temperature, line = 0;
    char s[COLUMNS*4];
    while ((columns = fscanf(f, "%d;%d;%d;%d;%d;%d", &year, &month, &day, &hour, &minute, &temperature)) > 0)
    { 

        if(columns == COLUMNS) 
        {
            myArray[line].year = year-2000;
            myArray[line].month = month;
            myArray[line].day = day;
            myArray[line].hour = hour;
            myArray[line].minute = minute;
            myArray[line].temperature = temperature;
            line++;
        }
        else{
            columns = fscanf(f, "%[^\n]", s);
            printf("ERROR line %d %s\n", line, s);
        }
    }
    fclose(f);
    return line;
}

void printYear(list *myArray, int size) {
    int8_t minimum = INT8_MAX; 
    long sum = 0;
    int8_t mean = 0;
    int8_t maximum = INT8_MIN;
    int year = myArray[0].year + 2000;
    for (int i = 0; i < size; i++) {
        if(minimum > myArray[i].temperature)
            minimum = myArray[i].temperature;
        if(maximum < myArray[i].temperature)
            maximum = myArray[i].temperature;
        sum += myArray[i].temperature;
    }
    mean = sum / size;
    printf("YEAR %d STATISTIC\t\n", year);
    printf("Minimum temperature:\t%d\n", minimum);
    printf("Mean temperature:\t%d\n", mean);
    printf("Maximum temperature:\t%d\n", maximum);
}

void printMonth(list *myArray, int size, int month) {
    int8_t minimum = INT8_MAX; 
    long sum = 0;
    long count = 0;
    int8_t mean = 0;
    int8_t maximum = INT8_MIN;
    for (int i = 0; i < size; i++) {
        if(myArray[i].month==month)
        {
            if(minimum > myArray[i].temperature)
                minimum = myArray[i].temperature;
            if(maximum < myArray[i].temperature)
                maximum = myArray[i].temperature;
            sum += myArray[i].temperature;
            count++;
        }
    }
    mean = sum / count;
    printf("MONTH %d STATISTIC\t\n", month);
    printf("Minimum temperature:\t%d\n", minimum);
    printf("Mean temperature:\t%d\n", mean);
    printf("Maximum temperature:\t%d\n", maximum);
}


