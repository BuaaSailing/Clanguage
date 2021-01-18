#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>

#define xv 3
#define yv 4
#define c 2
#define pi 3.14
struct point
{
    int x;
    int y;
};typedef struct point POINT;

struct shape
{
    int shape_kind;  /* RECTANGLE=0  or CIRCLE=1  */
    POINT center;
    union
    {
        struct
        {
            int length,width;
        }rectangle;
        struct
        {
            int radius;
        }circle;
    }u;
}s;

struct shape translation(struct shape,int,int);

struct shape zoom(struct shape,int,int);

int main(void)
{
    printf("Please enter a number(0/1):\n");
    int flag;
    scanf("%d",&flag);

    if (0==flag)
    {
        printf("Please enter two numbers as the length and width:\n");
        scanf("%d %d",&s.u.rectangle.length,&s.u.rectangle.width);
        printf("The area of the rectangle is %d.\n\n",s.u.rectangle.width*s.u.rectangle.length);

        printf("Please enter a coordinate as the center:\n");
        scanf("%d %d",&s.center.x,&s.center.y);
        printf("The coordinate of the center of the rectangle is (%d,%d).\n\n",s.center.x,s.center.y);

        s=translation(s,xv,yv);
        printf("After the transformation--\nThe coordinate of the center is (%d,%d).\n\n",s.center.x,s.center.y);

        s=zoom(s,flag,c);
        printf("After the zoom--\nThe area of the rectangle is %d.\n\n",s.u.rectangle.width*s.u.rectangle.length);
    }
    else if (1==flag)
    {
        printf("Please enter a number as the radius of the circle.\n");
        scanf("%d",&s.u.circle.radius);
        printf("The area of the circle is %.2f.\n\n",pow(s.u.circle.radius,2)*pi);

        printf("Please enter a coordinate as the center:\n");
        scanf("%d %d",&s.center.x,&s.center.y);
        //printf("--%d %d",s.center.x,s.center.y);
        printf("The coordinate of the center of the rectangle is (%d,%d).\n\n",s.center.x,s.center.y);

        s=translation(s,xv,yv);
        printf("After the transformation--\nThe coordinate of the center is (%d,%d).\n\n",s.center.x,s.center.y);

        s=zoom(s,flag,c);
        printf("After the zoom--\nThe area of the circle is %.2f.\n\n",pow(s.u.circle.radius,2)*pi);

    }

}
struct shape translation(struct shape s,int x,int y)
{
    s.center.x+=x;
    s.center.y+=y;

    return s;
}
struct shape zoom(struct shape s,int flag,int k)
{
    if (0==flag)
    {
        s.u.rectangle.length=(int)s.u.rectangle.length*k;
        s.u.rectangle.width=(int)s.u.rectangle.width*k;

        return s;
    }
    else if (1==flag)
    {
        s.u.circle.radius=(int)s.u.circle.radius*k;

        return s;
    }
}