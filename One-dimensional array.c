
#include <stdio.h>
main ()
{
    int i=0;
    int k=0;
    int a1;
    printf("The size of the array \n");
    scanf("%d",&a1);
    int table[a1];
    while(i<a1)
    {
        printf("Number table [%d] ",i);
        scanf("%d",&table[i]);
        i++;
    }
    while(k<a1)
    {
        printf("%d ",table[k]);
        k++;
    }

    return 0;
}
