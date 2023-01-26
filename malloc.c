#include <stdio.h>
#include <string.h> //strlen
#include <stdlib.h> //malloc

int main ()
{
    char char_1='A';
    char *text ;
    int len;
    printf("Char_1: %c \n",char_1);
    printf("Enter message length:");
    scanf("%d",&len);
    text=(char*)malloc(sizeof(char)*len);
    printf("Enter message: ");
    scanf("%s",text);
    printf("Message length: %d \n",strlen(text));
    printf("some_char: %c\n",char_1);


return 0;
}