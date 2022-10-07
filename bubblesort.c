#include <stdio.h>
int main()
{
    int n, i, j, swap;
    printf("enter no of elements:");
    scanf("%d", &n);
    int array[n];
    printf("enter integers %d\n", n);
           
    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1 - i; j++)
        {
            if (array[j] > array[j + 1])
            {
                swap = array[j];
                array[j] = array[j + 1];
                array[j + 1] = swap;
            }
        }
    }
    printf("ascending order is :");

    for (i = 0; i < n; i++)
    {
        printf("%d\n", array[i]);
    }
    return 0;
}