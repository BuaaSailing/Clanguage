#include <stdio.h>
#include <string.h>
#define MAX 5000
float output(char []);
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
	float outcome=output(p);
	printf("Every sentence has %.2f words in average.\n",outcome);

	return 0;
}
float output(char *sentence)
{	
	int word=0;
	int num=0;
	while (*sentence)
	{
		if ('.'==*sentence || '?'==*sentence || '!'==*sentence)
		{
			num+=1;
			*sentence++;
			word+=1;
			continue;
		}
		else if (' '==*sentence)
		{
			word+=1;
			*sentence++;
			continue;
		}
		else
		{
			*sentence++;
		}
	}
	printf("The number of the sentences is %d.\n",num);
	return word/num;
}