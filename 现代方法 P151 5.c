#include <stdio.h>
int num_digits(int);
int main(void)
{
	int num;
	printf("Please enter a number:\n");
	scanf("%d",&num);
	int con=num_digits(num);
	printf("The digits of the number you entered is %d.\n",con);

	return 0;
}
int num_digits(int num)
{
	int i=0;
	while(num!=0)
	{
		num/=10;
		i+=1;
	}

	return i;
}