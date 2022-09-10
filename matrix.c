#include <stdio.h>
int main()
{
    int i, j, a[2][2], sum = 0;
    printf("enter the matrix:\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("the resultant matrix:\n");
    for (i = 0; i < 2; i++)
    {
        sum = 0;
        for (j = 0; j < 2; j++)
        {
            printf("%d\t", a[i][j]);

            sum += a[i][j];
        }
        printf("%d", sum);
        printf("\n");
    }

    for (j = 0; j < 2; j++)
    {
        sum = 0;
        for (i = 0; i < 2; i++)
        {
            sum += a[i][j];
        }
        printf("%d\t", sum);
    }
    sum = 0;

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            if (i == j)
            {
                sum += a[i][j];
            }
        }
    }
    printf("%d", sum);
    printf("end of program\n");
    return 0;
}