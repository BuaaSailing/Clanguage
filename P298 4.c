#include <stdio.h>
#define NUM 10
void output(float [],int []);
int main(void)
{
	float Price[NUM]={1.2,3.6,5.1,5.15,84.1,3.24,5.14,8.47,9.14,15.46};
	int Quantity[NUM]={5,10,6,41,6,89,41,17,60,10};

	output(Price,Quantity);
	return 0;
}
void output(float Price[],int Quantity[])
{
	float Amount[NUM];
	printf("Quantity Price Amount\n");
	printf("-------- ----- ------\n");
	for (int i=0;i<NUM;i++)
	{
		Amount[i]=Price[i]*Quantity[i];
		printf("%8d %5.2f %6.2f\n",Quantity[i],Price[i],Amount[i]);
	}
}
