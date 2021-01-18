#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    FILE *file=fopen("C:\\Users\\DELL\\Desktop\\BUAA20-21Fall\\Cprogramming\\Code\\Week 16\\num","r");
    if(file==NULL)
    {
        printf("Failed to open files.\n");
        exit(EXIT_FAILURE);
    }
    char ch;
    int i=0;
    while ((ch=fgetc(file))!=EOF)
    {
        if (ch>=48 && ch<=57)
            ;
        else
        {
            continue;
        }
        switch (i)
        {
            case 0:
                printf("(");
                break;
            case 3:
                printf(") ");
                break;
            case 6:
                printf("-");
                break;
            case 10:
                i=0;
                printf("\n(");
                break;
        }
        i++;
        printf("%c",ch);
    }

    return 0;
}