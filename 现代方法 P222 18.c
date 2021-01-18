#include <stdio.h>
#include <string.h>
#define MAX 5000
void remove_filename(char *);
int main(void)
{
	printf("Please enter a website.\n");
	char website[MAX],*p;
	p=website;
	gets(website);
	remove_filename(p);

	return 0;
}
void remove_filename(char *ptlatter)
{	
	//printf("%s",ptlatter);
	int len=strlen(ptlatter);
	int flag1;
	for (int i=0;i<len;i++)
	{
		if ('/'==ptlatter[i])
			flag1=i;
	}
	ptlatter[flag1]='\0';
	printf("%s",ptlatter);
}