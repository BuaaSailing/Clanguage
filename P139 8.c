#include <stdio.h>
int main(void)
{
	char letter;
	printf("Please enter a letter:\n");
	scanf("%c",&letter);
	//保证是单个字母的前提下，判断其大小写
	if ('a'<=letter && letter<='z')
	{
		printf("The letter just entered is a lowercase letter, and the location infomation is %d.\n",letter-'a'+1);
	}
	else if ('A'<=letter && letter<='Z')
	{
		printf("The letter just entered is a uppercase letter, and the location infomation is %d.\n",letter-'A'+1);
	}
	else
	{
		printf("Please check your input and make sure it is a letter.\n");
	}

	return 0;
}