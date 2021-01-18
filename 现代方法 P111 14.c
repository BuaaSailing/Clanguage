#include <stdio.h>
#include <math.h>
double square(double);

int main(void)
{
	double x;
	printf("Enter a positive number:\n");
	scanf("%lf",&x);
	double y=square(x);
	printf("%lf",y);

	return 0;
}

double square(double x)
{
	double y=(1+x)/2;
	double y1=1.0000;
	while (0.00001*y<=fabs(y-y1))
	{
		y1=y;
		y=(y+x/y)/2.0;
	}

	return y;
}