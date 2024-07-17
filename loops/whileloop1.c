#include<stdio.h>
int main()
{
    short int i=1;
    int count=0;
    printf("size of %d",sizeof(i));
    while(i)
    {
        printf("%d\n",i);
        i++;
        count++;
    }
    printf("size of %d",count);
    // 65536 65535  -32786 to 32787
    // size of 65535
    return 0;
}