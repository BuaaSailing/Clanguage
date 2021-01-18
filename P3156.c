#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct id
{
    int studentid;
    int num;
};
typedef struct id ID;
int main(void)
{
    int studentnum;
    int asknum;
    scanf("%d %d",&studentnum,&asknum);
    ID info[studentnum];
    for (int i=0; i<studentnum;i++)
    {
        scanf("%d",&info[i].studentid);
        info[i].num=i;
    }
    int ask;
    for (int i=0;i<asknum;i++)
    {
        scanf("%d",&ask);
        printf("%d\n",info[ask-1].studentid);
    }
    return 0;
}