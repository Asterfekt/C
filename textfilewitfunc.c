#include <stdio.h>

#define BUFF_LEN 1024

int readline(FILE* f,char line[])
{
    int len=0;
    char c;

    while((c=fgetc(f))!='\n'&& c!=EOF)
    {
        line[len]=c;
        len++;
    }
    line[len]=0;

return len;
}




int main ()

{
    char line[BUFF_LEN];
    FILE* f;
    
    int len;

    f=fopen("textwithnumber.txt","r");

    while((len=readline(f,line))>0)
    printf("%s \n",line);
    
    fclose(f);
    return 0;
}