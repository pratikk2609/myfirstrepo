#include <stdio.h>
void sum();

void main()
{
    printf("hii");
    sum();
}

void sum()
{
    int a, b;
    printf("\nenter two numbers: ");
    scanf("%d%d", &a, &b);
    printf("The sum is %d", a + b);
}
