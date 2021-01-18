#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int randnum();
int randnum()
{
	srand(GetTickCount());
	int randnumber1=1+(int)rand()%26;
	randnumber1+=96;
	printf("%c\n",randnumber1);
	return randnumber1;
}
int randnum2();
int randnum2()
{	
	int randnumber2=1+(int)rand()%26;
	randnumber2+=96;
	printf("%c\n",randnumber2);
	return randnumber2;
}

int main(void)
{
	randnum();
	int i=0;
	int randnumber1=randnum();
	int randnumber2=randnum2();
	while (1)
		if ((randnumber1==97 && randnumber2==116) || (randnumber1==105 && randnumber2==115) ||(randnumber1==104  && randnumber2==101) ||( randnumber1==119 && randnumber2== 101) ||(randnumber1==117 && randnumber2==112) ||(randnumber1==111 && randnumber2==110) )
			break;
		else	
		{
			randnumber1=randnum();
			randnumber2=randnum2();
			i+=1;

		}
	printf("The program has tried %d times.\n",i*2);
	printf("The final word is %c%c",randnumber1,randnumber2);
	return 0;
}