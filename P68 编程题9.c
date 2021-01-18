#include <stdio.h>
int main(void)
{
	int month,year,day,month2,year2,day2;
	printf("Enter first day (mm/dd/yy): ");
	scanf("%d/%d/%d",&month,&day,&year);
	printf("Enter second day (mm/dd/yy): ");
	scanf("%d/%d/%d",&month2,&day2,&year2);
	if (year>year2)
		printf("%d/%d/%02d is earlier than %d/%d/%02d",month2,day2,year2,month,day,year);
	else if (year2>year)
		printf("%d/%d/%02d is earlier than %d/%d/%02d",month,day,year,month2,day2,year2);
	else
	{
		if (month>month2)
			printf("%d/%d/%02d is earlier than %d/%d/%02d",month2,day2,year2,month,day,year);
		else if (month2>month)
			printf("%d/%d/%02d is earlier than %d/%d/%02d",month,day,year,month2,day2,year2);
		else
		{
			if (day>day2)
				printf("%d/%d/%02d is earlier than %d/%d/%02d",month2,day2,year2,month,day,year);
			else if (day2>day)
				printf("%d/%d/%02d is earlier than %d/%d/%02d",month,day,year,month2,day2,year2);
			else
				printf("The two day is the same.");
		}
	}
	return 0;
}