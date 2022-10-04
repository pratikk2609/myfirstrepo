#include <stdio.h>
#include <stdbool.h>

bool isPrimeNumber(int n)
{
    int i;
    bool result = true;
    if (n == 1)
    {
        printf("1 is neither prime nor composite");
    }

    for (i = 2; i < n / 2; i++)
    {
        if (n % i == 0)
        {
            result = false;
            break;
        }
    }
    if (i == n / 2)
    {
        result = true;
    }
    return result;
}

int main()
{
    int n, i, sum = 0;
    printf("Until what number you want to find prime numbers:");
    scanf("%d", &n);
    // int result = isPrimeNumber(n);

    for (i = 2; i < n; i++)
    {
        if (isPrimeNumber(i) == true)
        {
            printf("%d ", i);
            sum = sum + i;
        }
    }
    printf("\nSum of all prime numbers upto %d is %d", n, sum);
    return 0;
}