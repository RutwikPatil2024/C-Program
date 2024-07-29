#include <stdio.h>
#define INTELI7
int main()
{
    printf("Inside main method\n");
    #ifdef INTELI7
        printf("this is inteli7 Machine\n");
    #else
        printf("This is not inteli7 machine\n");
    #endif
    printf("outside of #ifdef-#else-#endif\n");
    return 0;
}