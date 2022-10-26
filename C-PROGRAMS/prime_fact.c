#include <stdio.h>
#include <stdbool.h>

bool isPrime(int);
int main()
{
    int n, i = 2;
    printf("Enter the Number: ");
    scanf("%d", &n);
    printf("\nPrime factors of %d are\n", n);
    for (i = 2; i <= n / 2; ++i)
    {
        if (n % i == 0 && isPrime(i))
        {
            printf("%d ", i);
        }
    }
    return 0;
}
bool isPrime(int x)
{
    int i;
    for (i = 2; i <= x / 2; ++i)
    {
        if (x % i == 0)
        {
            return false;
        }
        return true;
    }
}