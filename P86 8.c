#include <stdio.h>
int main(void)
{
	int date,startday;
	printf("Enter number of days in month:");
	scanf("%d",&date);
	printf("Enter starting day of the week (1=Sun, 7=Sat) :");
	scanf("%d",&startday);
	for (int i=1;i<=startday-1;i+=1)
	{
		printf("   ");
	}
	for (int i=1;i<=date;i+=1)
	{
		if (0==(i+startday-1)%7)
		{
			printf("%3d",i);
			printf("\n");
		}
		else
		{
			printf("%3d",i);
		}
	}

	return 0;
}