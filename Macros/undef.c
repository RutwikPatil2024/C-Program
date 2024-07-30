#include<stdio.h>
#define pr printf 
int main()
{
    pr("Hello");
    #undef pr
    pr("Hello");
    return 0;
}