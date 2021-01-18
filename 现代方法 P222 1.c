#include <stdio.h>
#include <string.h>
void judge(char *,char *,char *);
void output(char *,char *);
int main(void)
{
	char word[21],*p;
	char smallest_word[]="zzzzzzzzzzzzzzzzzzzz",*ptsmallest_word;
	char largest_word[]="AAAAAAAAAAAAAAAAAAAA",*ptlargest_word;
	ptlargest_word=largest_word;
	ptsmallest_word=smallest_word;
	p=word;
	//printf("%s\n",p);
	//printf("%s",ptsmallest_word);
	//printf("%s",ptlargest_word);	
	do
	{	
		printf("Enter word: ");
		gets(p);
		judge(p,ptsmallest_word,ptlargest_word);
	} while(strlen(p) != 4);

	output(ptsmallest_word,ptlargest_word);

	return 0;
}
void judge(char *p,char *ptsmallest_word,char *ptlargest_word)
{
	if (0<strcmp(p,ptlargest_word))
	{
		strcpy(ptlargest_word,p);		
	}
	if (0>strcmp(p,ptsmallest_word))
	{	
		strcpy(ptsmallest_word,p);
	}
	//printf("%s\n",p);
	//printf("smallest word: %s\n",ptsmallest_word);
	//printf("largest word: %s\n",ptlargest_word);	

}
void output(char *ptsmallest_word,char *ptlargest_word)
{
	printf("Smallest word: %s\n",ptsmallest_word);
	printf("largest word: %s\n",ptlargest_word);

}