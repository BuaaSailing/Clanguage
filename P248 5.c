#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int flip(int,int);
float percentages(int,int);
int main()
{
	float sum1=0;
	float sum2=0;
	int k=1;
	for (int i=0;i<20;i++)
	{
		int numTosses = 1000;
		int heads;
		heads = flip(numTosses,k);
		float per=percentages(numTosses,heads);
		sum1+=per;
		sum2+=(100-per);
		k+=1;
	}
	printf("Heads came up %.2f percent of the time.\n",sum1/20);
	printf("Tails came up %.2f percent of the time.\n",sum2/20);
	return 0;
}
int flip(int numTimes,int k)
{
	int randValue;
	int heads = 0;
	int i;
	srand(time(NULL)+k);
	for (i = 1; i <= numTimes; i++)
	{

		randValue = 1 + (int)rand() % 100;
		if (randValue > 50)
			heads++;
	}
	return (heads);
}
float percentages(int numTosses, int heads)
{
	int tails;
	float perheads,pertails;
	if (numTosses == 0)
		printf("There were no tosses,so no percentages can be calculated.\n");
	else
	{
		tails = numTosses - heads;
		perheads = (float)heads/numTosses * 100.0;
		pertails = (float)(numTosses - heads)/numTosses * 100.0;
		return perheads;
	}

}