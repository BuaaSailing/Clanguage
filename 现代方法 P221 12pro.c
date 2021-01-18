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
	gets(filename);
	get_extension(pt1,pt2);
	//printf("%s",pt1);

}
void get_extension(char *pt1,char *pt2)
{
	int len=strlen(pt1);
	int end;
	*pt2='\0';
	printf("The filename is:");
	for (int i=0;i<len;i++)
	{	
		if ('.'==*pt1)
		{
			end=i;
			*pt1++;
			break;
		}
		else
			end=len;//demo
		printf("%c",*pt1);
		*pt1++;
		
	}
	printf("\nThe extension name is:");
	for (int i=end;i<len;i++)//demo.c
	{
		*pt2=*pt1;
		printf("%c",*pt2);
		*pt2++;
		*pt1++;	
	}
	
}