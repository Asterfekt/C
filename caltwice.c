#include <stdio.h>

void hello()
{
printf("hello\n");
}

void world()
{
printf("world\n");
}

void calltwice(void fun())
{
    fun();
    fun();
}
int main ()
{
calltwice(hello);
calltwice(world);
    return 0;
}