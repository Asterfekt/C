#include <stdlib.h>
#include <stdio.h>

int compare(void* a, void* b)
{
    int a_ = *(int*)a;
    int b_ = *(int*)b;

    return a_- b_;
}

int main()
{
    int data[]={4, 1, 5, 7, 3, 2, 10};

    qsort(data, 7, sizeof(int), compare);

printf("%d\n",data[0]);
printf("%d\n",data[1]);
printf("%d\n",data[2]);
printf("%d\n",data[3]);
printf("%d\n",data[4]);
printf("%d\n",data[5]);
printf("%d\n",data[6]);

    return 0;
}