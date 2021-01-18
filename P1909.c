#include <stdio.h>
#include <math.h>
int main(void)
{
	float number;
	float num1,price1;
	float num2,price2;
	float num3,price3;
	scanf("%f",&number);
	scanf("%f %f",&num1,&price1);
	scanf("%f %f",&num2,&price2);
	scanf("%f %f",&num3,&price3);
	int min;
	int sum1=(int)(ceil(number/num1)) * price1;
	int sum2=(int)(ceil(number/num2)) * price2;
	int sum3=(int)(ceil(number/num3)) * price3;
	if ( sum1 <= sum2 && sum1 <= sum3 )
		min=sum1;
	else if (sum2 <= sum1 && sum2 <= sum3)
		min=sum2;
	else if (sum3 <= sum1 && sum3 <= sum2)
		min=sum3;
	printf("%d",min);

	return 0;
}