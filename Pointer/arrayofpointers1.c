#include<stdio.h>
int main()
{
    int i=10,j=20,k=30,l=40,m=50;
    int *arr[5];
    arr[0]=&i;
    arr[1]=&j;
    arr[2]=&k;
    arr[3]=&l;
    arr[4]=&m;
    for(int i=0;i<5;i++)
    {
        printf("%d  %u\n",i,(arr+i));
    }
    return 0;
}