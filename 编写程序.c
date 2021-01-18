#include <stdio.h>
int main(void)
{
	float num1;
	float max,min;
	num1=0;
	printf("Please enter a number:\n");
	scanf("%f",&num1);
	max=num1;
	min=num1;
	while (num1>0)
	{
		printf("Please enter a number:\n");
		scanf("%f",&num1);
		if (0>=num1)
		{
			break;
		}
		else if (num1>max)
		{
			max=num1;
		}
		else if (num1<min)
		{
			min=num1;
		}
		else
			;

	}
	printf("The max number is %.2f.\n",max);
	printf("The min number is %.2f.\n",min);
}