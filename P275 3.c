#include <stdio.h>
void secs(int *,int * ,int *,int *);
int main(void)
{
	printf("Please enter three number as second, minute and hour.\n");
	int second,minute,hour;
	int totSec;
	scanf("%d %d %d",&second,&minute,&hour);
	int *ptsecond=&second;
	int *ptminute=&minute;
	int *pthour=&hour;
	int *pttotSec=&totSec;
	secs(ptsecond,ptminute,pthour,pttotSec);
	return 0;
}

void secs(int *ptsecond,int *ptminute,int *pthour,int *pttotSec)
{	
	*pttotSec=*ptsecond+(*ptminute)*60+(*pthour)*3600;
	printf("The total second is %d.\n",*pttotSec);
}