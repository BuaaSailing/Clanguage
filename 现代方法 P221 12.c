#include <stdio.h>
#include <string.h>
#define MAX 5000
void get_extension(char *,char *);
int main(void)
{
	printf("Please enter a file name and its extension.\n");
	char filename[MAX],extension[MAX],*pt1,*pt2;
	pt1=filename;
	pt2=extension;
	get_extension(pt1,pt2);

}
void get_extension(char *pt1,char *pt2)
{
	char ch;
	ch=getchar();
	printf("The filename is:\n");
	while (ch!='\n' && ch!='.')
	{
		*pt1=ch;
		printf("%c",*pt1);
		*pt1++;
		ch=getchar();
	}
	*pt1='\0';
	printf("\n");
	ch=getchar();
	printf("The extension name is:\n");
	while (ch!='\n')
	{
		*pt2=ch;
		printf("%c",*pt2);
		*pt2++;
		ch=getchar();
	}
	*pt2='\0';

}