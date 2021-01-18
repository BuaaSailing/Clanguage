#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    FILE *f1=fopen("C:\\Users\\DELL\\Desktop\\BUAA20-21Fall\\Cprogramming\\Code\\Week 16\\f1","w");
    char *name[]={"B.Caldwell","D.Memcheck","R.Potter","W.Rosen"};
    char *id[]={"555-98-4128","555-53-2147","555-32-9826","555-09-4263"};
    float avenue[]={7.32,8.32,6.54,9.80};
    int hour[]={37,40,40,35};

    for (int i=0;i<4;i++)
    {
        fprintf(f1,"%-15s%-15s %-5.2f %d\n",name[i],id[i],avenue[i],hour[i]);
    }
    fclose(f1);

    FILE *output=fopen("C:\\Users\\DELL\\Desktop\\BUAA20-21Fall\\Cprogramming\\Code\\Week 16\\f1","r");
    char Name[20];
    char Id[20];
    float Avenue;
    int Hour;
    for (int i=0;i<4;i++)
    {
        fscanf(output,"%s %s",Name,Id);

        fscanf(output,"%f",&Avenue);
        fscanf(output,"%d",&Hour);

        printf("%-15s%-15s",Name,Id);
        printf("Total revenue:%.3f\n",Avenue*Hour);
    }

    return 0;
}