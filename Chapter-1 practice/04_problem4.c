#include <stdio.h>

int main(){
    float p, r, t, simple;

    printf("enter principal amount: \n");
    scanf("%f", &p);
    printf("enter rate: \n");
    scanf("%f", &r);
    printf("enter time in years: \n");
    scanf("%f", &t);
    simple = p*r*t/100;

    printf("the simple interest with principarl %f, rate %f and time %f is %f",p,r,t,simple);
    return 0;
}
