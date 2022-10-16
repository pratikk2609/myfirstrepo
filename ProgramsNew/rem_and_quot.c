#include <stdio.h>

int quotient(int a, int b)
{
    return a / b;
}

int remainder(int a, int b)
{
    return a % b;
}

int main()
{
    int num1, num2, quot, rem;
    printf("enter dividend:");
    scanf("%d", &num1);
    printf("\nenter divisor:");
    scanf("%d", &num2);

    quot = quotient(num1, num2);

    rem = remainder(num1, num2);

    printf("Quotient is %d\n", quot);
    printf("Remainder is %d\n", rem);

    return 0;
}