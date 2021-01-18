#include <stdio.h>
#include <string.h>
#define MAX 5000
void output(char []);
int main(void)
{
	printf("Please enter a sentence.\n");
	char sentence[MAX],*p;
	p=sentence;
	gets(sentence);
	output(p);

	return 0;
}
void output(char *sentence)
{
	while (*sentence)
	{
		if (*sentence!=' ')
		{
			printf("%c",*sentence);
			*sentence++;
		}
		else
		{
			printf("\n");
			*sentence++;
		}
	}
}