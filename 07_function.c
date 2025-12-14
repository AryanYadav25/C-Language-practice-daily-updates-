// 7. Write a program using function to print the following pattern (first n lines)
// *
// ***
// ****

#include <stdio.h>


int main(){
    int n = 3;
    int j;
    int i;
    for (i = 0; i < n; i++){
        for (j = 0; j< 2*i+1; j++){
            printf("*");
        }
        printf("\n");

    }
    return 0;
}