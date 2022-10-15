#include <stdio.h>

int isPrime(int num);
void printPrime(int startValue, int endValue);

int main()
{
    int startValue, endValue;

    printf("enter start value and end value to print prime : \n ");
    scanf("%d%d", &startValue, &endValue);

    printPrime(startValue, endValue);

    return 0;
}

void printPrime(int startValue, int endValue)
{
    printf("Primes between %d and %d are: \n ", startValue, endValue);

    while (startValue <= endValue)
    {
        if (isPrime(startValue))
        {
            printf("%d\t", startValue);
        }
        startValue++;
    }
}

int isPrime(int num)
{
    int i;
    for (i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}