#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

struct node
{
    int num;
    struct node *next;
};typedef struct node NODE;

void output(NODE *,int);

int main(void)
{


    srand(time(NULL));
    NODE *first_node=(NODE *)malloc(sizeof(NODE));
    memset(first_node,0,sizeof(NODE));
    first_node->num=rand();

    NODE *next_node=(NODE *)malloc(sizeof(NODE));
    memset(next_node,0,sizeof(NODE));
    next_node->num=rand();

    first_node->next=next_node;

    int node_num=rand();

    for (int i=0;i<node_num;i++)
    {
        NODE *new_node=(NODE *)malloc(sizeof(NODE));
        memset(new_node,0,sizeof(NODE));
        new_node->num=rand();
        printf("The %d num is %d.\n",i,new_node->num);
        next_node->next=new_node;
        next_node=new_node;
    }
    printf("\nThe node_num is %d.\n",node_num);

    int num;
    printf("Please enter a number:\n");
    scanf("%d",&num);

    output(first_node,num);

    return 0;
}

void output(NODE *lis,int num)
{
    NODE *pt=lis;
    int n=num;

    while (num)
    {
        if (pt!=NULL)
        {
            num--;
            pt=pt->next;
        }
        else
        {
            printf("Failed in searching.\n");
            printf("The address of the first node is %ld",lis);
            exit(1);
        }
    }
    printf("The address of the %d node is %ld",n,pt);
}


