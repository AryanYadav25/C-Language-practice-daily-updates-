//Explain step by step evaluation of 3*x/y – z+k, where x=2, y=3, z=3, k=1

#include <stdio.h>

int main(){
    int x = 12 , y = 4 , z = 6 , k = 8;
    float result = 3*x/y -z+k;
    printf("the float is %f", result);

    // step by step 
    // 3*x/y -z+k
    // 6/y -z+k
    // 1.5 -z+k
    // 1.5-6+1
    
    return 0;
}