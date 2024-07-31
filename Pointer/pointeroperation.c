#include<stdio.h>
int main()
{
    int arr[]={10,20,30,40,50,60,70};
    int *x,*y;
    x=&arr[0];
    y=&arr[4];
    printf("value of x is %d\n",x);
    printf("value of y is %d\n",y);
    printf("value of y-x is %d\n",y-x);
    // printf("value of y+x is %d\n",x/y);
    return 0;
}