#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>
#define NUM 1000
#define Proportion 0.5
char *add_num(int);
int main(void)
{

    int num;
    printf("Please enter a number:");
    scanf("%d",&num);
    char *pt=add_num(num);
    printf("%s",pt);
    free(pt);

    return 0;
}
char *add_num(int n)
{
    srand(time(NULL));
    int randnum;
    char *ptnum=(char *)malloc(sizeof(char)*(NUM));
    memset(ptnum,0,NUM);
    char *single_num=(char *)malloc(sizeof(char)*1);
    int ceil=NUM;
    for (int i=0;i<n;i++)
    {
        if (i<(int)(ceil*Proportion))
        {
            randnum=rand()%10;
            itoa(randnum,single_num,10);
            strcat(ptnum,single_num);
        }
        else
        {
            ptnum=(char *)realloc(ptnum,((int)(ceil*1.2))*sizeof(int));
            printf("Memory locates: %x\n",ptnum);
            ceil*=(2-Proportion);
        }

    }
    return ptnum;
}