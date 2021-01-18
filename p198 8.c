#include <stdio.h>
int main(void)
{
	int age=12;
	int money=10;
	int sum=10;
	while (sum<=1000)
	{
		age+=1;
		money*=2;
		sum+=money;

	}
	printf("The age is %d.\n",age);
	printf("The total money is %d.\n",sum);

	return 0;
}