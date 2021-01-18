#include <stdio.h>
#include <math.h>

void dist(float,float);
void angle(float,float);
int main(void)
{
	float x,y;
	printf("Please x and y:\n");
	scanf("%f %f",&x,&y);
	dist(x,y);
	angle(x,y);

	return 0;

}
void dist(float x,float y)
{
	float distance;
	distance=sqrt(x*x+y*y);
	printf("The distance is %.2f.\n",distance);
}
void angle(float x,float y)
{
	float angle;
	angle=atan(y/x);
	printf("Theta is %.2f.\n",angle);
}


