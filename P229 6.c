#include <stdio.h>
float C(int,int);
int main(void)
{
	int n,m;
	printf("Please enter the value of n and m:\n");
	scanf("%d %d",&m,&n);
	float outcome=C(m,n);
	printf("The total choice is %.0f.\n",outcome);
	return 0;
}
float C(int m,int n)
{
	float nFactorial=1;
	float mFactorial=1;
	float m_nFactorial=1;
	for (int i=1;i<=n;i++)
		nFactorial*=i;
	for (int i=1;i<=m;i++)
		mFactorial*=i;
	for (int i=1;i<=m-n;i++)
		m_nFactorial*=i;
	
	return mFactorial/(nFactorial*m_nFactorial);
}