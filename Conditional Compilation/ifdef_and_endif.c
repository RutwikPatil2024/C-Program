#include <stdio.h>
#define NOTNOW
int main()
{
    printf("Entered into main() method\n");
    #ifdef NOTNOW
        printf("Statement 1 in ifdef\n");
        printf("Statement 2 in ifdef\n");
        printf("Statement 3 in ifdef\n");
    #endif
    printf("Statement 1 outside of ifdef\n");
    printf("Statement 1 outside of ifdef\n");
    printf("Statement 1 outside of ifdef\n");
    return 0;
}