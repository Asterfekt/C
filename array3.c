#include <stdio.h>

#define LEN 10


int main ()
{
    int array[LEN];

int i;

for ( i = 0; i < LEN; i++)
{
  scanf("%d",&array[i]);
}
for (i=0;i<LEN;i++)
    {
        printf("%d ",array[LEN-i-1]);
    }

    return 0;
}