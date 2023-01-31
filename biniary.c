#include <stdio.h>


int main()

{
    FILE* f;
    
int data=123;

f=fopen("demo.bin","wb");

fwrite(&data,sizeof(int),1,f);
fclose(f);

    return 0;
}