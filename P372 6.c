#include <stdio.h>
#include <string.h>
#define MAX 5000
void output(char []);
int main(void)
{
	printf("Please enter several sentences.\n");
	char sentence[MAX],*p;
	p=sentence;
	char ch;
	int length=0;
	while (length < MAX-1 && (ch=getchar())!='\n' && ch!=EOF)
	{
		sentence[length++]=ch;
	}
	sentence[length]='\0';
	output(p);

	return 0;
}
void output(char *sentence)
{	
	int num=0;
	while (*sentence)
	{
		if ('.'==*sentence || '?'==*sentence || '!'==*sentence)
		{
			num+=1;
			*sentence++;
			continue;
		}
		else
			*sentence++;
	}
	printf("The number of the sentences is %d.\n",num);
}