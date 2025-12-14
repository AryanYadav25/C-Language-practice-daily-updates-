// 1. Write a program using function to find average of three numbers. 


#include <stdio.h>

int average(int,int,int); // function prototype 

int average(int x, int y, int z){   // function definition 
    int avg;
    avg = (x + y + z)/3;
    printf("the average is: %d\n", avg);
    return avg;
}

int main(){
    int a,b,c;

    printf("enter the three numbers for the average:\n");
    scanf("%d %d %d", &a, &b, &c);

    average(a,b,c); // function call


    
    return 0;
}