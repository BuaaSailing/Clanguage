#include<stdio.h>
#include<stdlib.h>
#define NUM 5
struct Info
{
    int ID;
    int miles;
    int gallons;
};
typedef struct Info INFO;

int main(void)
{
    INFO cars_info[NUM];
    for (int i=0;i<NUM;i++)
    {
        printf("Please enter the information of the car.\n");
        scanf("%d %d %d",&cars_info[i].ID,&cars_info[i].miles,&cars_info[i].gallons);
    }

    printf("%10s%10s%10s\n","ID","Miles","Gallons");
    for (int j=0;j<NUM;j++)
    {
        printf("%10d%10d%10d\n",cars_info[j].ID,cars_info[j].miles,cars_info[j].gallons);
    }

    return 0;
}