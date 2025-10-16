#include<stdio.h>

int main() {
    int length,breadth ;
    printf("enter length\n");
    scanf("%d", &length);

    printf("enter bradth\n");
    scanf("%d", &breadth);
    int area = length * breadth;
    printf("area of rectangle is %d", area);
    
    
    return 0;
}