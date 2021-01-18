#include <stdio.h>
int reverse(int);

int main(void)
{
	int num;
	printf("Please enter a number:\n");
	scanf("%d",&num);
	int outcome=reverse(num);
	printf("The reverse number is %d.\n",outcome);

	return 0;
}

int reverse(int num)
{
	int temp=num%10;
	while (0!=num/10)
	{
		num/=10;
		temp=temp*10+num%10;
	}

	return temp;
}