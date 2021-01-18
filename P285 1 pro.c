#include <stdio.h>
#include <time.h>
#include <windows.h>
long Fib(long);


int main(void)
{
	long op,ed;
	long n;
	printf("Please enter a number:\n");
	scanf("%ld",&n);
	op=clock();
	long outcome=Fib(n);
	ed=clock();
	printf("The %ld fib number is %ld.\n",n,outcome);
	printf("The run time is %ld.\n",ed-op);

	return 0;
}

long Fib(long n)
{
	if (1==n)
		return 0;
	else
	{
		long i=0;
		long j=1;
		long k=1;

		for (int s=2;s<n;s+=1)
		{

			k=i+j;
			i=j;
			j=k;


		}
		return k;
	}

}