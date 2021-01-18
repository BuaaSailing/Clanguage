#include<stdio.h>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int sum(int (*f)(int),int start,int end);

int func2(int);

int main(void)
{
    int i,j;
    printf("Please enter two numbers:\n");
    scanf("%d %d",&i,&j);

    int outcome=sum((func2),i,j);

    printf("The outcome is %d.\n",outcome);

    return 0;
}

int sum(int (*f)(int),int a,int b)
{
    return (*f)(a)+(*f)(b);
}
int func2(int n)
{
    return n*2*n;
}