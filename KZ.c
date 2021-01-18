#include<stdio.h>
#include<math.h>

struct time {
    int leave;
    int arrive;
};

typedef struct time Time;

int main(){
    Time a[8] = { {480,616},{583,712},{679,12 * 60 + 91},{12 * 60 + 47,15 * 60},{14 * 60,16 * 60 + 8},
        {15 * 60 + 45,17 * 60 + 55},{19 * 60,21 * 60 + 20},{21 * 60 + 45,24 * 60 - 2} };
    int c, b, t, flag = 10000000, tot = 0, i;
    scanf("%d:%d", &c, &b);
    t = c * 60 + b;
    int x;
    for (i = 0; i++; i < 8) {
        
        x = t - a[i].leave;
        if (flag > com(t, a[i].leave)) {
            flag = com(t, a[i].leave);
            tot = i;
        }
    }
    printf("最近起飞时间%02d:%02d,到达时间%02d:%02d。", h(a[tot].leave), m(a[tot].leave), h(a[tot].arrive), m(a[tot].arrive));

    
}

int com(int x, int y){
    return abs(x - y);
}
int h(int x){
    return x / 60;
}
int m(int x){
    return x % 60;
}