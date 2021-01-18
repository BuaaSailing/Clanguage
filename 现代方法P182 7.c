#include <stdio.h>
void split_date(int,int,int *,int *);

int main(void)
{
	printf("Please enter a date in a year.\n");
	int date,year;
	scanf("%d %d",&date,&year);
	int day,month;
	int *ptday=&day;
	int *ptmonth=&month;
	split_date(date,year,ptday,ptmonth);
	return 0;
}
void split_date(int date,int year,int *ptday,int *ptmonth)
{	if ((year%100==0 && year%400==0) || (year%100!=0 && year %4==0))
	{
		if (date<=31)
		{
			*ptday=date;
			*ptmonth=1;
		}
		else if (date>31 && date<=60)
		{
			*ptmonth=2;
			*ptday=date-31;
		}
		else if (date>60 && date<=91)
		{
			*ptmonth=3;
			*ptday=date-60;
		}
		else if (date>91 && date<=121)
		{
			*ptmonth=4l;
			*ptday=date-91;
		}
		else if (date>121 && date<=152)
		{
			*ptmonth=5;
			*ptday=date-121;
		}
		else if (date>152 && date<=182)
		{
			*ptmonth=6;
			*ptday=date-152;
		}
		else if (date>182 && date<=213)
		{
			*ptmonth=7;
			*ptday=date-182;
		}
		else if (date>213 && date<=244)
		{
			*ptmonth=8;
			*ptday=date-213;
		}
		else if (date>244 && date<=274)
		{
			*ptmonth=9;
			*ptday=date-244;
		}
		else if (date>274 && date<=305)
		{
			*ptmonth=10;
			*ptday=date-274;
		}
		else if (date>305 && date<=335)
		{
			*ptmonth=11;
			*ptday=date-305;
		}
		else if (date>335 && date<=366)
		{
			*ptmonth=12;
			*ptday=date-335;
		}
		else
			;
	}
	else
	{
		if (date<=31)
		{
			*ptday=date;
			*ptmonth=1;
		}
		else if (date>31 && date<=59)
		{
			*ptmonth=2;
			*ptday=date-31;
		}
		else if (date>59 && date<=90)
		{
			*ptmonth=3;
			*ptday=date-59;
		}
		else if (date>90 && date<=120)
		{
			*ptmonth=4;
			*ptday=date-90;
		}
		else if (date>120 && date<=151)
		{
			*ptmonth=5;
			*ptday=date-120;
		}
		else if (date>151 && date<=181)
		{
			*ptmonth=6;
			*ptday=date-151;
		}
		else if (date>181 && date<=212)
		{
			*ptmonth=7;
			*ptday=date-181;
		}
		else if (date>212 && date<=243)
		{
			*ptmonth=8;
			*ptday=date-212;
		}
		else if (date>243 && date<=273)
		{
			*ptmonth=9;
			*ptday=date-243;
		}
		else if (date>273 && date<=304)
		{
			*ptmonth=10;
			*ptday=date-273;
		}
		else if (date>304 && date<=334)
		{
			*ptmonth=11;
			*ptday=date-304;
		}
		else if (date>334 && date<=365)
		{
			*ptmonth=12;
			*ptday=date-334;
		}
	}
	printf("It's %d month and %d days.\n",*ptmonth,*ptday);
}