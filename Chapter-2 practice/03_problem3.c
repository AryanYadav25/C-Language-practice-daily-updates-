//Write a program to check whether a number is divisible by 97 or not.

#include <stdio.h>

int main(){

    int a = 4234;
    int b = 6305;
    printf("the value of a%97 is %d\n", a%97); // not divisible
    printf("the value of b%97 is %d", b%97);   // divisible
    
    
    return 0;
}