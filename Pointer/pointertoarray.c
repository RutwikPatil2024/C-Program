#include<stdio.h>
int main()
{
    int arr[][3]={{10,20,30},{40,50,60},{70,80,90}};
    int (*p)[3];
    for(int i=0;i<3;i++)
    {
        p=&arr[i];
        int *ptr=(int*)p;
        printf("\n");
        for(int j=0;j<3;j++)
        {
            printf("%d value is %d\n",j,*(ptr+j));
        }
    }
    return 0;
}