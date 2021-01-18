#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int lis[n];
	for (int i=0;i<=n-1;i+=1)
	{
		scanf("%d",&lis[i]);
	}
	printf("%d",lis[0]);
}