#include<stdio.h>
int main()
{
    int base, exponent;
    long long power=1; // to store data for large number 
    int i;

    printf("enter base: ");
    scanf("%d", &base);
    printf("enter exponent: ");
    scanf("%d", &exponent);

    for(i=1; i<=exponent; i++)
    {
        power=power*base;
    }

    printf("%d ^ %d is %lld", base, exponent, power);

    return 0;
}