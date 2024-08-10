#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    FILE *dest;
    dest=fopen("myfile1.txt","w");
    char str[80];
    if(dest==NULL){
        printf("File Not Open sucessfully");
        exit(1);
    }
    printf("Enter few lines to write in file : ");
    while (strlen(gets(str))>0)
    {
        fputs(str,dest);
        fputs("\n",dest);
    }
    printf("Data Written Sucessfully to file ");  
    FILE *src;
    src=fopen("myfile1.txt","r");
    if(src==NULL){
        printf("File Not Open sucessfully");
        exit(1);
    } 
    while (fgets(str,79,src)!=NULL)
    {
        printf("%s",str);
    }
    
    return 0;
}