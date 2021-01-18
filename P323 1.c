#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void *my_malloc(size_t size);
int main(void)
{
    printf("Please enter a number:\n");
    int num;
    scanf("%d",&num);
    void *pt;
    pt=my_malloc(num);

    return 0;
}
void *my_malloc(size_t num)
{
    void *pointer;
    pointer=malloc(sizeof(pointer)*num);
    if (NULL==pointer)
    {
        printf("Failed in allocating.\n");
        exit(1);
    }
    else
    {
        printf("Success.\n");
        return pointer;
    }
}