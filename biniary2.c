#include <stdio.h>


int main()

{
    FILE* f;  
    int data;

f=fopen("demo.bin","rb");

fread(&data,sizeof(int),1,f);

printf("%x \n",data);

fclose(f);

    return 0;
}