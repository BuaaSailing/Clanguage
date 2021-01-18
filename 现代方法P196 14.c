#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
bool search(int num[][24],int key);
int main(void)
{
	srand(time(NULL));
	int temperature[7][24];
	for (int j=0;j<7;j++)
	{
		printf("The %d day's temperature:");
		for (int i=0;i<24;i++)
		{
				temperature[j][i]=1+(int)rand()%35;
				printf(" %d ",temperature[j][i]);
		}
		printf("\n");
	}
	int searchnum;
	printf("Please enter the number you expected to find:\n");
	scanf("%d",&searchnum);

	int outcome=search(temperature,searchnum);
	if (1==outcome)
		printf("True\n");
	else
		printf("False\n");
	return 0;

}
bool search(int num[][24],int key)
{
	int *pt;
	for(pt=&num[0][0];pt<=&num[7][24];pt++)
	{
		if (*pt==key)
		{
			return 1;
		}
		else
		{
			;
		}
	}

	return 0;

}