#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
int judge(float [],int);
void output(float);
int main(void)
{
	float starttime[]={8,9.43,11.19,12.47,14,15.45,19,21.45};
	float arrivetime[]={10.16,11.52,13.31,15,16.08,17.55,21.20,23.58};
	for (int i=0;i<8;i++)
	{
		starttime[i]=(int)(starttime[i])*60+(starttime[i]-(int)(starttime[i]))*100;
	}
	for (int i=0;i<8;i++)
	{
		arrivetime[i]=(int)(arrivetime[i])*60+(arrivetime[i]-(int)(arrivetime[i]))*100;
	}
	int hour,min;
	printf("Enter a 24-hour time: ");
	scanf("%d:%d",&hour,&min);
	int time=hour*60+min;
	int choice=judge(starttime,time);
	int s_hour=(int)starttime[choice]/60;
	int s_min=(int)starttime[choice]%60;
	int a_hour=(int)arrivetime[choice]/60;
	int a_min=(int)arrivetime[choice]%60;
	if (12<s_hour)
	{
		printf("Closest departure time is %d:%02d a.m., ",s_hour,s_min);
	}
	else 
		printf("Closest departure time is %d:%02d p.m., ",s_hour,s_min);
	if (12<a_hour)
	{
		printf("arriving at %d:%02d a.m.",a_hour,a_min);
	}
	else
		printf("arriving at %d:%02d p.m.",a_hour,a_min);
	return 0;

}
int judge(float starttime[],int time)
{
	float minus[8];
	float minnum=100000;
	int index=0;

	for (int i=0;i<8;i++)
	{
		minus[i]=abs(starttime[i]-time);
		if (minus[i]<=minnum)
		{
			index=i;
			minnum=minus[i];
		}
	}
	return index;
}