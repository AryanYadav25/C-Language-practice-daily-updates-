//Write a program to calculate the factorial of a given number using a for loop.

#include <stdio.h>

int main(){
    int product = 1;
    int n = 100000000;
    for(int i = 1; i<=n; i++){
        product *=i;
    }
    printf("the factorial is %d\n", product);
    return 0;
}