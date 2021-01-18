#include <stdio.h>
int main()
{

	#define LINES 4
	#define COLUMN 4
	int list[LINES][COLUMN];
	int i=0;
	int j=0;
	printf("Enter the numbers from 1-16 in any order:\n");
	for (;i<=3;i+=1)
	{
		for (;j<=3;j+=1)
		{
			scanf("%d",&list[i][j]);

		}
		j=0;
	}

	i=0;
	j=0;

	for (; i<=3; i+=1)
	{
		for (; j<=3; j+=1)
		{
			printf("%-3d",list[i][j]);
		}
		j=0;
		printf("\n");
	}
	int add1=0,add2=0,add3=0,add4=0;
	i=0;
	j=0;
	for (;i<=3;i+=1)
	{
		add1+=list[0][i];
		add2+=list[1][i];
		add3+=list[2][i];
		add4+=list[3][i];
	}
	printf("Row sums:%d %d %d %d\n",add1,add2,add3,add4);
	add1=0;add2=0;add3=0;add4=0;
	for (;j<=3;j+=1)
	{
		add1+=list[j][0];
		add2+=list[j][1];
		add3+=list[j][2];
		add4+=list[j][3];
	}
	printf("Column sums:%d %d %d %d\n",add1,add2,add3,add4);
	printf("Diagnoal sums:%d",list[0][0]+list[1][1]+list[2][2]+list[3][3]);

	return 0;

}