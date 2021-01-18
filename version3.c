#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void get_mem(char **,int);
void get_mem(char **p, int num)
{
    *p = (char *)malloc(num);
}
int main(void)
{
    char *str = NULL;
    get_mem(&str, 100);
    strcpy(str, "hello");
    printf("%s",str);

    return 0;
}