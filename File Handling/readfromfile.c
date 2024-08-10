#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *src;
    // FILE *dest;
    src=fopen("test.txt","r");
    if(src==NULL){
        printf("File Not Open sucessfully");
        exit(1);
    }
    // char data[30];
    // printf("enter the data to write in file : ");
    // gets(data);
    while (1)
    {
        char ch=fgetc(src);
        if(ch==EOF)
        {
            break;
        }
        else
        {
            printf("%c",ch);
        }
    }
    
    
    // dest=open("Test.txt",'r');
    // if(dest==NULL){
    //     printf("File Not Open sucessfully");
    //     exit(1);
    // }
    // while (1)
    // {
    //     char ch=getc(dest);
    //     if(ch==EOF)
    //     {
    //         break;
    //     }
    //     else
    //     {
    //         printf("%c",ch);
    //     }
    // }
    // fclose(src);
    // fclose(dest);    
    return 0;
}