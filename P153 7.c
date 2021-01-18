#include <stdio.h>
int power(int,int);

int main(void)
{
	int x,n;
	int outcome;
	printf("Please enter two numbers:\n");
	scanf("%d %d",&x,&n);
	outcome=power(x,n);
	printf("The outcome is %d.\n",outcome);

	return 0;
}

int power(int x,int n)
{
	if (0==n)
		return 1;
	else if (1==n)
		return x;
	else if (2==n)
		return x*x;
	else
	{
		if (n%2==0)
			return power(power(x,n/2),2);
		else
			return x*power(x,n-1);
	}
}