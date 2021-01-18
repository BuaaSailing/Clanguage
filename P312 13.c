#include <stdio.h>
#include <math.h>
double calcAvg(double [],int);
double SD(double [],int,float);
int main(void)
{
	int NUM=10;
	double testvals[NUM];
	for (int i=0;i<NUM;i++)
	{
		scanf("%lf",&testvals[i]);
	}
	double average=calcAvg(testvals,NUM);
	double vari=SD(testvals,NUM,average);
	printf("The average is %.2lf.\n",average);
	printf("The standard deviation is %.2lf.\n",vari);
	
	double finalvals[NUM];
	int k=0;
	int num=NUM;
	for (int i=0;i<NUM;i++)
	{
		if ((average-4*vari)<=testvals[i] && testvals[i]<=(average+4*vari))
		{
			finalvals[k]=testvals[i];
			k+=1;
		}
		else
		{
			num--;
		}
	}
	printf("The new average is %.2lf.\n",calcAvg(finalvals,num));
	printf("The new standard deviation is %.2lf.\n",SD(finalvals,num,calcAvg(finalvals,num)));

	return 0;
}
double calcAvg(double testvals[],int NUM)
{
	double sum=0;
	for (int i=0;i<NUM;i++)
	{
		sum+=testvals[i];
	}

	return sum/NUM;	
}
double SD(double testvals[],int NUM,float average)
{
	double sum=0;
	for (int i=0;i<NUM;i++)
	{
		sum+=pow(((testvals[i]-average)*(testvals[i]-average)),0.5);
	}
	return sum/NUM;
}