#include<stdio.h>
int main()
{
    int n ;
    printf("enter the number n= ");
    scanf("%d", & n);
    int a=1 ;
    for(int i=1;i<n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        int  b=1;
        for(int k=1;k<=a;k++ )
        {
            int d=b+64 ;
            char ch=(char)d;
            printf("%c",ch);    
            b++ ;
        }
        a=a+2;
        for(int a=1;a<=n-i;a++)
        {
            printf(" ");
        }
        printf("\n");
    }
    
}