#include <stdio.h>
#include <windows.h>
#include <time.h>

long Fib(long);

int main(void)
{	
	long op,ed;
	long n;
	printf("Please enter a number:\n");
	scanf("%ld",&n);
	op=clock();
	long outcome=Fib(n);
	printf("The %ld fib number is %ld\n",n,outcome);
	ed=clock();
	printf("The run time is %ldms.",ed-op);
	return 0;
}

long Fib(long n)
{
	if (1==n)
	{
		return 0;
	}
	else if (2==n)
	{
		return 1;
	}
	else
	{
		return Fib(n-1)+Fib(n-2);
	}
}