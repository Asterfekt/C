//fizzz divided 3
//buzz divided 5
//Range 1-100

#include <stdio.h>
int main ()
{


for (int i=1;i<=100;i++){

if(i % 3==0 & i % 5!=0){
printf("fizzz \n");
}
if(i % 5==0 & i % 3!=0 ){
printf("Buzz \n");
}
if(i % 3!=0 & i % 5!=0 ){
        printf("%d \n",i); }
if(i % 3==0 & i % 5==0 ){
        printf("FizzzBuzz \n",i); }
    }
return 0;
}
