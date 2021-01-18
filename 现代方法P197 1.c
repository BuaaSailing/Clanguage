#include <stdio.h>
#include <string.h>
void output(char []);
int main(void)
{
	printf("Enter a message.\n");
	char ch;
	char message[81];
	int i=0;
	ch=getchar();
	do
	{
		message[i]=ch;
		i++;
	} while ((ch=getchar())!='\n' && (ch != EOF));
	message[i]='\0';
	//printf("%s",message);
	output(message);

	return 0;
}
void output(char message[])
{
	char *pt;
	int length=strlen(message);
	pt=&message[length-1];
	for (;pt>=(&message[0]);pt--)
	{
		printf("%c",*pt);
	}
}