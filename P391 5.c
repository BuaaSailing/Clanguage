#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    FILE *outfile;
    outfile=fopen("C:\\Users\\DELL\\Desktop\\BUAA20-21Fall\\Cprogramming\\Code\\Week 16\\outfile","w");
    char *name[]={"H.Baker","D.Rosso","K.Times","B.Williams"};
    char *address[]={"614 Freeman St.","83 Chambers St.","891 Ridgewood Rd.","24 Tremont Ave"};
    char *arg1[]={"Orange","Madison","Millburn","Brooklyn"};
    char *arg2[]={"NJ","NJ","NJ","NY"};

    if (outfile==NULL)
    {
        printf("\nFailed to opening the file\n");
        exit(EXIT_FAILURE);
    }

    FILE *infile;
    if ((infile=fopen("C:\\Users\\DELL\\Desktop\\BUAA20-21Fall\\Cprogramming\\Code\\Week 16\\outfile","r"))==NULL)
    {
        printf("\nFakled to open the datafile named %s",infile);
    }

    for (int i=0;i<4;i++)
    {
        fprintf(outfile,"%-15s %-20s %-10s %s\n",name[i],address[i],arg1[i],arg2[i]);
        //printf("%-15s %-20s %-10s %s\n",name[i],address[i],arg1[i],arg2[i]);
    }
    fclose(outfile);

    char temp[1000];
    char t;
    FILE *output=fopen("C:\\Users\\DELL\\Desktop\\BUAA20-21Fall\\Cprogramming\\Code\\Week 16\\outfile","r");
    /*
    while(fgets(temp,100,output) !=NULL)
    {
        printf("%s",temp);
    }
    */
    printf("%-15s %-20s %-10s %s\n","Name","Address","City","State");
    while ((fgetc(output)) !=EOF)
    {
        printf("%c",t);
    }

    return 0;
}