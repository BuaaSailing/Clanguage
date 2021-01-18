#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void compress_file(FILE *,char *);

void uncompress_file(FILE *,char *);

int main(int argc,char *argv[])
{
    FILE *file;

    if (strcmp(argv[1],"compress_file")==0)
    {
        file=fopen(argv[2],"r");
        if(file==NULL)
        {
            printf("Failed to open files(file).\n");
            exit(EXIT_FAILURE);
        }

        compress_file(file,argv[2]);
        fclose(file);

    }
    else if(strcmp(argv[1],"uncompress_file")==0)
    {
        file=fopen(argv[2],"r");
        if(file==NULL)
        {
            printf("Failed to open files(file).\n");
            exit(EXIT_FAILURE);
        }

        uncompress_file(file,argv[2]);
        fclose(file);

    }
    else
    {
        printf("Error in operation_name.\n");
        exit(EXIT_FAILURE);
    }

    return 0;
}

void compress_file(FILE *f,char *filename)
{
        FILE *re_file;
        char *rename=(char *)malloc(strlen(filename)+strlen(".rle\0"));
        strcpy(rename,filename);
        strcat(rename,".rle");

        re_file=fopen(rename,"w");
        if (re_file==NULL)
        {
            printf("Failed to open files(re_file).\n");
            exit(EXIT_FAILURE);
        }

        fseek(f,0,SEEK_END);
        int len=ftell(f)/2;
        rewind(f);

        unsigned int arg1,arg2;
        unsigned int num_num[len];
        for (int i=0;i<len;i++)
        {
            num_num[i]=0;
        }
        unsigned int num[len];

        int flag=1;
        int flag_num_num=0;

        fscanf(f,"%2x",&arg1);
        //printf("The first num is %02X\n",arg1);
        num_num[0]+=1;
        num[0]=arg1;
        while (flag<len)
        {
            arg2=arg1;
            fscanf(f,"%2x",&arg1);
            //printf("The num is %02X\n",arg1);
            if (arg1==arg2)
            {
                num_num[flag_num_num]++;
            }
            else
            {
                flag_num_num++;
                num[flag_num_num]=arg1;
                num_num[flag_num_num]++;
            }
            flag++;
        }

        for (int i=0;i<len;i++)
        {
            if (num_num[i]!=0)
            {
                printf("%02X ",num_num[i]);
                printf("%02X ",num[i]);
                fprintf(re_file,"%02X ",num_num[i]);
                fprintf(re_file,"%02X ",num[i]);
            }
            else
            {
                exit(EXIT_SUCCESS);
            }
        }
        fclose(re_file);

}

void uncompress_file(FILE *f,char *filename)
{
    FILE *re_file;

    char *name=strchr(filename,'.');
    if (name==NULL)
    {
        printf("Error in filename.\n");
        exit(EXIT_FAILURE);
    }

    if (strcmp(name,".rle\0")!=0)
    {
        printf("Error in filename.\n");
        exit(EXIT_FAILURE);
    }

    re_file=fopen(filename,"r");
    if (re_file==NULL)
    {
        printf("Failed to open files.\n");
        exit(EXIT_FAILURE);
    }

    fseek(f,0,SEEK_END);
    int len=ftell(f)/3;
    rewind(f);

    unsigned int arg1,arg2;

    for (int i=0;i<len/2;i++)
    {
        fscanf(re_file,"%2x",&arg1);
        fscanf(re_file,"%2x",&arg2);
        for (int j=0;j<arg1;j++)
        {
            printf("%02X ",arg2);
        }
    }
}