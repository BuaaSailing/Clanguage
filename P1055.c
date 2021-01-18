#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	int num1,num2,num3,num4,num5,num6,num7,num8,num9;
	char checknum;
	scanf("%1d-%1d%1d%1d-%1d%1d%1d%1d%1d-%c",&num1,&num2,&num3,&num4,&num5,&num6,&num7,&num8,&num9,&checknum);
	int ISBN;
	ISBN=num1+num2*2+num3*3+num4*4+num5*5+num6*6+num7*7+num8*8+num9*9;
	ISBN%=11;
	if (10 == ISBN)
	{
		if (checknum=='X')
		{
			printf("Right");
		}
		else
		{
			printf("%d-%d%d%d-%d%d%d%d%d-%c",num1,num2,num3,num4,num5,num6,num7,num8,num9,'X');
		}
	}
	else
	{	
		//printf("%d",(int)(checknum)-48);
		//printf("%c",(char)(ISBN));
		if (((int)(checknum))-48==ISBN)
		{
			printf("Right");
		}
		else
			printf("%d-%d%d%d-%d%d%d%d%d-%d",num1,num2,num3,num4,num5,num6,num7,num8,num9,ISBN);
	}
	return 0;

}