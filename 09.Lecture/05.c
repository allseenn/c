#include <stdio.h>
#include <string.h>

int main()
{
    FILE *f;
    int sum = 0;
    char string[50] = {0};
    char file_read[50] = {0};
    char file_write[50] = {0};
    printf("Enter filename to read: ");
    scanf("%s", file_read);
    printf("Enter filename to write: ");
    scanf("%s", file_write);
    f = fopen(file_read, "r");
    fscanf(f, "%[^\n]", string);
    fclose(f);
    f = fopen(file_write, "w");
    for (int i = 0; i < 3; i++)
    {
        fprintf(f, "%s%s", string, ", ");
    }
    fprintf(f, "%d", strlen(string));
    fclose(f);
    return 0;
}