#include <stdio.h>
int gcd(int,int);
int main(void)
{
	int a,b;
	printf("Please enter two numbers:\n");
	scanf("%d %d",&a,&b);
	int outcome=gcd(a,b);
	printf("The gcd of the two numbers is %d.\n",outcome);

	return 0;
}

int gcd(int a,int b)
{
	int temp;
	do 
	{
		temp=a%b;
		a=b;
		b=temp;
	}while (temp!=0);
	return a;
}