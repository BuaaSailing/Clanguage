#include <stdio.h>
int main(void)
{
	int month,date;
	int pre1,pre2;
	printf("Please enter two numbers as month and date.\n");
	scanf("%d %d",&pre1,&pre2);
	if (1==pre1 || 3==pre1 || 5==pre1 || 7==pre1 || 8==pre1 || 10==pre1 || 12==pre1)
	{
		if ( 1<=pre2 && pre2<=31)
		{
			month=pre1;
			date=pre2;
			printf("The month is %d.\n",month);
			printf("The date is %d.\n",date);

		}
		else
			printf("Please check your second entered number.\n");
	}
	else if (4==pre1 || 6==pre1 || 9==pre1 || 11==pre1)
	{
		if (1<=pre2 && pre2<=30)
		{
			month=pre1;
			date=pre2;
		printf("The month is %d.\n",month);
		printf("The date is %d.\n",date);
	
		}
		else
			printf("Please check your second entered number.\n");
	}
	else if (2==pre1)
	{
		if (1<=pre2 && pre2<=28)
		{
			month=pre1;
			date=pre2;
			printf("The month is %d.\n",month);
			printf("The date is %d.\n",date);

		}
		else
			printf("Please check your second entered number.\n");
	}
	else
		printf("Please check your firsr entered number.\n");

	return 0;
}