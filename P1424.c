#include <stdio.h>
int main(void)
{
	int start,days;
	scanf("%d %d",&start,&days);
	long sum=0;
	for (int i=start;i<=days+start-1;i++)
	{
		if (i % 7 == 6 || i % 7 == 0)
		{
			continue;
		}
		else
		{
			sum+=250;
		}
	}
	printf("%ld",sum);

	return 0;
}