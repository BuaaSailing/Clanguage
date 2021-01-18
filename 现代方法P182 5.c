#include <stdio.h>
void split_time(long,int *,int *,int *);
int main(void)
{
	printf("Please enter a time in a day.\n");
	long total_sec;
	scanf("%ld",&total_sec);
	int sec,min,hour;
	int *ptsec=&sec;
	int *ptmin=&min;
	int *pthour=&hour;
	split_time(total_sec,ptsec,ptmin,pthour);

	return 0;
}
void split_time(long total_sec,int *ptsec,int *ptmin,int *pthour)
{
	*pthour=total_sec/3600;
	total_sec%=3600;
	*ptmin=total_sec/60;
	total_sec%=60;
	*ptsec=total_sec;
	printf("The hour is %ld.\n",*pthour);
	printf("The min is %ld.\n",*ptmin);
	printf("The sec is %ld.\n",*ptsec);
}