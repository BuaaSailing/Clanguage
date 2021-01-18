#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void *get_mem(void);
void *get_mem(void)
{
    void *p = (char *)malloc(100);
    return p;
}
int main(void)
{
    char *str;
    str=get_mem();
    strcpy(str, "hello world");
    if (NULL == str)
    {
        printf("Error");
        return -1;
    }

    printf("%s",str);

    return 0;
}
