#include<stdio.h>
#include<stdlib.h>
struct color
{
    int red;
    int green;
    int blue;
};
typedef struct color COLOR;

int main(void)
{
    const COLOR MAGENTA={.red=255,.blue=255};
    printf("red is: %d.\ngreen is: %d.\nblue is: %d.\n",MAGENTA.red,MAGENTA.green,MAGENTA.blue);

    return 0;
}