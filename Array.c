#include <stdio.h>

#define Number_Of_Empoless 3


typedef struct 
{
    int id;
    int age;
    double salary;
} Employee;

void PrintEmployeeStatus(Employee employee)
{
    printf("id: %d, age: %d, salary: %.2f\n",employee.id,employee.age,employee.salary);
}

int main()
{
    Employee employee[Number_Of_Empoless];

    employee[0].id=0;
    employee[0].age=21;
    employee[0].salary=5500.0;

    employee[1].id=1;
    employee[1].age=24;
    employee[1].salary=7600.5;
 
    employee[2].id=2;
    employee[2].age=27;
    employee[2].salary=3600.5;

for (int i=0; i<Number_Of_Empoless; i++)

{

    PrintEmployeeStatus(employee[i]);
}
    return 0;
}