#include <stdio.h>
long max(long,long);
long min(long,long);
long gcd(long,long);
int main(void)
{
	long a,b,c;
	long g;
	scanf("%ld %ld %ld",&a,&b,&c);
	if (max(a,b)==a && max(a,c)==a)
	{	
		g=gcd(min(b,c),a);
		printf("%ld/%ld",min(b,c)/g,a/g);
	}
	else if (max(a,b)==b && max(c,b)==b)
	{
		g=gcd(min(a,c),b);
		printf("%ld/%ld",min(a,c)/g,b/g);
	}
	else if (max(a,c)==c && max(b,c)==c)
	{
		g=gcd(min(a,b),c);
		printf("%ld/%ld",min(a,b)/g,c/g);
	}

	return 0;
}
long max(long a,long b)
{
	return a>=b?a:b;
}
long min(long a,long b)
{
	return a<=b?a:b;
}
long gcd(long a,long b)
{
	long c;
	while (a%b)
	{
		c=b;
		b=a%b;
		a=c;
	}
	return b;
}