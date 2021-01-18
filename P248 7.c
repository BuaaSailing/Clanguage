#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TIMES 1000

int randnum();
int randnum()
{	
	int numlist[TIMES];
	srand(time(NULL));
	for (int i=0;i<TIMES;i++)
	{
		numlist[i]=1+(int)rand()%10;
	}

	int onescount=0;int twoscount=0;int threescount=0;int fourscount=0;int fivescount=0;int sixscount=0;int sevenscount=0;int eightscount=0;int ninescount=0;int tenscount=0;
	for (int i=0;i<TIMES;i++)
	{
		switch (numlist[i])
		{
			case 1:
				onescount+=1;
				break;
			case 2:
				twoscount+=1;
				break;
			case 3:
				threescount+=1;
				break;
			case 4:
				fourscount+=1;
				break;
			case 5:
				fivescount+=1;
				break;
			case 6:
				sixscount+=1;
				break;
			case 7:
				sevenscount+=1;
				break;
			case 8:
				eightscount+=1;
				break;
			case 9:
				ninescount+=1;
				break;
			case 10:
				tenscount+=1;
				break;
			}
	}
	printf("onescount=%d and the percentage is %.2f%%.\n",onescount,onescount/10.0);
	printf("twoscount=%d and the percentage is %.2f%%.\n",twoscount,twoscount/10.0);
	printf("threescount=%d and the percentage is %.2f%%.\n",threescount,threescount/10.0);
	printf("fourscount=%d and the percentage is %.2f%%.\n",fourscount,fourscount/10.0);
	printf("fivescount=%d and the percentage is %.2f%%.\n",fivescount,fivescount/10.0);
	printf("sixscount=%d and the percentage is %.2f%%.\n",sixscount,sixscount/10.0);
	printf("sevenscount=%d and the percentage is %.2f%%.\n",sevenscount,sevenscount/10.0);
	printf("eightscount=%d and the percentage is %.2f%%.\n",eightscount,eightscount/10.0);
	printf("ninescount=%d and the percentage is %.2f%%.\n",ninescount,ninescount/10.0);
	printf("tenscount=%d and the percentage is %.2f%%.\n",tenscount,tenscount/10.0);



}

int main(void)
{
	int num;
	randnum();

}
	