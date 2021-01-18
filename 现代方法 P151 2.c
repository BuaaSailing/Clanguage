#include <stdio.h>
int Func(int,int,int);
int main(void)
{
	int x,y,n;
	printf("Please enter x, y  and n:\n");
	scanf("%d %d %d",&x,&y,&n);
	int con=Func(x,y,n);
	printf("%d",con);

	return 0;
}
int Func(int x,int y,int n)
{

	int outcome;
	if(( 0<=x && x<=n-1) && (0<=y && y<=n-1))
		outcome=1;
	else
		outcome=0;

	return outcome;
}