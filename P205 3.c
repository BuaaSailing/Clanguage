#include <stdio.h>
int main(void)
{
	int num,num2;
	int temp;
	num2=0;
	printf("Please enter a number:\n");
	scanf("%d",&num);
	do 
	{
		temp=num%10;

		num=(num-num%10)/10;
		num2=num2*10+temp;
	}
	while ( temp!=0 );
	num2/=10;
	printf("%d",num2);

	return 0;
}