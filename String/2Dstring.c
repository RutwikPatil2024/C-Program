#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main()
{
    char names[6][20]={"Rutwik","Ram","Raj","Raju","Shyam","Tom"};
    char name[20];
    printf("Enter your Name : ");
    scanf("%s",name);
    bool flag=false;
    for(int i=0;i<6;i++)
    {
        if(strcmp(&names[i][0],name)==0)
        {
            flag=true;
        }
    }
    if(flag==true)
    {
        printf("You are Welcome\n");
    }
    else
    {
        printf("You are not a memeber\n");
    }
    return 0;
}