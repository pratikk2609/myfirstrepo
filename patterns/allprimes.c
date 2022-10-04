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
        return result;
    }
    return result;
}

int main()
{
    int n, i;
    printf("until what digit do you want to print prime numbers:");
    scanf("%d", &n);

    for (i = 2; i < n; i++)
    {
        if (isPrimeNumber(i) == true)
        {
            printf("%d", i);
        }
    }
    return 0;
}