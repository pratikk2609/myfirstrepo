#include <stdio.h>
int main()
{
    int n;
    do
    {
        printf("enter the no:");
        scanf("%d", &n);

    } while (n % 2 == 0);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == (n / 2) + 1 || j == (n / 2) + 1)
                printf("X ");
            else
                printf("O ");
        }
        printf("\n");
    }
}