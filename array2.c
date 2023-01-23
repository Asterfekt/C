#include <stdio.h>

#define LEN 5

void Mul(int array[])

{
    int i;
    for ( i = 0; i < LEN; i++)
    {
       array[i]*=2;
         printf("%d \n",array[i]);
    }
  
}
int main ()
{

    int a[LEN];
    int i;

    for(i=0;i<LEN;i++)
{
    a[i]=i;
}
Mul(a);
    return 0;
}