#include<stdio.h>
#include<stdlib.h>
struct Info
{
    char name[100];
    float revenue;
    float ratio;
};
typedef struct Info INFO;

int main(void)
{
    INFO info1,info2,info3,info4,info5;

    printf("Please enter the infomation of 5 stocks:\n");
    scanf("%s %f %f",&info1.name,&info1.revenue,&info1.ratio);
    scanf("%s %f %f",&info2.name,&info2.revenue,&info2.ratio);
    scanf("%s %f %f",&info3.name,&info3.revenue,&info3.ratio);
    scanf("%s %f %f",&info4.name,&info4.revenue,&info4.ratio);
    scanf("%s %f %f",&info5.name,&info5.revenue,&info5.ratio);

    printf("The price of %s is %.2f.\n",info1.name,info1.revenue*info1.ratio);
    printf("The price of %s is %.2f.\n",info2.name,info2.revenue*info2.ratio);
    printf("The price of %s is %.2f.\n",info3.name,info3.revenue*info3.ratio);
    printf("The price of %s is %.2f.\n",info4.name,info4.revenue*info4.ratio);
    printf("The price of %s is %.2f.\n",info5.name,info5.revenue*info5.ratio);


    //printf("%s %2f %2f",info1.name,info1.revenue,info1.ratio);

    return 0;
}