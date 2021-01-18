#include <stdio.h>
int main(void)
{
	float numYrs;
	printf("Please enter a number:\n");
	scanf("%f",&numYrs);
	if (numYrs>5.0)
	{
		float interest=7.5;
		printf("The interest is %.1f%%.",interest);
	}
	else
	{
		float interest=5.4;
		printf("The interest is %.1f%%.",interest);
	}

	return 0;
}