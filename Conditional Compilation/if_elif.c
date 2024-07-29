#include <stdio.h>
#define TEST 10
int main()
{
    printf("Inside main method\n");
    #if TEST<5
        printf("less than 5\n");
    #else
        printf("greater than 5\n");
    #endif
    printf("outside of #ifdef-#else-#endif\n");
    return 0;
}