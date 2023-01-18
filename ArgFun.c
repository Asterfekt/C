#include <stdio.h>

double circeleArea(double radius)
{
double area;
area=3.14*radius*radius;
return area;


}
int main()
{
double promien;
double powierzchnia;

printf("Wpisz promień koła\n");
scanf("%lf",&promien);

powierzchnia=circeleArea(promien);
printf("Circle area: %.3lf \n",powierzchnia);
return 0;
}