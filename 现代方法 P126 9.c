#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define NUMROWS 12
#define NUMCOLS 12
int judge(char [][12],int,int,int);
void update(char[][12],int,int,int,int);
void output(char[][12]);



int main(void)
{
	char list[NUMROWS][NUMCOLS]={ {'*','*','*','*','*','*','*','*','*','*','*','*'},
								{'*','.','.','.','.','.','.','.','.','.','.','*'},
								{'*','.','.','.','.','.','.','.','.','.','.','*'},
								{'*','.','.','.','.','.','.','.','.','.','.','*'},
								{'*','.','.','.','.','.','.','.','.','.','.','*'},
								{'*','.','.','.','.','.','.','.','.','.','.','*'},
								{'*','.','.','.','.','.','.','.','.','.','.','*'},
								{'*','.','.','.','.','.','.','.','.','.','.','*'},
								{'*','.','.','.','.','.','.','.','.','.','.','*'},
								{'*','.','.','.','.','.','.','.','.','.','.','*'},
								{'*','.','.','.','.','.','.','.','.','.','.','*'},
								{'*','*','*','*','*','*','*','*','*','*','*','*'} };
	srand(time(NULL));
	list[1][1]='A';
	int i=1;
	int j=1;
	for (int k=0;k<25;k++)
	{	
		if (list[i][j-1]=='.' || list[i][j+1]=='.' || list[i-1][j]=='.' || list[i+1][j]=='.')
		{
			int shiftnum;
			do
			{
				shiftnum=rand()%4;
			} while  ( 1== judge(list,i,j,shiftnum) );
			update(list,i,j,shiftnum,k);
			if (0==shiftnum)
				i--;
			else if (1==shiftnum)
				j--;
			else if (2==shiftnum)
				j++;
			else if (3==shiftnum)
				i++;
		}// 0=up;1=left;2=right;3=down
		else
		{
			break;
		}
	}
	output(list);
	return 0;
}
int judge(char list[][12],int i,int j,int shiftnum)
{
	if ((shiftnum==0 && list[i-1][j]=='.')||(shiftnum==1 && list[i][j-1]=='.')||(shiftnum==2 && list[i][j+1]=='.')||(shiftnum==3 && list[i+1][j]=='.'))
		return 0;
	else
		return 1;
}
void update(char list[][12],int i,int j,int shiftnum,int k)
{
	if (0==shiftnum)
	{
		list[i-1][j]='B'+k;
	}
	else if (1==shiftnum)
	{
		list[i][j-1]='B'+k;
	}
	else if (2==shiftnum)
	{
		list[i][j+1]='B'+k;
	}
	else if (3==shiftnum)
	{
		list[i+1][j]='B'+k;
	}
}
void output(char list[][12])
{
	for (int i=1;i<11;i++)
	{
		for (int j=1;j<11;j++)
		{
			printf("%c",list[i][j]);
		}
		printf("\n");
	}
}