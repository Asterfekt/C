#include <stdio.h>

#define FILE_NOT_OPENED 1
#define IMPROPER_UASGE 2

int main(int argc, char** argv)
{
FILE* f;
char c;

if(argc!=2)
{
printf("Usage:cat filename");
return IMPROPER_UASGE;
}
f=fopen(argv[1],"r");
if (f==NULL)
{
    printf("ERROR: file %s could not be opened",argv[1]);
    return FILE_NOT_OPENED;
}
while ((c=fgetc(f))!=EOF)
{
putchar(c);
}
fclose(f);
return 0;
}