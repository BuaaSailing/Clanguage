#include <stdlib.h>  
#include <math.h>  
#include <stdio.h>

#define NSUM 25

double gaussrand();
double gaussrand()
{

    double x = 0;
    int i;
    for(i = 0; i < NSUM; i++)
    {
        x += (double)rand() / RAND_MAX;
    }

    x -= NSUM / 2.0;
    x /= sqrt(NSUM / 12.0);

    return x;
}
int main(void)
{
	double x;
	for (int i=0;i<=1000;i++)
	{
		x=gaussrand();
		printf("%.4lf ",x);
	}
	return 0;
}