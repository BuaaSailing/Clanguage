#include<stdio.h>
#define MONTHS 30
#define YEARS 360
struct Date
{
    int month;
    int day;
    int year;
};
typedef struct Date DATE;
int Days(DATE);

int main(void)
{
    DATE dateinfo;
    printf("Please enter a date (year-month-day):\n");
    scanf("%d-%d-%d",&dateinfo.year,&dateinfo.month,&dateinfo.day);
    if (dateinfo.year <1990|| dateinfo.month>12 || dateinfo.month<1 || dateinfo.day >31 ||dateinfo.day<1)
    {
        printf("Error");
        return -1;
    }
    //printf("%d",dateinfo.day);
    int outcome=Days(dateinfo);
    printf("The total days is %d.",outcome);

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