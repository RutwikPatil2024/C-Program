#include<stdio.h>
int main()
{
    int i=1;
    int count=0;
    printf("size of %d",sizeof(i));
    while(i)
    {
        printf("%d\n",i);
        i++;
        count++;
    }
    printf("size of %d",count);
    // 4bytes  -->4294967296    -2147483648 to 2147483647
    
    return 0;
}