#include <stdio.h>
int main()
{
    int num, reverse = 0;

    printf("enter a number: ");
    scanf("%d", &num);

    while (num != 0)
    {
        reverse = (reverse * 10) + (num % 10);
        num /= 10;  //  Divide and Assingnment operator /= divides left operand with right and assign result to left operand
    }
    printf("reverse is %d", reverse);

    return 0;
}