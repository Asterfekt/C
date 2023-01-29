#include <stdio.h>

int main ()

{
    int a;
    FILE* f;

    f=fopen("textwithnumber.txt","r");

    fscanf(f,"%d",&a);

    printf("a=%d \n",a);

    return 0;
}