int main(int argc, char const *argv[])
{
    int a, b, c;
    printf("Enter 3 numbers delimited by space: ");
    scanf("%d%d%d", &a, &b, &c);
    if (a < b && b < c){
        printf("YES\n");
    }
    else printf("NO\n");
    return 0;
}