#include <stdio.h>
void Time(int,float *,float *,float *);
int main(void)
{
	printf("Please a number as second.\n");
	int second;
	int sec,min,hours;
	scanf("%d",&second);
	float *ptsec=&sec;
	float *ptmin=&min;
	float *pthours=&hours;
	Time(second,ptsec,ptmin,pthours);

	return 0;
}
void Time(int second,float *ptsec,float *ptmin,float *pthours)
{
	*ptsec=second;
	*ptmin=second/60.0;
	*pthours=second/3600.0;
	printf("Sec is %.0f second.\n",*ptsec);
	printf("Min is %.2f minute.\n",*ptmin);
	printf("Hours is %.4f hour.\n",*pthours);
}