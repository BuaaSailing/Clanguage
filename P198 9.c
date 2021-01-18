#include <stdio.h>
#include <math.h>
int main(void)
{
	float x,y;
	x=5;
	printf("Function A:\n");
	while (x<=10)
	{
		y=3*pow(x,5)-2*pow(x,3)+x;
		printf("x is %.2f and y is %.2f.\n",x,y);
		x+=0.2;
	}
	x=1;
	printf("Function B:\n");
	while (x<=3)
	{
		y=1+x+pow(x,2)/2.0+pow(x,3)/6.0+pow(x,4)/24.0;
		printf("x is %.2f and y is %.2f.\n",x,y);
		x+=0.1;
	}
	float t=4;		
	printf("Function C:\n");
	while (t<=10)
	{
		y=2*exp(8*t);
		printf("t is %.2f and Y is %.2f.\n",t,y);
		t+=0.2;
	}

	return 0;
}