#include<stdio.h>
#include<stdlib.h>

void cal_char(FILE *);

void cal_word(FILE *);

void cal_row(FILE *);

int main(int argc,char *argv[])
{
    FILE *files;
    int i=1;
    char ch;
    do
    {
        files=fopen(argv[i],"r");
        if (files==NULL)
        {
            printf("Failed to open files.\n");
            exit(EXIT_FAILURE);
        }
        cal_char(files);
        cal_word(files);
        cal_row(files);
        fclose(files);
        printf("\n");
        i++;
    }while (argv[i]!=NULL);
}

void cal_char(FILE *f)
{
    int i=0;
    char ch;
    while ((ch=fgetc(f))!=EOF)
    {
        i++;
    }
    printf("The character of this file is %d.\n",i);
}

void cal_word(FILE *f)
{
    rewind(f);
    int i=0;
    char ch;
    int flag=1;
     while ((ch=fgetc(f))!=EOF)
    {
        if(flag==1)
        {
            if (ch!='\n' || ch!= ' ')
            {
                i++;
                flag=0;
            }
        }
        else if (ch=='\n' || ch==' ')
        {
            flag=1;
        }
    }


    printf("The words of this file is %d.\n",i);
}

void cal_row(FILE *f)
{
    rewind(f);
    int i=0;
    char ch;
    while ((ch=fgetc(f))!=EOF)
    {
        if(ch=='\n')
        {
            i++;
        }
    }
    if (i==0)
        printf("The row of this file is 1.\n");
    else
        printf("The row of this file is %d.\n",i);
}