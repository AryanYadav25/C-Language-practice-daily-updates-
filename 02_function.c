// 2. Write a function to convert Celsius temperature into Fahrenheit

#include <stdio.h>

int temp_convert(int); // function prototype

int temp_convert(int c){
    int fahrenheit;
    fahrenheit = (c * 9/5) + 32;
    printf("the temperature in fehrenheit is: %d", fahrenheit);
    return fahrenheit;
}

int main(){
    int c;
    printf("enter the temperature in celsius:\n");
    scanf("%d", &c);

    temp_convert(c);  // function call 

    
    return 0;
}