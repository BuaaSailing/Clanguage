#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    printf("This is a program that calculate the statistics.\n");
    int num_num;
    printf("Please enter a new number:");
    scanf("%d",&num_num);

    FILE *inputfile=fopen("C:\\Users\\DELL\\Desktop\\BUAA20-21Fall\\Cprogramming\\Code\\Week 16\\Pollen","w");
    if (inputfile==NULL)
    {
        printf("Failed to open files.\n");
        exit(EXIT_FAILURE);
    }
    fprintf(inputfile,"%d %d %d %d %d %d %d %d %d %d",30,60,40,80,90,120,150,130,160,170);
    fprintf(inputfile," %d",num_num);
    fclose(inputfile);


    FILE *input=fopen("C:\\Users\\DELL\\Desktop\\BUAA20-21Fall\\Cprogramming\\Code\\Week 16\\Pollen","r");
    if (input==NULL)
    {
        printf("Failed to open files.\n");
        exit(EXIT_FAILURE);
    }

    int temp1;
    int total=0;

    int first_num;
    fscanf(input,"%d",&first_num);

    for (int i=0;i<10;i++)
    {
        fscanf(input,"%d",&temp1);
        total+=temp1;
    }
    printf("The average number is %.2f.\n",(total-temp1+first_num)/10.0);
    printf("The new average number is %.2f.\n",(total/10.0));

    fclose(input);

    return 0;
}