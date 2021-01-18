#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 80
char *duplicate(char *);
int main(void)
{
    printf("Please enter a str:");
    char sentence[MAX];
    gets(sentence);
    char *p=duplicate(sentence);
    if (NULL==p)
    {
        printf("Failed in allocating.\n");
        return -1;
    }
    for (int i=0;i<strlen(sentence);i++)
    {
        printf("%c",*p);
        p++;
    }

    return 0;
}
char *duplicate(char sentence[])
{
    int len=strlen(sentence);
    char *pt;
    pt=(char *)malloc(len+1);
    if (pt==NULL)
    {
        printf("Error:malloc failed.\n");
        return NULL;
    }
    else
    {
        strcpy(pt,sentence);
        return pt;
    }
}