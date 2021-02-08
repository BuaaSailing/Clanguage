#include <stdio.h>
int main()
{
	int con1,con2;
	int a;
	char end1,end2,end3,end4;
	scanf("%d",&a);

	con1=(a%2==0);
	con2=( 4<a ) && ( a<=12 );
	
	if ((con1+con2)==2)
	{
		end1=1;
	}
	else
	{
		end1=0;
	}


	if ((con1+con2)>=1)
	{
		end2=1;

	}
	else
	{
		end2=0;
	}



	if ((con1+con2)==1)
	{
		end3=1;
	}
	else
	{
		end3=0;
	}



	if ((con1+con2)==0)
	{
		end4=1;
	}
	else
	{
		end4=0;
	}
	printf("%d %d %d %d",end1,end2,end3,end4);
	return 0;
}