#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
int main(void)
{
    char*str = (char*)malloc(100);
    strcpy(str, "hello");
    free(str);
    str = (char*)malloc(100);
    if (str != NULL)
    {

        strcpy(str, "world\0");
        printf("%s",str);
    }
    else
    {
        printf("Error");
        return -1;
    }

    return 0;
}