#include <stdio.h>
int main(void)
{
	int n;
	printf("Please enter a number:\n");
	scanf("%d",&n);
	float e=1;;
	for (int i=1;i<=n;i+=1)
	{
		float temp=1.0;
		for (int j=1;j<=i;j+=1)
		{
			temp*=j;
		}
		e+=(1.0/temp);
	}
	printf("e is %.4f.\n",e);

	return 0;
}