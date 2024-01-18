#include <stdio.h>

int main()
{
    FILE *f;
    int sum = 0;
    int n = 0;
    char filename[50] = {0};
    printf("Enter file name: ");
    scanf("%s", filename);
    f = fopen(filename, "r+");
    while(fscanf(f, "%d", &n) == 1)
        sum+=n;
    
    fseek(f, 0, SEEK_END);

    fprintf(f, "%c%d", ' ', sum);
    printf("%s %lu\n", filename, sum);
    printf("%d", ftell(f));
    return 0;
}
