#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define CHOICES 500

int randnum();
int randnum()
{
	int randnumber=(int)rand()%201+1;
	return randnumber;
}
int judge();
int judge()
{
	int temp;
	int distance=0;
	int con;
	do
	{
		temp=randnum();
		if (temp>100.0001)
		{
			distance+=2;
		}
		else if (temp<100.0001)
		{
			distance-=1;
		}
	} while(distance<10&&distance>0);
	if (distance>=10)
		con=1;
	else
		con=0;
	return con;
}
int main(void)
{

	srand(time(NULL));
	int con,home,stay;
	home=0;
	stay=0;
	for (int i=0;i<CHOICES;i++)
	{
		con=judge();
		if (0==con)
		{
			stay+=1;
			printf("This time the puppy chooses stay.\n");
		}
		else if(1==con)
		{
			home+=1;
			printf("This time the puppy chooses go home.\n");
		}
	}
	printf("Home:%d\n",home);
	printf("Stay:%d\n",stay);
	printf("The rate of go back home is %.2f%%.\n",100*home/500.0);
}