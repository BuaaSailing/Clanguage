#include <stdio.h>
#include <math.h>

int main()
{
	float weight, height;
	scanf("%f %f",&weight,&height);
	float BMI;
	BMI=(weight)/pow(height,2);

	if (BMI<18.5)
	{
		printf("Underweight");
	}
	else if ((18.5<=BMI) && (BMI<24) )
	{
		printf("Normal");
	}
	else
	{
		printf("%7f\n",BMI);
		printf("Overweight");
	}
	return 0;
}