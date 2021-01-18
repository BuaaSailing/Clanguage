#include <stdio.h>
int main(void)
{
	float speed;
	printf("Please enter a number as the wind speed.\n");
	scanf("%f",&speed);
	if (0<=speed && speed<=1)
	{
		printf("Calm");
	}
	else if (1<speed && speed <=3)
	{
		printf("Light air");
	}
	else if (3<speed && speed <= 27)
	{
		printf("Breeze");
	}
	else if (27 <speed && speed <=47)
	{
		printf("Gale");
	}
	else if (47 < speed && speed <=63)
	{
		printf("Storm");
	}
	else if (63<speed)
	{
		printf("Hurrican");
	}
	else
	{
		printf("Please check your input.\n");
	}

	return 0;
}