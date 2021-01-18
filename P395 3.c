#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *output=fopen("C:\\Users\\DELL\\Desktop\\BUAA20-21Fall\\Cprogramming\\Code\\Week 16\\f","r+");
    int flag=0;
    char t={0};

    while ((t=fgetc(output))!=EOF)
    {
        if ((flag % 2) ==0)
        {
            printf("%c ",t);
            flag++;
        }
        else
        {
            flag++;
            continue;
        }
    }

    return 0;
}