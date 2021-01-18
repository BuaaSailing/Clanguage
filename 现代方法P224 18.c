#include <stdio.h>
#include <string.h>
void output(char **,int,int,int);
int main(void)
{
	printf("Enter a date (mm/dd/yyyy):");
	int year,day,month;
	scanf("%d/%d/%d",&month,&day,&year);
	char *monthlist[12]={"January","Feburary","March","April","May","June","July","August","September","October","November","December"};
	output(monthlist,month,day,year);
	return 0;
}

void output(char *monthlist[12],int month,int day,int year)
{
	printf("You entered the date %s %d %d2",monthlist[month-1],day,year);
}
