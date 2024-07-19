#include<stdio.h>
int main()
{
    int n ;
    printf("enter the number=");
    scanf("%d", & n);
    int nsp=1;
    int nst=n ;
    int  a=1 ;
    for(int i=1;i<=2*n+1;i++)
    {
        int c=a+64 ;
        char ch=(char)c;
        printf("%c",ch);
        a++;
    }
    printf("\n");
    for(int i=1 ; i<=n;i++)
    {
        int a=1;
        int d=64+a;
        char ch=(char)d;
        for(int j=1;j<=nst;j++)
        {
            printf("%c",ch);
            ch++;
        }
        for(int k=1;k<=nsp;k++)
        {
            printf(" ");
        }
        for(int j=1;j<=nst;j++)
        {
            printf("%c",ch);
            ch++;
        }
        
        nst-- ;
        nsp=nsp+2;
        printf("\n");
    }
}