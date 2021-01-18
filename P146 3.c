#include <stdio.h>
int main(void)
{
	float temperature;
	char flag;
	printf("Please enter a number and its parameter:\n");
	scanf("%f %c",&temperature,&flag);
	if ('f'==flag)
	{
		printf("The Clesius temperature is %.2f.\n",(5.00/9.00)*(temperature-32));
	}
	else if ('c'==flag)
	{
		printf("The Fahrengeit temperature is %.2f.\n",(9.00/5.00)*temperature+32);
	}
	else
	{
		printf("Please your input.\n");
	}

	return 0;
}