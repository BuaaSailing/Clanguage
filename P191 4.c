#include <stdio.h>
#define TIMES 6
int main(void)
{
	for (int i=0;i<TIMES;i+=1)
	{
	float Fahrenheit;
	printf("Please enter a Fahrenheit temperture:\n");
	scanf("%f",&Fahrenheit);
	printf("The Celsius temperture of the Fahrenheit you entered is %.2f.\n",(5.0/9.0)*(Fahrenheit-32.0));
	}

	return 0;
}