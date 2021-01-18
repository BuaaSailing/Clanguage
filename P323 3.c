#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int *create_array(int,int);
int main(void)
{
    printf("Please enter two numbers as the length and initial value:\n");
    int num,initial_value;
    scanf("%d %d",&num,&initial_value);
    int *pt;
    pt=create_array(num,initial_value);
    if (NULL==pt)
    {
        printf("Failed in allocating.\n");
        return -1;
    }
    printf("Success.\n");
    for (int i=0;i<num;i++)
    {
        printf("%d\n",*pt);
        pt++;
    }
    pt-=num;
    free(pt);
    return 0;
}
int *create_array(int n,int initial_value)
{
    int *pointer;
    pointer=(int *)malloc(sizeof(int)*n);
    for (int i=0;i<n;i++)
    {
        pointer[i]=initial_value;
    }
    return pointer;
}