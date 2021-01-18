#include<stdio.h>
#include<math.h>
#define MONTHS 30
#define YEARS 360
#define NUM 2
struct Date
{
    int month;
    int day;
    int year;
};
typedef struct Date DATE;
int Days(DATE);
int difDays(int,int);

int main(void)
{
    DATE dateinfo[NUM];
    for(int i=0;i<NUM;i++)
    {
        printf("Please enter a date (year-month-day):\n");
        scanf("%d-%d-%d",&dateinfo[i].year,&dateinfo[i].month,&dateinfo[i].day);
        if (dateinfo[i].year <1990|| dateinfo[i].month>12 || dateinfo[i].month<1 || dateinfo[i].day >31 ||dateinfo[i].day<1)
        {
            printf("Error");
            return -1;
        }
    }

    int outcome=difDays(Days(dateinfo[0]),Days(dateinfo[1]));
    printf("The outcome is %d.",outcome);

    return 0;
}
int Days(DATE info)
{
    int outcome=0;
    outcome+=((info.year-1990)*360);
    outcome+=((info.month-1)*30);
    outcome+=info.day;
    return outcome;
}
int difDays(int a,int b)
{
    return abs(a-b);
}