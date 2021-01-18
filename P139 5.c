#include <stdio.h>
int main(void)
{
	float num1,num2;
	printf("Please enter two numbers:.\n");
	scanf("%f %f",&num1,&num2);
	if (num1>num2)
	{
		printf("The first number is greater than the second.\n");

	}
	else if (num1<num2)
	{
		printf("The first number is not greater than the second.\n");
	}
	else
	{
		printf("The two numbers are equal.");
	}

	return 0;
}