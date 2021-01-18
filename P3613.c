#include<stdio.h>
#include<stdlib.h>
struct place
{
    int flag;
    int n1;
    int n2;
    int item;
};
typedef struct place PLACE;

int main(void)
{
    int n,q;
    scanf("%d %d",&n,&q);
    int output[n];
    int flag,n1,n2,item;
    PLACE info[n];
    for (int i=0; i<q ;i++)
    {
        scanf("%d",&flag);
        if (1==flag)
        {
            scanf("%d %d %d",&n1,&n2,&item);
            info[n1-1].n2=item;
        }
        else if (2==flag)
        {
            scanf("%d %d",&n1,&n2);
            printf("%d\n",info[n1-1].n2);
        }
    }
    return 0;
}