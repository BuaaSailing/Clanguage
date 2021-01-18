#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
    srand(time(NULL));
    int i, n;
    char *buffer;
    int *plist;

    printf ("How long do you want the string? ");
    scanf ("%d", &i);

    buffer = (char*) malloc (i+1);
    if (NULL==buffer) 
      return -1;

    for (n=0; n<i; n++)
      buffer[n]=rand()%26+'a';
    buffer[i]='\0';
    printf ("Random string: %s\n",buffer);
    free (buffer);

    printf ("How many numbers need to be stored? ");
    scanf ("%d", &i);
    printf("%d\n",i);
    plist = (int*) malloc(sizeof(int)*i);
    //plist = malloc(sizeof(*plist)*i);
    if (NULL==plist)
      return -1;

    for (n=0; n<i;n++)
      *(plist+n)=rand();
    //while(1);
    //for (n=0;n<i;n++)
      //printf("%d ",*(plist+n));
    printf("\n");
    free(plist);//!!!

    while(1);

    return 0;
}