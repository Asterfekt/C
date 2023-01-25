#include <stdio.h>

typedef struct 
{
  int age;
  int distance;
} Car;
 
int main()
{
  Car car;
  Car* car_ptr = &car;
(*car_ptr).age=10;
  printf("%d",(*car_ptr).age);
  return 0;
}