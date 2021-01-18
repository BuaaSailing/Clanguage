#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
double division(int,int);
int main(void)
{
    int num1,num2;
    printf("Please enter two numers:\n");
    scanf("%d %d",&num1,&num2);
    printf("%d %d\n",num1,num2);

    int precision;
    printf("Please enter a numer as the precision.\n");
    scanf("%d",&precision);
    //printf("%d",precision);
    int outcome=num1/num2;
    //printf("%d",outcome);
    char num[5];
    itoa(outcome,num,10);
    printf("%s  ",num);

    //char *p=malloc(sizeof(char)*(precision+1000));

    //strcpy(p,(char)itoa((num1/num2)));
    //strcpy(p,'\0');
    //printf("%s",p);


    return 0;
}