#include <stdio.h>
float Func(float,float,int);

int main(void)
{
	float a,d;
	int n;
	printf("Please enter a, d and n:\n");
	scanf("%f %f %d",&a,&d,&n);
	float outcome=Func(a,d,n);
	printf("The outcome is %.2f.\n",outcome);

	return 0;
}

float Func(float a,float d,int n)
{
	if (1==n)
		return a;
	else
		return Func(a,d,n-1)+a+(n-1)*d;
}