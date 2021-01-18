#include <stdio.h>
#include <math.h>
int main(void)
{
    int num;
    scanf("%d", &num);
    int g1[num], g2[num], g3[num];
    int output = 0;
    for (int i = 0; i < num; i++)
    {
        scanf("%d %d %d", &g1[i], &g2[i], &g3[i]);
        for (int j = 0; j < i; j++)
        {
            if ((abs(g1[i] - g1[j]) <= 5) && (abs(g2[i] - g2[j]) <= 5) && (abs(g3[i] - g3[j]) <= 5) && (abs(g1[i] + g2[i] + g3[i] - g1[j] - g2[j] - g3[j]) <= 10))
            {
                output++;
                //printf("%d\n",output);
            }
        }
    }
    printf("%d", output);

    return 0;
}