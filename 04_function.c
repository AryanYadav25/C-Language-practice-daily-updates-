#include <stdio.h>

// 0,1,1,2,3,5,8,13,21,34,55,89.....  fibonacci series 

int fibonacci(int);  // function prototype

int fibonacci(int n){
    if (n == 1 || n == 2){
        return (n-1);
    }
    return fibonacci(n-1) + fibonacci(n-2);
}

int main(){
    int n;
    printf("enter the value of n:\n");
    scanf("%d", &n);
    printf("the %dth term in the fibonacci series is: %d\n", n, fibonacci(n));

    return 0;
}