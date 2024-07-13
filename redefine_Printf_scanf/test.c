#include<stdio.h>
#define pf printf
#define sc scanf
int main()
{
    int a,b;
    pf("Enter the number a : ");
    sc("%d",&a);
    pf("Enter the number b : ");
    sc("%d",&b);
    pf("Sum of %d and %d is : %d",a,b,(a+b));
    return 0;
}