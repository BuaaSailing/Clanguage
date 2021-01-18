#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define DICE 2
int randnum();
int randnum()
{
	int dicelist[DICE];
	srand(time(NULL));
	for (int i=0;i<DICE;i++)
	{
		dicelist[i]=1+(int)rand()%6;
	}
	printf("The first dice is %d.\n",dicelist[0]);
	printf("The second dice is %d.\n",dicelist[1]);
	int sumdice=dicelist[0]+dicelist[1];
	return sumdice;
}
int main(void)
{
	int con=randnum();
	if (7==con || 11==con)//如果需要调整赌博方式，可以在此行调整对点数之和的判断
	//if （con%2==0) 判断点数之和奇偶性
	//if （con> 一个数) 
	//if  (con<=一个数) 判断点数之和范围
	{
		printf("Hooray, you win!\n");
	}
	else
	{
		printf("Sorry, you lose.\n");
	}

	return  0;
}