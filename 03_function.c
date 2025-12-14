// 3. Write a function to calculate force of attraction on a body of mass ‘m’ exerted by earth. Consider g = 9.8m/s2.

#include <stdio.h>

float force(float);  // function prototype 

float force(float x ){
    float force;
    force = (x * 9.8);
    printf("the force of attraction on the body is: %.2f\n", force);
    return force;
}


int main(){
    float x;
    printf("enter the mass of the body:");
    scanf("%f", &x);

    force(x);  // function call 
    
    return 0;
}




