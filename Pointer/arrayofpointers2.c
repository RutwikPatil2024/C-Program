#include<stdio.h>
int main()
{
    int arr[5]={10,20,30,40,50};
    int *ptr[5]={arr,arr+1,arr+2,arr+3,arr+4};
    for(int i=0;i<5;i++)
    {
        printf("%d  %u\n",i,(ptr+i));
    }
    return 0;
}