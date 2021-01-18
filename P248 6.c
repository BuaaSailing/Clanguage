#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define CHANCE 7

int randnum();
void Guess(int,int);

void Guess(int inputnum,int Answer)
{
	if (inputnum<=0)
	{
		printf("Please check your input.\n");
	}
	else if (inputnum==Answer)
	{
		printf("Hooray,You have won.\n");
	}
	else if (inputnum>Answer)
	{
		printf("Wrong answer! Try again!\nThe number you entered is higher than the answer.\n");
	}
	else if (inputnum<Answer)
	{
		printf("Wrong answer! Try again!\nThe number you entered is lower than the answer.\n");
	}
}
int randnum()
{
	srand(time(NULL));
	int Answer=1+(int)rand()%100;
	return Answer;
}
int main(void)
{
	int inputnum;
	char response;
	char enter;
	do
	{
		printf("Please enter a number.\n");
		int Answer=randnum();
		for (int i=0;i<CHANCE;i+=1)
		{	
			scanf("%d",&inputnum);
			Guess(inputnum,Answer);
		}
		printf("Would you like to play this again (y/n)?\n");
		scanf("%d",enter);
		//接受最后一个换行符
		scanf("%c",&response);
	} while ( 'y'==response || 'Y'==response);

}