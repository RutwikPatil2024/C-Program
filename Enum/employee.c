#include<stdio.h>
#include<string.h>
enum Department{
    assembly,
    manufacturing,
    accounts,
    stores
};
struct Employee{
    char name[20];
    float salary;
    enum Department dept;
};
int main()
{
    struct Employee emp1;
    strcpy(emp1.name,"Rutwik");
    emp1.salary=10000;
    emp1.dept=accounts;
    printf("Name of employ :%s \n",emp1.name);
    printf("Salary of employ :%f \n",emp1.salary);
    printf("Department of Empoyee :%d \n",emp1.dept);
    
    return 0;
}