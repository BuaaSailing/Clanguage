#include <stdio.h>
#define m 101
int main(void)
{
    int length, num;
    scanf("%d %d", &length, &num);
    int trees[length+1];
    int start[m];
    int end[m];
    for (int k=0; k<length+1;k++)
    {
        trees[k]=1;
        //printf("%d",trees[k]);
    }
    for (int i = 0; i < num; i++)
    {
        scanf("%d %d", &start[i], &end[i]);
        //printf("start[i] %d end[i] %d\n",start[i],end[i]);
    }
    for (int i = 0; i < num; i++)
    {
        for (int j = start[i]; j <= end[i]; j++)
        {
            trees[j] = 0;
            
        }
    }
    int total = 0;
    for (int i = 0; i < length+1; i++)
    {
        if (trees[i] == 1)
            total += 1;
        else
        {
            ;
        }
    }
    printf("%d", total);

    return 0;
}