#include <stdio.h>
void Date(int,int *,int *,int *);
int main(void)
{
	printf("Please enter a date:\n");
	int date;
	scanf("%d",&date);
	int month,day,year;
	int *ptday=&day;
	int *ptmonth=&month;
	int *ptyear=&year;
	Date(date,ptmonth,ptday,ptyear);
	return 0;
}
void Date(int date,int *ptmonth,int *ptday,int *ptyear)
{

	*ptday=date%100;
	date/=100;
	*ptmonth=date%100;
	date/=100;
	*ptyear=date;
	printf("The year is %d.\n",*ptyear);
	printf("The month is %02d.\n",*ptmonth);
	printf("The day is %d.\n",*ptday);
}