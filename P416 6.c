#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    printf("\n");
    FILE *f=fopen("C:\\Users\\DELL\\Desktop\\BUAA20-21Fall\\Cprogramming\\Code\\Week 16\\pun","rb");
    if(f==NULL)
    {
        printf("Failed to open files.\n");
        exit(EXIT_FAILURE);
    }
    printf("Offset""  ""            Bytes            ""  ""Characters""\n");
    printf("------""  ""-----------------------------""  ""----------""\n");
    unsigned int i;
    fseek(f,0,SEEK_END);
    int len=ftell(f)/2;
    rewind(f);
    char list[10]={0};
    int flag=0;
    for (int j=0;j<len;j+=10)
    {
        for (int u=0;u<10;u++)
        {
            list[u]=' ';
        }
        printf("%6d",j);
        for (int k=0;k<10;k++)
        {
            fscanf(f,"%2x",&i);
            if(i==0xD || i== 0xA)
            {
                printf(" %02X",i);
                list[k]='.';
            }
            else
            {
                printf("%3X",i);
                list[k]=(char)i;
            }
            flag++;
            if (flag>=len)
            {
                int n=10-flag%10;
                for (int y=0;y<n;y++)
                {
                    printf("   ");
                }
                break;
            }


        }
        printf("   ");
        for (int p=0;p<10;p++)
        {
            printf("%c",list[p]);
        }
        printf("\n");
    }
    fclose(f);

    return 0; 
}