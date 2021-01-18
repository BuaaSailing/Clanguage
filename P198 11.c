#include <stdio.h>
#include <math.h>
#define VELOCITY 500
#define PI 3.14
#define THETA 22.8
int main(void)
{
	float t=0;

	while (t<10)
	{
		float x=VELOCITY*cos(THETA*PI/180.0)*t;
		float y=VELOCITY*sin(THETA*PI/180.0)*t;
		printf("The x is %.2f and y is %.2f.\n",x,y);
		t+=0.5;
	}

	return 0;
}