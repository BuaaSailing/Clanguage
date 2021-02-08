#include<stdio.h>
void output(int,int);

int main(void)
{
    int a,b;
    scanf("%d %d",&a,&b);
    output(a,b);

    return 0;
}

void output(int a,int b)
{
    int flag=0;
    int out[b-a];
    for(int i = a;i <= b;i++)
    {
        if (i%4==0 && i%100!=0)
        {
            out[flag]=i;
            flag++;
        }
        else if ( i%400 == 0 )
        {
            out[flag]=i;
            flag++;
        }
        else
        {
            ;
        }

    }
    printf("%d\n",flag);
    for (int j = 0;j<flag;j++)
    {
        printf("%d ",out[j]);
    }
}