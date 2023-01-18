#include <stdio.h>

int readnumber()
{
 int num;
printf("Please enter a value greater than 0 \n");

do {
scanf("%d",&num);
if (num<0)
{
    printf("Value must be greater than 0 ...\n");
}

}
while (num<0);

 return num;

}

int main()
{
int num1,num2;
num1=readnumber();
num2=readnumber();
printf("num1=%d\n",num1);
printf("num2=%d\n",num2);
return 0;
}
