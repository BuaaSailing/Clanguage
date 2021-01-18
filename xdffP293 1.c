#include<stdio.h>
struct dialing_code
{
    char *country;
    int code;
};typedef struct dialing_code DCODE;

int main(void)
{
    DCODE innum;
    const DCODE country_codes[]={
        {"Argentina",54},{"Bangladesh",880},{"Brazil",55},{"Burma",95},{"China",86},{"Colombia",57},{"Congo,Dem.Rep.Of",243},{"Egypt",20},
        {"Ethiopia",251},{"France",33},{"Germany",49},{"India",91},{"Indonesia",62},{"Iran",98},{"Italy",39},{"Japan",81},{"Mexico",52},
        {"Nigeria",234},{"Pakistan",92},{"Philippines",63},{"Poland",48},{"Russia",7},{"South Africa",27},{"Korea",82},{"Spain",34},{"Sudan",249},{"Thailand",66},{"Turkey",90},{"Ukraine",380},
        {"United Kingdom",44},{"United States",1},{"Vietnam",84}};
    printf("Please enter a number:\n");
    scanf("%d",&innum.code);
    int flag=0;
    for(int i=0;i<(sizeof(coutry_codes)/sizeof(dialing_code));i++)
    {
        if (innum.code==coutry_codes[i].code)
        {
            innum.country=coutry_codes[i].country;
            flag=1;
            break;
        }
    }
    if (0==flag)
    {
        printf("The number you entered is not found.\n");
        return -1;
    }
    printf("%s",innum.country);

    return 0;
}