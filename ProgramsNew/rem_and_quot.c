#include <stdio.h>

int quotient(int a, int b){
   return a / b;
}

int remainder(int a, int b){
   return a % b;
}

int main(){
    int num1, num2, quot, rem;
    printf("Enter dividend: ");    
    scanf("%d", &num1);
    printf("Enter divisor: ");    
    scanf("%d", &num2);
      
    quot = quotient(num1, num2);
    
    rem = remainder(num1, num2);
    printf("Quotient is: %d\n", quot);    
    printf("Remainder is: %d", rem);
    return 0;
}