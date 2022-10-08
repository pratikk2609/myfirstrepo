//slelection sorting -> finds the smallest element and swaps it with 1st element
#include <stdio.h>
int main()
{
    int a[10], n, i, j, min, swap;
    printf("Enter number of elements\n");
    scanf("%d", &n);
    printf("Enter %d Numbers\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n - 1; i++)
    {
        min = i;
        for (j = i + 1; j < n; j++)
        {
            if (a[min] > a[j])
                min = j;
        }
        if (min != i)
        {
            swap = a[i];
            a[i] = a[min];
            a[min]=swap;
        }
    }
    printf("Sorted Array:\n");
    for (i = 0; i < n; i++)
        printf("%d\n", a[i]);
    return 0;
}