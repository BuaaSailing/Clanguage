#include<stdio.h>
#define NUM 2
struct Date
{
    int month;
    int day;
    int year;
};
typedef struct Date DATE;

DATE larger(DATE,DATE);

int main(void)
{
    DATE dateinfo[NUM];
    for (int i=0;i<NUM;i++)
    {
        printf("Please enter a date (month/day/year):\n");
        scanf("%d/%d/%d",&dateinfo[i].month,&dateinfo[i].day,&dateinfo[i].year);
        if (dateinfo[i].month>12 || dateinfo[i].month<1 || dateinfo[i].day>31|| dateinfo[i].year<0)
        {
            printf("Error.\n");
            return -1;
        }

    }
    DATE outcomeinfo=larger(dateinfo[0],dateinfo[1]);
    printf("The larger is %d/%d/%d.",outcomeinfo.month,outcomeinfo.day,outcomeinfo.year);
    return 0;
}

DATE larger(DATE info1,DATE info2)
{
    int outcome1=info1.year*360+info1.month*30+info1.day;
    int outcome2=info2.year*360+info2.month*30+info2.day;
    if (outcome1> outcome2)
    {
        return info1;
    }
    else if (outcome2>outcome1)
    {
        return info2;
    }
}
