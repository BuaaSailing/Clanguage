#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<time.h>

#define NUM 10000

int main(void)
{
    srand(time(NULL));
    int *Matrix[NUM];
    for(int i=0;i<NUM;i++)
    {
        Matrix[i]=(int *)malloc(NUM*sizeof(int));
        if(Matrix[i]!=NULL)
        {
            for (int j=0;j<NUM;j++)
            {
                if(i!=j)
                {
                    Matrix[i][j]=rand()%100+1;
                    //printf("%d ",Matrix[i][j]);
                }
                else
                {
                    Matrix[i][j]=0;
                    //printf("%d ",Matrix[i][j]);
                }
            }
        }
        //printf("\n");
    }

}