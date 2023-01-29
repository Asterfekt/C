#include <stdio.h>


int main ()
{

    FILE* f;

    f=fopen("hello.txt","a");


    fprintf(f,"Hello world");

    fclose(f);

    return 0;
}