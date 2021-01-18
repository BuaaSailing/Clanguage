#include <stdio.h>
int main(void)
{
	int inputNum;
	printf("Please type in the total number of data values to be added\n");
	scanf("%d",&inputNum);
	int i=0;
	float sum;
	while (i<inputNum)
	{
		float dataValue;
		printf("Please enter a number to be added:\n");
		scanf("%f",&dataValue);
		sum+=dataValue;
		i+=1;
	}
	printf("%.2f",sum);

	return 0;
}
