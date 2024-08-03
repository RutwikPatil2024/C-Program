#include<stdio.h>
int main()
{
    char str[20];
    printf("Enter the string : ");
    scanf("%[^\n]s",str);
    printf(" %s \n",str);
    return 0;
}