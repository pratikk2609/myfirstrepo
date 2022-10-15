#include <stdio.h>

int searchElement(int arr[], int arraysize, int search)
{
    int i, n, num;
    for (i = 0; i < arraysize; i++)
    {
        if (arr[i] == search)
        {
            return i;
        }
    }
    return -1;
}

int maxElement(int arr[], int arraysize)
{
    int i;
    int max = arr[0];
    for (i = 0; i < arraysize; i++)
    {
        if (arr[i] >= max)
        {
            max = arr[i];
        }
    }
    return max;
}

int minElement(int arr[], int arraysize)
{
    int i;
    int min = arr[0];
    for (i = 0; i < arraysize; i++)
    {
        if (arr[i] <= min)
        {
            min = arr[i];
        }
    }
    return min;
}

int main()
{
    int arr[100], i, n, search;
    char repeat;
    printf("enter size of array: ");
    scanf("%d", &n);

    printf("\nenter elements of array:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nelements in array are:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }
    do
    {
        printf("enter element u want to search:");
        scanf("%d", &search);

        int result = searchElement(arr, n, search);
        printf("the element %d found at %d position", search, result + 1);

        printf("\ndo you want to find another element:");
        scanf("%s", &repeat);

    } while (repeat == 'y');

    int result = maxElement(arr, n);
    printf("max element is %d\n", result);

    result = minElement(arr, n);
    printf("\nmin element is %d\n", result);

    return 0;
}