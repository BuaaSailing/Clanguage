#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
char *division(int,int,int);
int main(void)
{
    int num1,num2;
    printf("Please enter two numers:\n");
    scanf("%d %d",&num1,&num2);

    int precision=0;
    printf("Please enter a numer as the precision.\n");
    scanf("%d",&precision);

    printf("%d.",num1/num2);
    char *output=division(num1,num2,precision);
    printf("%s",output);
    free(output);
    return 0;
}
char *division(int a,int b,int precision)
{
    char *p=(char *)malloc(sizeof(char)*(precision+1));
    memset(p,0,precision+1);
    int y= a%b ;
    for( int i = 0; i < precision ; i++ )
    {
        y*=10;
        char temp[2]={0};
        itoa(y/b,temp,10);
        strcat(p,temp);
        y%=b;
    }
    return p;
}
