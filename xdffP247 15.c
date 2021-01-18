#include <stdio.h>
//#define ENGLISH 1
#define SPANISH
int main(void)
{
#if defined(ENGLISH)
    printf("Insert Disk 1\n");
#elif defined(FRENCH)
    printf("Le Disque 1\n");
#elif defined(SPANISH)
    printf("El Disco 1\n");
#endif

    return 0;
}