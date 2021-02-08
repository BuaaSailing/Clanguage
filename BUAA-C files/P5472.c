#include<stdio.h>
struct info
{
    double name;
    double grade1;
    double grade2;
};
typedef struct info INFO;

int main(void)
{
    int n;
    scanf("%d",&n);
    INFO lis[n];
    for (int i=0;i<n;i++)
    {
        scanf("%lf %lf %lf",&lis[i].name,&lis[i].grade1,&lis[i].grade2);
        double total=lis[i].grade1+lis[i].grade2;
        double score=0.7*lis[i].grade1+0.3*lis[i].grade2;
        if( total >140  && score>=80)
        {
            printf("Excellent\n");
        }
        else
            printf("Not excellent\n");
    }
    return 0;
}