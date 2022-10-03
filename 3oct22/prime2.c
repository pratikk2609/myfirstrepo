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
        result= true;
    }
    return result;
}

int main()
{
    int n, i;
    printf("enter a number to check prime:");
    scanf("%d", &n);
    //int result = isPrimeNumber(n);
    
    if(isPrimeNumber(n) == true)
    {
        printf("number is prime");
    }
    else
    {
        printf("number is not prime");
    }
    
    return 0;
}