#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    FILE *dest;
    dest=fopen("myfile.txt","w");
    if(dest==NULL){
        printf("File Not Open sucessfully");
        exit(1);
    }
    char data[30];
    printf("enter the data to write in file : ");
    gets(data);
    int len=strlen(data);
    // printf("%d",len);
    int i=0;
    while (i<len)
    {
        fputc(data[i],dest);
        i++;
    }
    printf("Data Written Sucessfully to file ");
    
    
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