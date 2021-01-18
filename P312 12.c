#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define NUM 1000
void judge(double []);
int main(void)
{
	srand(time(NULL));
	double numlist[NUM];
	for (int i=0;i<NUM;i++)
	{
		numlist[i]=1+rand()%100;
	}
	judge(numlist);

	return 0;
}
void judge(double numlist[])
{
	int smaller=0;
	int larger=0;
	for (int i=0;i<NUM;i++)
	{
		if (numlist[i]>50)
			larger+=1;
		else
			smaller+=1;
	}
	printf("Larger:%d.\n",larger);
	printf("Smaller:%d.\n",smaller);
}