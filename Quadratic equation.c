#include <stdio.h>
#include <math.h>

main(){
//quadratic equations
int a,b,c  ;
//Number A

printf("ax^2+bx+c=0\n");
printf("Podaj a\n");
scanf("%d",&a);
if(a==0){
        printf("is it not a quadratic equations\n");
        return 0;}
printf("Podaj b\n");
scanf("%d",&b);
printf("Podaj c\n");
scanf("%d",&c);
float equal=(b*b)-4*a*c;
printf("delta=%.f\n",equal);
if(equal>0){
    printf("the equation has two solutions. \n");
    float x1,x2;
    x1=(-b-sqrt(equal))/(2*a);
    x2=(-b+sqrt(equal))/(2*a);
     printf("x1=%.2f \n",x1);
      printf("x2=%.2f \n",x2);


}
if(equal<0){
    printf("the equation has no solutions. \n");
}
if(equal==0){
    printf("the equation has one solutions. \n");
    float x1,x2;
    x1=(-b)/(2*a);
     printf("x1=%.2f \n",x1);


}
return 0;
}
