#include<stdio.h>
int main()
{
    int arr[][3]={{10,20,30},{40,50,60},{70,80,90}};
    // int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<3;i++)
    {
        printf("%d element is %d\n",i,(arr+i));
    }
    return 0;
}