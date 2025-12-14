//Write a program to implement program 5 using ‘for’ and ‘do-while’ loop

// #include <stdio.h>

// int main(){
//     int i = 1;
//     int sum = 0;
//     do
//     {
//         sum +=i;  // add current value of i to sum
//         i++;      // inrement i by 1
//     } while (i<=10);
//     printf("the sum of first ten natural number is:  %d\n", sum);
    
//     return 0;
// }


// Using for loop 

#include <stdio.h>

int main(){
    int sum = 0;
    for(int i = 1;i<=10;i++){
        sum +=i;
    }
    printf("%d\n", sum);
    return 0;
}

