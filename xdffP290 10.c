#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>

#define xv 1
#define yv 1
#define px 7
#define py 8

struct point
{
    int x;
    int y;
};
typedef struct point POINT;
struct rectangle
{
    POINT upper_left;
    POINT lower_right;
};
typedef struct rectangle REC;

POINT mid_point(REC);

REC transform(REC , int, int);

bool check_point(REC,int,int);

int main(void)
{
    POINT x,y;
    printf("Please enter two coordinates:\nX:");
    scanf("%d %d",&x.x,&x.y);
    printf("Y:");
    scanf("%d %d",&y.x,&y.y);

    REC rectangle_1={x,y};
    printf("The area of the rectangle_1 is %d.\n\n",abs(rectangle_1.upper_left.x-rectangle_1.lower_right.x)*abs(rectangle_1.upper_left.y-rectangle_1.lower_right.y));

    POINT midpoint=mid_point(rectangle_1);
    printf("The x coordinate of midpoint is %d, and the y coordinate of is %d.\n\n",midpoint.x,midpoint.y);

    REC rectangle_2=transform(rectangle_1,xv,yv);
    printf("After the transformation--\n");
    printf("The upper_left coordinate is (%d,%d), and the lower_right coordinate  is (%d,%d).\n\n",rectangle_2.upper_left.x,rectangle_2.upper_left.y,rectangle_2.lower_right.x,rectangle_2.lower_right.y);

    int check_outcome=check_point(rectangle_1,px,py);
    printf("The point p is inside the rectangle.\n");
    if (check_point==0)printf("False");else printf("True");

    return 0;
}
POINT mid_point(REC r)
{
    POINT outcome;
    outcome.x=(int)(r.lower_right.x+r.upper_left.x)*0.5;
    outcome.y=(int)(r.lower_right.y+r.upper_left.y)*0.5;
    return outcome;
}

REC transform(REC r,int  vx,int vy)
{
    REC outcome;
    outcome=r;

    outcome.upper_left.x+=vx;
    outcome.lower_right.x+=vy;
    outcome.upper_left.y+=vx;
    outcome.lower_right.y+=vy;

    return outcome;
}

bool check_point(REC r,int,int)
{
    if (px>r.upper_left.x && px<r.lower_right.x && py>r.lower_right.y && py<r.upper_left.y)
        return 1;
    else
        return 0;
}