#include <stdio.h>

int main()
{
    int n, i;
    printf("enter a number to check prime:");
    scanf("%d", &n);
    
    if (n == 1)
    {
        printf("1 is neither prime nor composite");
    }

    for (i = 2; i < n / 2; i++)
    {
        if (n % i == 0)
        {
            printf("no is not prime");
            break;
        }
    }
    if (i == n / 2)
    {
        printf("no is prime");
    }
}
