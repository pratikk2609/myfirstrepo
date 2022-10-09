#include <stdio.h>
int main()
{
    int i, j, rows;
    printf("Enter the number of rows to print in Diamond: \n");
    scanf("%d", &rows);
    
    for (i = 1; i <= rows; i++)
    {
        for (j = rows; j > i; j--)
        {
            printf(" ");
        }
        printf("*");
        for (j = 1; j < (i - 1) * 2; j++)
        {
            printf(" ");
        }
        if (i == 1)
        {
            printf("\n");
        }
        else
        {
            printf("*\n");
        }
    }

    for (i = rows - 1; i >= 1; i--)
    {
        for (j = rows; j > i; j--)
        {
            printf(" ");
        }
        printf("*");
        for (j = 1; j < (i - 1) * 2; j++)
        {
            printf(" ");
        }
        if (i == 1)
        {
            printf("\n");
        }
        else
        {
            printf("*\n");
        }
    }

    return 0;
}
