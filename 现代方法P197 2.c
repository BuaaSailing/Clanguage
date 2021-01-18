#include <stdio.h>
#include <string.h>
#include <ctype.h>
void output(int);
int judge(char [],char [],int);
int main(void)
{
	printf("Enter a message:");
	char message[81];
	char ch;
	int i=0;
	while ((ch=getchar())!='\n' && (ch!=EOF))
	{
		if ((65<=ch && ch<=90) || (97<=ch && ch<=122))
		{
			message[i]=ch;
			i++;
		}
		else
			continue;
	}
	message[i]='\0';
	char reversemessage[81];
	int length=strlen(message);
	int j=0;
	for (int i=length-1;i>=0;i--)
	{
		reversemessage[j]=message[i];
		j++;
	}
	reversemessage[j]='\0';
	output(judge(message,reversemessage,length));
	//printf("%s\n",reversemessage);
	//printf("%s",message);
	return 0;
}
int judge(char message[],char reversemessage[],int length)
{
	char *pt1,*pt2;
	pt1=message;
	pt2=reversemessage;
	for (;pt1<&message[length];)
	{
		if (tolower(*pt1)==tolower(*pt2))
			;
		else
			return 0;
		pt1++;
		pt2++;
		return 1;
	}
	/*for (int i=0;i<length;i++)
	{
		if (tolower(message[i])==tolower(reversemessage[i]))
		{
			;
		}
		else
			return 0;
	}*/
	return 1;
}
void output(int outcome)
{
	if (1==outcome)
		printf("Palindrome.\n");
	else 
		printf("Not a Palindrome.\n");
}