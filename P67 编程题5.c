#include <stdio.h>
int main(void)
{
	float income;
	printf("Please input your income.\n");
	scanf("%f",&income);
	if (0<=income && income<=750)
	{
		printf("The tax of %.1f is %.2f.\n",income,0.01*income);
	}
	else if (750<income && income<=2250)
	{
		printf("The tax of %.1f is %.2f.\n",income,7.50+0.02*(income-750));
	}
	else if (2250<income && income<=3750)
	{
		printf("The tax of %.1f is %.2f.\n",income,37.50+0.03*(income-2250));
	}
	else if (3750<income && income<=5250)
	{
		printf("The tax of %.1f is %.2f.\n",income,82.50+0.04*(income-3750));
	}
	else if (5250<income && income<=7000)
	{
		printf("The tax of %.1f is %.2f.\n",income,142.50+0.05*(income-5250));
	}
	else if (7000<income)
	{
		printf("The tax of %.1f is %.2f.\n",income,230.00+0.06*(income-7000));
	}
	else
	{
		printf("Please check your input");
	}

	return 0;
}