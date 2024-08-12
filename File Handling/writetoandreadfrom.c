#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct emp{
    char name[30];
    int age;
    float salary;
};
int main()
{
    struct emp e1;
    FILE *dest;
    dest=fopen("myfile1.txt","w");
    char str[80];
    if(dest==NULL){
        printf("File Not Open sucessfully");
        exit(1);
    }
    printf("Enter few lines to write in file : \n");
    char ch='Y';
    while (ch=='Y')
    {
        printf("Enter the Name , Age , Salary : ");
        scanf("%s %d %f",e1.name,&e1.age,&e1.salary);
        fprintf(dest,"%s %d %f\n",e1.name,e1.age,e1.salary);
        getchar();
        printf("Another record");
        ch=getchar();
    }
    fclose(dest);
    
    return 0;
}