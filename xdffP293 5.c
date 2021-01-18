#include<stdio.h>
#include<math.h>

struct time
{
    int start;
    int arrive;
};typedef struct time TIME;

void output(int);

int main(void)
{
    const TIME schedule[]=
    {
        {480,616},{583,712},{679,751},{767,900},{840,968},{945,1075},{1140,1280},{1305,1438}
    };
    TIME user;
    int hour,minute;
    printf("Enter a 24-hour time:");
    scanf("%d:%d",&hour,&minute);
    user.start=hour*60+minute;
    int MAX =1440;
    int flag=0;
    for (int i=0;i<(sizeof(schedule)/sizeof(TIME));i++)
    {
        if (abs(user.start-schedule[i].start)<MAX)
        {
            MAX=abs(user.start-schedule[i].start);
            flag=i;
        }
    }
    printf("Closest departure time is ");output(schedule[flag].start);
    printf(", arriving at ");output(schedule[flag].arrive);
    return 0;

}
void output(int num)
{
    if (num>=720)
    {
        printf("%d:%02d p.m.",(num/60)==12?12:(num/60)%12,num%60);
    }
    else
    {
        printf("%d:%02d a.m.",num/60,num%60);
    }
}