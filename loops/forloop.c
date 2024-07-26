#include<stdio.h>
int main()
{
    int i;
    int j;
    // for loop 1
    // for(int i=10;i;i--)
    // {
    //     printf("%d\n",i);
    // }
    // for loop 2
    // for(i<4;j=5;j=0)
    // {
    //     printf("%d\n",i);
    // }
    // for loop 3
    // for(int i=1;i<=10;printf(" %d ",i++)); 
    // for loop 3
    for(scanf("%d",&i);i<=10;i++)
    {
        printf("%d",i);
    }
    printf("Loop Ended\n");
    return 0;
}