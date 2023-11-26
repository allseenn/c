int main(int argc, char const *argv[])
{
    int a;
    printf("Enter number of month: ");
    scanf("%d", &a);
    if (a < 3 || a == 12){
        printf("winter\n");
    }
    else if (a > 2 && a < 6)
    {
        printf("spring\n");
    }
        else if (a > 5 && a < 9)
    {
        printf("summer\n");
    }
        else if (a > 8 && a < 12)
    {
        printf("autumn\n");
    }
    return 0;
}