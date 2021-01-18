#include <stdio.h>
#include <string.h>
#define MAX 1000
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
		printf("The character %c refers to %x\n.",*sentence,*sentence);
		*sentence++;
	}
}