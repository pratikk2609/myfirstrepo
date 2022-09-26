#include <stdio.h>
int factorial(int n)
{
    int i, fact = 1;
    for (i = n; i >= 1; i--)
    {
        fact = fact * i;
    }
    return fact;
}
int calculatencr(int n, int r)
{
    int nfact, nminusrfact, rfact, finalncr;
    // printf("\n%d\t%d", n, r);
    nfact = factorial(n);
    nminusrfact = factorial(n - r);
    rfact = factorial(r);
    // printf("nfact=%d, nminusrfact=%d, rfact=%d", nfact, nminusrfact, rfact);
    finalncr = nfact / (nminusrfact * rfact);
    return finalncr;
}

int main()
{
    int n, i, fact;
    printf("enter the coefficient : ");
    scanf("%d", &n);

    for (i = 1; i <= n + 1; i++)
    {
        // fact = factorial(i);
        // printf("\n%d", fact);
        fact = calculatencr(n, i - 1);
        printf("\n%d\n", fact);
    }
}