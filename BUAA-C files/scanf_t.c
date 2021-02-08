#include <stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    float c=(a+b)/2.0;
    printf("the average of %d and %d is %.4f",a,b,c);
    return 0;
}