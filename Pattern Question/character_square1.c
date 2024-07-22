#include<Stdio.h>
int main()
{
    int n ;
    printf("enter the number n= ");
    scanf("%d",& n);
    
    for(int i=1;i<=n;i++)
    {
        int a=1;
        for(int j=1;j<=n;j++)
        {
            int d=a+96;
            char ch=(char)d;
            printf(" %c ",ch);
            a++;
        }
        printf("\n");
    }
}