#include <stdio.h>
int main(void)
{
	unsigned long long n;
	unsigned long long num;
	scanf("%lld",&n);
	num=n * (n-1) / 2 * (n-2) / 3 * (n-3) / 4;
	printf("%lld",num);

	return 0;
}