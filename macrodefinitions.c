#include <stdio.h>

#define max(a,b) a>b?a:b

int main()
{
    int a,b;

    scanf("%d",&a);
    scanf("%d",&b);

    printf("max(a,b)=%d\n",max(a,b));

    return 0;
}
