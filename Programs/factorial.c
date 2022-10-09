#include<stdio.h>

int main()
{
    int i,n,fact;
    i=fact=1;

    printf("enter a number :");
    scanf("%d", &n);
    while(i<=n)
    {
        fact=fact*i;
        i++;
    }
    printf("the factorial of the given number is: %d", fact);
}