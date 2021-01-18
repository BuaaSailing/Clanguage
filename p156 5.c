#include <stdio.h>
#include <math.h>

int main(void)
{
	float a,b,c;

	printf("Please enter a,b and c:\n");
	scanf("%f %f %f",&a,&b,&c);
	float delta=sqrt(b*b-4*a*c);

	if (0!=a)
	{	
		if (delta>=0)
		{
			float x1,x2;
			x1=(delta-b)/(2.0*a);
			x2=(-delta-b)/(2.0*a);
			printf("The solution to the formula is %.2f and %.2f.\n",x1,x2);
		}		
		else
		{
			printf("The formula has no solution.\n");
		}
	} 
	else
	{
		printf("Please check your input of a.\n");
	}


	return 0;
}