// 6. Write a recursive function to calculate the sum of first ‘n’ natural numbers

#include <stdio.h>

int sum_rec(int);  // function prototype

int sum_rec(int n){
    if (n == 1){
        return 1;
    }
    return n + sum_rec(n-1);
    }

int main(){

    int n;
    printf("enter the value of n:\n");
    scanf("%d", &n);
    printf("the sum of first %d natural numbers is: %d\n", n, sum_rec(n));

    sum_rec(n);  // function call 
    
    return 0;
}