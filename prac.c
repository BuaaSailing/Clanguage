#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(void)
{
    char p[]="hello world";
    char *pt=p;
    printf("%c",*pt);
    return 0;
}