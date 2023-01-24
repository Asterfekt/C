#include <stdio.h>
#define Len 10
int main()
{
    char buffer[Len];
    int i;
 
    scanf("%s", buffer);
    
    i=0;
    while(buffer[i]!=0)
        i++;
 
    i--;
 
    while(i>=0)
    {
        printf("%c", buffer[i]);
        i--;
    }
 
    return 0;
}