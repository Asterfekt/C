#include <stdio.h>

typedef struct Stack_el
{
    int value;
    struct stack_el* next;
    
}stack_el;

stack_el new_stack_el(int value)
{
    stack_el el ={value, NULL};
    return el;
}

int main ()
{
    stack_el el1,el2,el3;

    el1=new_stack_el(1);
    el2=new_stack_el(2);
    el3=new_stack_el(3);

    el3.next=&el2;
    el2.next=&el1;
    el1.next=NULL;

    return 0;
}