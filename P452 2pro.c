#include<stdio.h>
#include<stdlib.h>
#define NUM 5
struct Info
{
    char name[10];
    float revenue;
    float ratio;
};
typedef struct Info INFO;

int main(void)
{
    INFO info[NUM];
    for (int i=0;i<NUM;i++)
    {
        printf("Please enter the infomation of a stock:\n");
        scanf("%s %f %f",&info[i].name,&info[i].revenue,&info[i].ratio);
        //printf("%s %f %f",info[i].name,info[i].revenue,info[i].ratio);
    }
    for (int j=0;j<NUM;j++)
    {
        printf("The pirce of the stock %s is %.2f\n",info[j].name,info[j].revenue*info[j].ratio);

    }


    return 0;
}