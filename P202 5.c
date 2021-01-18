#include <stdio.h>
#define INITIAL_MONEY 1000
int main(void)
{
	float interestRate=0.06;

	for (;interestRate<=0.12;interestRate+=0.01)
	{
		printf("The interestrate is %.1f%%.\n",100*interestRate);

		float money=INITIAL_MONEY;		
		for (int i=1;i<=10;i+=1)
		{
			money*=(1+interestRate);
			printf("The total money of the %d year is %.2f.\n",i,money);
		}
		printf("\n");
	}

	return 0;
}