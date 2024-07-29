#include<stdio.h>
#define AREA(n) n*n
int main()
{
    int i=64/AREA(4);
    printf("Value of i %d",i);
    return 0;
}