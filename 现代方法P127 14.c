#include <stdio.h>
#include <string.h>

void reverse(char []);
void Wordreverse(char [],int ,int);

int main(void)
{
	printf("Enter a sentence:");
	char sentence[100]={"\0"};
	gets(sentence);
	reverse(sentence);
	return 0;
}
void reverse(char sentence[])
{
	char endflag;
	int len=strlen(sentence);
	//printf("%s",sentence);
	//len-1 是标点符号
	//len-2 是倒数第一个字母
	int i=len-2;

	int formerflag=i;
	int latterflag=i+1;
	while (i>=0)
	{
		if (sentence[i]!=' ')
		{
			i--;
		}
		else if (sentence[i]==' ')
		{
			formerflag=i;
			Wordreverse(sentence,formerflag,latterflag);
			latterflag=formerflag;

			i--;
			printf(" ");
		}
	}
	Wordreverse(sentence,-1,formerflag);
	printf("%c",sentence[len-1]);
}
void Wordreverse(char sentence[],int formerflag,int latterflag)
{
	for (int i=formerflag+1;i<=latterflag-1;i++)
	{
		printf("%c",sentence[i]);
	}
}	