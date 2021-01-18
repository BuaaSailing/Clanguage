#include <stdio.h>
#include <string.h>
void output(char [],int);
void reverse(char []);

int main(void)
{
	printf("Enter a sentence:you can cage a swallow can't you?\n");
	char sentence[]={"you can cage a swallow can't you?"};
	int len=strlen(sentence);
	output(sentence,len);


	//printf("%s",sentencepro);
	return 0;
}
void output(char sentence[],int len)
{
	char endflag;
	for (int i=0;i<len;i++)
	{
		if ('.'==sentence[i] || '?'==sentence[i] || '!'==sentence[i])
		{
			endflag=i;
			break;
		}

	}
	int i=endflag-1;
	char word[20];
	for (int l=0;l<20;l++)
	{
		word[l]=' ';
	}
	int j=0;
	while (i>=0)
	{
		if (sentence[i]!=' ')
		{
			word[j]=sentence[i];
			j++;
			i--;
		}
		else if (sentence[i]==' ')
		{
			reverse(word);
			printf(" ");
			char word[20]={"\0"};
			i--;
			j=0;
		}
	}
	/*for (int i=endflag-1;i>=0;i--)
	{
		if (sentence[i]!=' ')
		{
			word[j]=sentence[i];
			j--;
		}
		else
			printf("")
	}*/

}
void reverse(char word[])
{
	for (int i=20;i>=0;i--)
	{
		if (word[i]==' ')
		{
			;
		}
		else
		{
			;
			//printf("%c",word[i]);
		}
	}
}