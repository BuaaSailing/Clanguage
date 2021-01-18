#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char *get_mem(void);
char *get_mem(void)
{
    char p[] = "hello world";
    char *pt=p;
    return pt;
}
int main(void)
{
    char *str;
    str = get_mem();
    if (NULL==str)
    {
        printf("Error");
        return -1;
    }
    while(*str)
    {
        printf("%c",*str);
        str++;
    }

    return 0;
}