#include <stdio.h>

float calcAvg(int [],int);
float variance(int [],int,float);
int main(void)
{
	int NUM=14;
	int testvals[]={89,95,72,83,99,54,86,75,92,73,79,75,82,73};
	float average=calcAvg(testvals,NUM);
	float vari=variance(testvals,NUM,average);
	printf("The average is %.2f.\n",average);
	printf("The variance is %.2f.\n",vari);

	return 0;
}
float calcAvg(int testvals[],int NUM)
{
	float sum=0;
	for (int i=0;i<NUM;i++)
	{
		sum+=testvals[i];
	}
	return sum/NUM;	
}
float variance(int testvals[],int NUM,float average)
{
	float sum=0;
	for (int i=0;i<NUM;i++)
	{
		sum+=((testvals[i]-average)*(testvals[i]-average));
	}
	return sum/NUM;
}