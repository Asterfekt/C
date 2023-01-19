#include <stdio.h>

int greatestcommondivisor(int a, int b)
{
int score;
while(b!=0)
{ 
   
    score=a%b;
    a=b;
    b=score;
   
}
 return a;
}

int main()
{
	int a;
	int b;

	while (scanf("%d %d",&a,&b)>=2)
	{
		printf("%d\n",greatestcommondivisor(a,b));
	}

	return 0;
}