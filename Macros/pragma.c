#include<stdio.h>
void fun1();
void fun2();
#pragma startup fun1
#pragma exit fun2
int main()
{
    printf("I am in Main function\n");
    return 0;
}

void fun1()
{
    printf("This is fun1\n");
}

void fun2()
{
    printf("This is fun2\n");
}