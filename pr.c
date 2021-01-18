#include<stdio.h>
int main(void)
{
    FILE *f=fopen("C:\\Users\\DELL\\Desktop\\BUAA20-21Fall\\Cprogramming\\Code\\Week 16\\outfile","r");
    fprintf(f,'\n');
    fclose(f);
    return 0;

}