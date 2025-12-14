// // Write a program to find greatest of four numbers entered by the user.

// #include <stdio.h>

// int main(){
//     int a;
//     int b;
//     int c;
//     int d;

//     printf("Enter the first number:");
//     scanf("%d", &a);
//     printf("Enter the second number:");
//     scanf("%d", &b);
//     printf("Enter the third number:");
//     scanf("%d", &c);
//     printf("Enter the forth number:");
//     scanf("%d", &d);
//     if(a>b && a>c && a>d){
//         printf("A is the greatest number\n");
//     }
//     else if(b>a && b>c && b>d){
//         printf("B is the greatest number\n");
//     }
//     else if(c>a && c>b && c>d){
//         printf("C is the greatest number\n");
//     }
//     else if(d>a && d>b && d>c){
//         printf("D is the greatest number\n");
//     }
//     else{
//         printf("All numbers are equal or tie between them \n");
//     }

//     return 0;
// }


#include <stdio.h>

int main(){
    int a, b, c, d, max;

    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    printf("Enter the third number: ");
    scanf("%d", &c);
    printf("Enter the fourth number: ");
    scanf("%d", &d);

    max = a;

    if(b > max) max = b;
    if(c > max) max = c;
    if(d > max) max = d;

    printf("The greatest number is: %d\n", max);

    return 0;
}