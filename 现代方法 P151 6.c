#include <stdio.h>


int digit(int,int);
int main(void)
{
	int num1,num2;
	printf("Please input two numbers:\n");
	scanf("%d %d",&num1,&num2);
	printf("The outcome is %d.\n",digit(num1,num2));

	return 0;
}
int digit(int num1,int num2)
{
	int temp;
	int i=0;//i是位数
	int num=num1;
	while(num!=0)
	{
		num/=10;
		i+=1;
	}

	if (num2>i)
		temp=0;
	else
	{

		while (num2!=0)
		{
			num2-=1;
			temp=num1%10;
			num1/=10;
		}

	}

	return temp;
}