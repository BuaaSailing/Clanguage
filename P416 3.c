#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{

    FILE *files;
    int i=1;

    char ch;
    do
    {
        files=fopen(argv[i],"r");
        if(files==NULL)
        {
            printf("Failed to open files.\n");
            exit(EXIT_FAILURE);
        }
        while ((ch=fgetc(files))!=EOF)
        {
            printf("%c",ch);
        }
        i++;
    }while(argv[i]!=NULL);
}