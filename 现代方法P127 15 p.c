#include <stdio.h>
void password(char [],int);
int main(void)
{
	printf("Enter a message to be encrypted:\n");
	char sentence[80]={"\0"};
	gets(sentence);
	int shiftvector;
	printf("Enter shift amount:\n");
	scanf("%d",&shiftvector);
	password(sentence,shiftvector);

	return 0;
}
void password(char sentence[],int shiftvector)
{
	for (int i=0;i<80;i++)
	{
		if ('a'<=sentence[i] && sentence[i]<='z')
		{
			printf("%c",((sentence[i]-'a')+shiftvector)%26 +'a');
		}
		else if ('A'<=sentence[i] && sentence[i]<='Z')
		{
			printf("%c",((sentence[i]-'A')+shiftvector)%26 +'A');
		}
		else
			printf("%c",sentence[i]);
	}
}