#include <stdio.h>
int main(void)
{
	int hour,mins;
	printf("Enter a 24-hour time:");
	scanf("%d:%d",&hour,&mins);
	if (0<=hour && hour <12)
	{
		printf("Equivalent 12-hour time: %d:%d AM",hour,mins);
	}
	else if (12<=hour && hour<24)
	{
		printf("Equivalent 12-hour time: %d:%d PM",hour-12,mins);

	}
	else
	{
		printf("Please check your input.\n");
	}

	return 0;
}