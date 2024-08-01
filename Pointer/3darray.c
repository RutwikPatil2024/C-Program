#include<stdio.h>
int main()
{
    int arr[3][3][2]={{{1,2},{3,4},{5,6}},{{1,2},{3,4},{5,6}},{{1,2},{3,4},{5,6}}};
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            for(int k=0;k<2;k++)
            {
                printf(" %d ",*(*(*(arr+i)+j)+k));
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}