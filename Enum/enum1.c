#include<stdio.h>
enum mar_status{
    married,
    unmarried,
    divorced,
    widowed
};
int main()
{
    enum mar_status person1;
    person1=widowed;
    printf("Marriage statusof person1 is : %d",person1);

    return 0;
}