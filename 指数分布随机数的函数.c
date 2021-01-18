#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double randomExponential(double);

double randomExponential(double lambda)
{
	double pv = 0.0;
	pv = (double)(rand()%100)/100;
	while(pv == 0)
	{
		pv = (double)(rand() % 100)/100;
	}
	pv = (-1  / lambda)*log(1-pv);
	return pv;
}

int main(void)
{
	double x;
	for (int i=0;i<=1000;i++)
	{
		x=randomExponential(2);
		printf("%.4lf  ",x);
	}

	return 0;
}
