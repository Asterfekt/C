

#include <stdio.h>

main ()
{

    int n, m ;
    printf("Two numbers greater than 0 \n");
    scanf("%d",&n);
    scanf("%d",&m);

    if(n>0 & m>0)
    {

        int table[m];
        int i;
        int k;


        for(k=0; k<n; k++) //columns
        {
            printf("\n*");

            for(i=1; i<m; i++) //poems
            {

                printf("*");

            }
        }


    }

    return 0;
}
