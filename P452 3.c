#include<stdio.h>
struct Time
{
    int hour;
    int minute;
};
typedef struct Time TIME;

int main(void)
{
    TIME input_time;
    printf("Please enter the hour and minute (hour:minute):\n");
    scanf("%d:%d",&input_time.hour,&input_time.minute);
    printf("After one minute: %d:%d.\n",input_time.hour,input_time.minute+1);

    return 0;
}