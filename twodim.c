#include <stdio.h>
#include <stdlib.h>

#define LEN 5

int main ()

{
    char** dugenons;
    int i,j;
    dugenons=(char**)malloc(LEN*sizeof(char*));

    for ( i = 0; i < LEN; i++)
    {
      dugenons[i]=(char*)malloc(LEN*sizeof(char));

    }
    
     dugenons[0][0]='#'; dugenons[0][1]='#'; dugenons[0][2]='#'; dugenons[0][3]='#';dugenons[0][4]='#';
     dugenons[1][0]='#'; dugenons[1][1]=' '; dugenons[1][2]=' '; dugenons[1][3]='#';dugenons[1][4]='#';
     dugenons[2][0]=' '; dugenons[2][1]='#'; dugenons[2][2]='#'; dugenons[2][3]='#';dugenons[2][4]='#';
     dugenons[3][0]='#'; dugenons[3][1]=' '; dugenons[3][2]='#'; dugenons[3][3]=' ';dugenons[3][4]='#';
     dugenons[4][0]='#'; dugenons[4][1]='#'; dugenons[4][2]='#'; dugenons[4][3]='#';dugenons[4][4]='#';

     for(i=0;i<LEN;i++)
     {
        for (j = 0; j < LEN; j++)
        {
         putchar(dugenons[i][j]);
        }
        putchar('\n');
     }
     for (i=0;i<LEN;i++)
     {free(dugenons[i]);}
     free(dugenons);
     return 0;
}