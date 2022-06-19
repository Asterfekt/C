

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
main()
{

    int a ;
    int b ;
    double RESULT ;
    int c;
    char d;
HERE:
    printf("ENTER NUMBER  A \n");
    scanf("%d",&a);
    printf("ENTER NUMBER B \n");
    scanf("%d",&b);
    printf("What are you doing with your numbers : \n 1./ \n 2.* \n 3.- \n 4.+ \n");
    scanf("%d",&c);

    switch(c)
    {

    case 1:
    {
        printf("Your RESULT :\n");
        if(b==0)
        {
            printf("ERROR !!! \n");
        }
        RESULT=a/b;
        printf("%.2f\n",RESULT);
        printf("Continue ?T/N\n");
        scanf("%s",&d);
        if(d=='T')
        {
            goto HERE;
        }
        else
        {
            break;
        }
    }
    case 2:
    {
        printf("Your RESULT :\n");
        RESULT=a*b;
        printf("%.2f\n",RESULT);
        printf("Continue ?T/N\n");
        scanf("%s",&d);
        if(d=='T')
        {
            goto HERE;
        }
        else
        {
            break;
        }
    }
    case 3:
    {
        printf("Your RESULT :\n");
        RESULT=a-b;
        printf("%.2f\n",RESULT);
        printf("Continue ?T/N\n");
        scanf("%s",&d);
        if(d=='T')
        {
            goto HERE;
        }
        else
        {
            break;
        }
    }
    case 4:
    {
        printf("Your RESULT :\n");
        RESULT=a+b;
        printf("%.2f\n",RESULT);
        printf("Continue ? T/N\n");
        scanf("%s",&d);
        if(d=='T')
        {
            goto HERE;
        }
        else
        {
            break;
        }
    }

    }
    return 0;
}
