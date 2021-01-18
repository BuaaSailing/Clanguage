#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    FILE *inputfile=fopen("C:\\Users\\DELL\\Desktop\\BUAA20-21Fall\\Cprogramming\\Code\\Week 16\\reverse","w");
    if (inputfile==NULL)
    {
        printf("Failed to open files.\n");
        exit(EXIT_FAILURE);
    }
    fprintf(inputfile,"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz");
    fclose(inputfile);

    FILE *input=fopen("C:\\Users\\DELL\\Desktop\\BUAA20-21Fall\\Cprogramming\\Code\\Week 16\\reverse","r");
    if (input==NULL)
    {
        printf("Failed to open files.\n");
        exit(EXIT_FAILURE);
    }
    fseek(input,0L,SEEK_END);
    long int last,offset;
    last=ftell(input);

    char ch;

    printf("\n");
    for (offset=0;offset<=last;offset++)
    {
        fseek(input,-offset,SEEK_END);
        ch=getc(input);
        printf("%c",ch);
    }
    printf("\n");

    return 0;
}