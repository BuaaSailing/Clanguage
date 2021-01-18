#include <stdio.h>
#include <string.h>
void output(char *,char *,char *);
int main(int argc, char *argv[])
{
	if (argc!=6)
	{
		printf("Error, Please check your input.\n");
		return -1;
	}
	else
	{
		output(argv[2],argv[3],argv[4]);
		return 0;
	}
}
void output(char *word1,char *word2,char *word3)
{
	printf("%s ",word3);
	printf("%s ",word2);
	printf("%s ",word1);
}
