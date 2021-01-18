#include <stdio.h>
#include <string.h>
#include <ctype.h>
//char Wordchange(char);
//int wordlength(char);
/*
int wordlength(char word)
{
	int len=wordlen(word);
	printf("%d",len);
	return len;
}
*/


/*
int sumword(char word)
{
	int sum=0;
	int i=0;
	while (word[i])
	{
		if ('A'==word[i] || 'E'==word[i] || 'I'==word[i] || 'L'==word[i] || 'N'==word[i] || 'O'==word[i] || 'R'==word[i] || 'S'==word[i] || 'T'==word[i] || 'U'==word[i] || 'D'==word[i] || 'G'==word[i] )
			sum+=1;
		else if('D'==word[i] || 'G'==word[i] )
			sum+=2;
		else if('B'==word[i] || 'C'==word[i] || 'M'==word[i] || 'P'==word[i])
			sum+=3;
		else if('F'==word[i] || 'H'==word[i] || 'V'==word[i] || 'W'==word[i] || 'Y'==word[i])
			sum+=4;
		else if('K'==word[i])
			sum+=5;
		else if('J'==word[i] || 'X'==word[i] )
			sum+=8;
		else if('Q'==word[i] || 'Z'==word[i] )
			sum+=10;
		else
			;
		i++;
	}
	return sum;
}*/
/*
int main(void)
{
	char word[100];//估计没有超过一百个字母的单词
	printf("Please enter a word:\n");
	scanf("%s",word);

	return 0;
}

char Wordchange(int word)
{
	for (int i=0;i<100;i++)
	{
		char wchange[100];
		wchange[i]=toupper(word[i]);

		printf("%s",wchange);
	}
}
*/
int input();
int input()
{
	char word[100];
	int sum=0;
	printf("Enter a word.\n");
	gets(word);
	int length=strlen(word);
	for (int i=0;i<length;i++)
	{
		word[i]=toupper(word[i]);
		if ('A'==word[i] || 'E'==word[i] || 'I'==word[i] || 'L'==word[i] || 'N'==word[i] || 'O'==word[i] || 'R'==word[i] || 'S'==word[i] || 'T'==word[i] || 'U'==word[i] )
			sum+=1;
		else if('D'==word[i] || 'G'==word[i] )
			sum+=2;
		else if('B'==word[i] || 'C'==word[i] || 'M'==word[i] || 'P'==word[i])
			sum+=3;
		else if('F'==word[i] || 'H'==word[i] || 'V'==word[i] || 'W'==word[i] || 'Y'==word[i])
			sum+=4;
		else if('K'==word[i])
			sum+=5;
		else if('J'==word[i] || 'X'==word[i] )
			sum+=8;
		else if('Q'==word[i] || 'Z'==word[i] )
			sum+=10;
		else
			;
	}
	return sum;
}
int main(void)
{
	int sum=input();
	printf("Scrabble value: %d",sum);

	return 0;
}