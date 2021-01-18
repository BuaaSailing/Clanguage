#include <stdio.h>
#include <string.h>
#include <ctype.h>
void reverse_name(char *);
int main(void)
{
	printf("Enter a first and last name:");
	char name[80],*ptname;
	ptname=name;
	char ch;
	int flag=0;
	int i=0;
	while ((ch=getchar())!='\n' && (ch!=EOF))
	{
		if (flag=0)
		{
			if (ch==' ')
				;
			else if (ch!=' ')
			{
				flag=1;
				name[i]=ch;
				i++;
			}
		}
		else if (flag=1)
		{
			if (ch==' ')
				break;
			else if (ch!=' ')
			{
				name[i]=ch;
				i++;
			}
		}
	}
	name[i]=' ';
	i++;
	flag=0;
	while ((ch=getchar())!='\n' && (ch!=EOF))
	{
		if (flag=0)
		{
			if (ch==' ')
				;
			else if (ch!=' ')
			{
				flag=1;
				name[i]=ch;
				i++;
			}
		}
		else if (flag=1)
		{
			if (ch==' ')
				break;
			else if(ch!=' ')
			{
				name[i]=ch;
				i++;
			}
		}
	}
	name[i]='\0';
	reverse_name(name);
	return 0;
}
void reverse_name(char *ptname)
{
	while (' '!=*ptname)
	{
		printf("%c",*ptname);
		ptname++;
	}
	ptname+=1;
	printf(" %c.",toupper(*ptname));
}