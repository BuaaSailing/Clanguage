#include <stdio.h>
#include <string.h>
#define MAX 5000
void output(char []);
int main(void)
{
	printf("Please enter a string.\n");
	char string[MAX],*p;
	p=string;
	gets(string);
	output(string);

	return 0;
}
void output(char *string)
{
	int len=strlen(string);
	for (int i=1;i<=len;i++)
	{
		printf("%c",string[len-i]);
	}
}