// Write a program to determine whether a character entered by the user is
// lowercase or not


#include <stdio.h>

int main(){
    char ch;
    printf("Enter the character:\n");
    scanf(" %c", &ch);
    // printf("the character is %c\n", ch);
    // printf("the value of character is %d\n", ch);
    if(ch >= 97 && ch<= 122){
        printf("this character is lowercase\n");
    }
    else{
        printf("this character is not lowercase\n");
    }
    return 0;
}