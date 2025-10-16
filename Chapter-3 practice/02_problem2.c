// Write a program to determine whether a student has passed or failed. To pass, a
// student requires a total of 40% and at least 33% in each subject. Assume there
// are three subjects and take the marks as input from the user


#include <stdio.h>

int main(){
    int maths;
    int physics;
    int chemistry;
    printf("Enter the marks of maths:\n");
    scanf("%d", &maths);
    printf("Enter the marks of physics:\n");
    scanf("%d", &physics);
    printf("Enter the marks of chemistry:\n");
    scanf("%d", &chemistry);
    float average = (maths + physics + chemistry)/3;


    if(maths>=33 && physics>=33 && chemistry>=33){
        if(average>40){
            printf("You have passed the exam\n");
        }
        else{
            printf("you have failed the exam due to less average\n");
        }
    }
    else{
        printf("you have failed the exam due to less marks in one or more subjects\n");
    }

    return 0;
} 