#include<stdio.h>
void change(int arr[])
{
    arr[0]=100;
}
int main()
{
    int arr[]={10,20,30,40,50,60};
    int n=sizeof(arr)/sizeof(arr[0]);
    printf("Before passing\n");
    for(int i=0;i<n;i++)
    {
        printf(" %d ",arr[i]);
    }
    change(arr);
    printf("After passing\n");
    for(int i=0;i<n;i++)
    {
        printf(" %d ",arr[i]);
    }
    return 0;
}