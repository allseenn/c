#include <stdio.h> 

int main(void)
{
 char str[]="Hello!\n";
 FILE *f; f = fopen("in.txt","w");
 fprintf(f,"%s",str);
 fclose(f);
 f = fopen("in.bin","wb");
 fwrite(str,sizeof(str),1,f);
 fclose(f);
 return 0;
}
