#include <stdio.h>
#include <string.h>
#define MAX 5000
void delChar(char [],int,int);
int main(void)
{
	printf("Please enter a string:\n");
	char string[MAX],*p;
	p=string;
	gets(string);
	int start;
	int length;
	printf("Please enter the length you want to delete and the start location.\n");
	scanf("%d %d",&length,&start);
	delChar(p,length,start);

	return 0;		
}
void delChar(char *p,int length,int start)
{
	int i=1;

	while (*p)
	{
		if (start<=i && i<(start+length))
		{
			*p++;
			i++;
			continue;
		}
		else
		{
			printf("%c",*p);
			*p++;
			i++;
		}
	}
}
