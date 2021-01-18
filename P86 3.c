#include <stdio.h>
int main(void)
{
	int num1,num2;
	printf("Enter two fraction:");
	scanf("%d/%d",&num1,&num2);
	int con1,con2;
	con1=num1;
	con2=num2;
	while (num2!=0)
	{

		int temp=num1%num2;
		num1=num2;
		num2=temp;
	}
	printf("In lowest term: %d/%d",con1/num1,con2/num1);

	return 0;
}
