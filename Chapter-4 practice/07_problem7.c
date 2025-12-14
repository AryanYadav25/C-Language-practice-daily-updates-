// Write a program to calculate the factorial of a given number using a while loop.

#include <stdio.h>

int main(){
    int product  = 1;
    int n = 6;
    int i = 1;
    while(i<=n){
        product *=i;
        i++;
    }
    printf("the factorial of %d is %d", n,  product);

    return 0;
}