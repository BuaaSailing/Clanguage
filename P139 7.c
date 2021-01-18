#include <stdio.h>
int main(void)
{
	char letter;
	printf("Please enter a letter.\n");
	scanf("%c",&letter);
	if ('a' <= letter && letter <= 'z')
	{
		printf("The character just entered is a lowercase letter.\n");
	}
	else
	{
		printf("The character just entered is not a lowercase letter.\n");
	}

	return 0;
}

/*
#include <stdio.h>
int main(void)
{
	char letter;
	printf("Please enter a letter.\n");
	scanf("%c",&letter);
	if ('A' <= letter && letter <= 'Z')
	{
		printf("The character just entered is a uppercase letter.\n");
	}
	else
	{
		printf("The character just entered is not a uppercase letter.\n");
	}

	return 0;
}
*/