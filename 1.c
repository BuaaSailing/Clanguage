#include <stdio.h>
int firstnum=15;
void valfun();
int main(void)
{
	int secnum=5;
	firstnum=10;
	printf("%d\n",firstnum);
	printf("%d\n",secnum);
	valfun();
}
void valfun()
{
	int secnum;
	printf("%d\n",firstnum);

}