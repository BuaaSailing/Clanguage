#include<stdio.h>
int *output(int);

void out(int *,int);

int main(void)
{
    int n;
    scanf("%d",&n);
    int *p=output(n);

    out(p,n);

    return 0;
}

int *output(int n)
{
    if (n==1)
    {
        int *lis;
        *lis=1;
        return lis;
    }
    else if (n==2)
    {
        int *lis;
        *(lis)=1;
        *(lis+1)=1;
        *(lis+2)=1;
        return lis;
    }
}

void out(int *p,int n)
{
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<=n;j++)
        {
            printf("%d",*(p+i*n+j));

        }
        printf("\n");
    }
}