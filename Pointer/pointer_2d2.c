#include<stdio.h>
int main()
{
    int arr[][3]={{10,20,30},{40,50,60},{70,80,90}};
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("(%d %d) element is %d\n",i,j,*(*(arr+i)+j));
        }
    }
    return 0;
}