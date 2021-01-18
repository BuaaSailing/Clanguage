/*#include <stdio.h>
void output(char []);
int main(void)
{
	char strtest[]={"This is a test"};
	output(strtest);

	return 0;
}
void output(char strtest[])
{
	for (int i=0;i<=14;i++)
	{
		printf("%c",strtest[i]);
	}
}*/
/*
#include <stdio.h>
void output(char []);
int main(void)
{
	char strtest[]={"This is a test"};
	output(strtest);

	return 0;
}
void output(char strtest[])
{
	for (int i=0;i<=14;i++)
	{	
		if (10<=i && i<=13)
			printf("%c",strtest[i]);
		else
			;
	}
}
*/
#include <stdio.h>
void output(char []);
int main(void)
{
	char strtest[]={"This is a test"};
	output(strtest);

	return 0;
}
void output(char strtest[])
{
	int i=0;
	while (strtest[i]!='\0')
	{
		printf("%c",strtest[i]);
		i++;
	}
}
