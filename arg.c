#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

#define ADD "add\0"
#define SUB "sub\0"
#define DIV "div\0"
#define MUL "mul\0"

int add(int,int);
int sub(int,int);
int divide(int,int);
int multiple(int,int);
int int_calculator(char *code,int,int);

int main()
{
	char order[4];
	int a,b;
	gets(order);
	scanf("%d %d",&a,&b);
	int result=int_calculator(order,a,b);
	printf("result of %s %d %d = %d\n",order,a,b,result);
	return 0;
}

int add(int a,int b){return a+b;}
int sub(int a,int b){return a-b;}
int divide(int a,int b){return a/b;}
int multiple(int a,int b){return a*b;}
int int_calculator(char *code,int a, int b)
{
	for (int i=0;i<3;i++)
	{
		code[i]=(char)(tolower(code[i]));
	}
	if(0==strcmp(code,ADD))
		return add(a,b);
	else if(0==strcmp(code,SUB))
		return sub(a,b);
	else if(0==strcmp(code,DIV))
		return divide(a,b);
	else if(0==strcmp(code,MUL))
		return multiple(a,b);
	else
		return -1;
}