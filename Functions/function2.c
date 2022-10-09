#include<stdio.h>

int square()  
{  
    float side;  
    printf("Enter the length of the side : ");  
    scanf("%f",&side);  
    return side * side;  
}
void main()  
{  
    float area = square();  
    printf("The area of the square: %f\n",area);  
}  
