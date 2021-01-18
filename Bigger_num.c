#include <stdio.h>
double large_of(double *,double *);
int main(void)
{
	printf("Please enter two numbers:\n");
	double num1,num2;
	scanf("%lf %lf",&num1,&num2);
	double *ptnum1=&num1;
	double *ptnum2=&num2;
	double con=large_of(ptnum1,ptnum2);
	printf("The bigger number is %.2lf.\n",con);

	return 0;
}
double large_of(double *ptnum1,double *ptnum2)
{
	if (*ptnum2>=*ptnum1)
		return *ptnum2;
	else 
		return *ptnum1;
}