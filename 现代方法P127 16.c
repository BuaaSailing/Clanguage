#include <stdio.h>
#include <string.h>
#include <ctype.h>
int Func(char [],int,char []);
int main(void)
{
	printf("Enter first word:");
	char word[20]={"\0"};
	gets(word);
	printf("Enter second word:");
	char secondword[20]={"\0"};
	gets(secondword);
	int len=strlen(word);
	int outcome=Func(word,len,secondword);
	if (outcome==0)
		printf("The words are anagrams.\n");
	else
		printf("The words are not anagrams.\n");
	return 0;
}
int Func(char word[],int len,char secondword[])
{
	int list[26]={0};
	for (int j=0;j<len;j++)
	{
		int i=tolower(word[j])-'a';
		//printf("%d\n",i);
		list[i]+=1;
	}
	for (int j=0;j<strlen(secondword);j++)
	{
		int i=tolower(secondword[j])-'a';
		//printf("%d\n",i);
		list[i]-=1;
	}
	int flag=0;
	for (int i=0;i<26;i++)
	{
		//printf("%d ",list[i]);
		if (list[i]!=0)
		{
			flag+=1;
		}
		else
			;
	}
	//printf("flag :%d",flag);
	return flag;


}
