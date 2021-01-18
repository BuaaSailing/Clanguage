#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

#define STUDENTNUM 1000

struct node
{
    int studentID;
    char name[10];
    int grade;
    struct node *next;
};typedef struct node NODE;

void get_name(char *);

NODE *add_to_list(NODE *);

NODE *search_list(NODE*,int);

NODE *search_list_pre(NODE *,int);

void output(NODE *);

char namechar[]={"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"};

int main(void)
{
    srand(time(NULL));
    clock_t start,stop;
    start=clock();
    NODE *first_node=(NODE *)malloc(sizeof(NODE));
    first_node->grade=-1;
    strcpy(first_node->name,"sqh\0");
    first_node->studentID=19377000;

    NODE *new_node=(NODE*)malloc(sizeof(NODE));
    memset(new_node,0,sizeof(NODE));
    first_node->next=new_node;
    //创建一个链表头
    new_node->studentID=rand()%10000000+10000000;
    new_node->grade=rand()%100+1;
    get_name(new_node->name);

    NODE *end_node;
    end_node=(NODE *)malloc(sizeof(NODE));
    memset(end_node,0,sizeof(NODE));

    end_node->grade=101;
    strcpy(end_node->name,"SQH\0");
    end_node->studentID=19377419;

    new_node->next=end_node;

    for (int i=0;i<STUDENTNUM;i++)
    {
        add_to_list(first_node);
    }

    output(first_node);
    stop=clock();
    double time=(double)(stop-start)/CLOCKS_PER_SEC;
    printf("The runtime of the program is %lf.",time);
    return 0;
}
void get_name(char *name)
{
    for (int i=0;i<9;i++)
    {
        name[i]=namechar[rand()%52];
    }
    name[10]='\0';
}

NODE *add_to_list(NODE* total_list)
{
    NODE *add_new_node;
    add_new_node=(NODE *)malloc(sizeof(NODE));
    memset(add_new_node,0,sizeof(NODE));

    if (add_new_node==NULL)
    {
        printf("Error: malloc failed in add_to_list function.\n");
        exit(1);
    }

    add_new_node->grade=rand()%100+1;
    add_new_node->studentID=rand()%10000000+10000000;
    get_name(add_new_node->name);

    add_new_node->next=search_list(total_list,add_new_node->grade);
    search_list_pre(total_list,add_new_node->grade)->next=add_new_node;
    return total_list;
}

NODE *search_list(NODE *list,int grade)
{
    NODE *pt_post;

    for (pt_post=list;pt_post!=NULL;pt_post=pt_post->next)
    {
        if (pt_post->grade >= grade)
        {
            return pt_post;
        }
    }
    return NULL;
}

NODE *search_list_pre(NODE *list,int grade)
{
    NODE *pt_post;
    NODE *pt_pre;

    for (pt_post=list;pt_post!=NULL;pt_post=pt_post->next)
    {
        if (pt_post->grade >= grade)
        {
            return pt_pre;
        }
        pt_pre=pt_post;
    }
    return NULL;
}

void output(NODE *total_list)
{
    NODE *pt;
    int flag=0;
    for (pt=total_list->next;pt->next!=NULL;pt=pt->next)
    {
        printf("Grade %3d  ",pt->grade);
        printf("StudentId:%d  ",pt->studentID);
        printf("Name:%s\n",pt->name);
    }
}

