#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct color
{
    int red;
    int green;
    int blue;
};
typedef struct color COLOR;

COLOR make_color(int,int,int);

int getRed(COLOR);

bool equal_color(COLOR,COLOR);

COLOR brighter(COLOR);

COLOR darker(COLOR);

int main(void)
{
    int num1,num2,num3;
    printf("Please enter three numbers:\n");
    scanf("%d %d %d",&num1,&num2,&num3);

    COLOR color_1=make_color(num1,num2,num3);
    printf("Red: %d\nGreen: %d\nBlue: %d\n\n",color_1.red,color_1.green,color_1.blue);
    
    getRed(color_1);
    printf("\n");

    COLOR color_2={200,200,200};
    bool outcome=equal_color(color_1,color_2);
    printf("The outcome of the comparison:");
    if (1==outcome) printf("TRUE");else printf("FALSE");
    printf("\n\n");

    COLOR color_3=brighter(color_1);
    printf("Brighter Function worked and the outcome is:\nred:%d.\ngreen:%d.\nblue:%d.\n\n",color_3.red,color_3.green,color_3.blue);

    COLOR color_4=darker(color_1);
    printf("Darker Function worked and the outcome is:\nred:%d.\ngreen:%d.\nblue:%d.",color_4.red,color_4.green,color_4.blue);
    
    return 0;
}
COLOR make_color(int red,int green,int blue)
{
    COLOR color;
    if (red >255)
        color.red=255;
    else if(red <0)
        color.red=0;
    else
        color.red=red;

    if (green>255)
        color.green=255;
    else if (green<0)
        color.green=0;
    else
        color.green=green;

    if (blue>255)
        color.blue=255;
    else if (blue<0)
        color.blue=0;
    else
        color.blue=blue;

    return color;
}

int getRed(COLOR c)
{
    printf("The getRed Function worked.\n");
    printf("THe red is: %d.\n",c.red);
    printf("The getRed function finished.\n");

    return c.red;
}

bool equal_color(COLOR c1,COLOR c2)
{
    if ((c1.red==c2.red)&&(c1.green==c2.green)&&(c1.blue==c2.blue))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
COLOR brighter(COLOR c)
{
    COLOR outcome=c;
    if ((c.red==0) && (0==c.blue) && (0==c.green))
    {
        outcome.red=3;
        outcome.green=3;
        outcome.blue=3;
        return outcome;
    }
    if  ( c.red>0 && c.red <3)
    {
        outcome.red=3;
    }
    else if ( c.green>0 && c.green<3 )
    {
        outcome.green=3;
    }
    else if(c.blue<3 && c.blue>0)
    {
        outcome.blue=3;
    }
    outcome.blue=(int)outcome.blue/0.7;
    outcome.red=(int)outcome.red/0.7;
    outcome.green=(int)outcome.green/0.7;

    return make_color(outcome.red,outcome.green,outcome.blue);
}
COLOR darker(COLOR c)
{
    COLOR outcome=c;
    outcome.red=(int)outcome.red*0.7;
    outcome.green=(int)outcome.green*0.7;
    outcome.blue=(int)outcome.blue*0.7;

    return make_color(outcome.red,outcome.green,outcome.blue);
}
