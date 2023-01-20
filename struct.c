#include <stdio.h>

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
    Employee employee1, employee2;

    employee1.id=0;
    employee1.age=21;
    employee1.salary=5500.0;

    employee2.id=1;
    employee2.age=24;
    employee2.salary=7600.5;

    PrintEmployeeStatus(employee1);
    PrintEmployeeStatus(employee2);

    return 0;
}