#include "temp_functions.h"

int readfile(char filename[])
{
    queue *pq = NULL;
    FILE *f;
    f = fopen(filename, "r");
    if (f == NULL)
        return 1;

    fseek(f, 0, SEEK_END);
    long file_size = ftell(f);
    rewind(f);
    int line_count = (file_size + LINE_LENGTH - 1) / LINE_LENGTH;
    struct list *myArray = (struct list *)malloc(line_count * sizeof(struct list));


    int columns = 0;
    int year, month, day, hour, minute, temperature, line = 0;
    char s[23];
    while ((columns = fscanf(f, "%d;%d;%d;%d;%d;%d", &year, &month, &day, &hour, &minute, &temperature)) > 0)
    { 

        if(columns == COLUMNS) 
        {
        myArray[line++].year = year-2000;
        myArray[line++].month = month;
        myArray[line++].day = day;
        myArray[line++].hour = hour;
        myArray[line++].minute = minute;
        myArray[line++].temperature = temperature;
        //    enqueue(&pq, year-2000, month, day, hour, minute, temperature);
        }
        else{
            columns = fscanf(f, "%[^\n]", s);
            printf("ERROR line %d %s", line, s);
        }

    }
    fclose(f);
//    print_list(pq);
}
