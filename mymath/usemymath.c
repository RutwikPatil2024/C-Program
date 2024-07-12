#include<stdio.h>
#include "mymath.h"
int main()
{
    int n;
    printf("Enter the nummber n : ");
    scanf("%d",&n);
    int ans=square(n);
    printf("Square of %d is %d",n,ans);
    return 0;
}