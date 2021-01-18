#include <stdio.h>
#include <string.h>
#define MAX 5000
void build_index_url(char *,char *);
int main(void)
{
	printf("Please enter a website.\n");
	char former[]="http://www.",*ptformer;
	char latter[]="/index.html",*ptlatter;
	ptformer=former;
	ptlatter=latter;
	build_index_url(ptformer,ptlatter);

	return 0;
}
void build_index_url(char *ptformer,char *ptlatter)
{
	char domain[MAX];char index_url;
	gets(domain);
	printf("%s",strcat(strcat(ptformer,domain),ptlatter));
}
