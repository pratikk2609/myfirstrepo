#include <stdio.h>

void sort(int[], int);

int main(void)
{
    int i;
    int arr[10] = {3, 2, 7, 0, 6, 4, 9, 8, 1, 5};
    printf("The array before the sort:\n");
    for (i = 0; i < 10; ++i)
    {
        printf("%i ", arr[i]);
    }
    sort(arr, 10);
    printf("\n\nThe array after the sort:\n");
    for (i = 0; i < 10; ++i)
    {
        printf("%i ", arr[i]);
    }
    return 0;
}

void sort(int a[], int n)
{
    int i, j, temp;
    for (i = 0; i < n - 1; ++i)
    {
        for (j = 0; j < n - i - 1; ++j)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}