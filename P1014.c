#include <stdio.h>
int main(void)
{
    int input;
    scanf("%d", &input);
    int j=1;
    while (input>j)
    {
        input-=j;
        j++;
    }
    if (j%2==0)
    {
        printf("%d/%d",input,j-input+1);
    }
    else
    {
        printf("%d/%d",j-input+1,input);
    }
    
    return 0;
}