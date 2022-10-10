#include <stdio.h>

void printArray(int arr[10], int size)
{
    printf("\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", arr[i]);
    }
}

int main()  
{
    int n, i, j, min, swap;
    int array[4] = {8,3,6,2};
    
    n=4;
    printf("Enter %d Numbers\n", n);

    printArray(array, n);


    for (i = 0; i < n - 1; i++)
    {
        min = i;
        for (j = i + 1; j < n; j++)
        {
            if (array[min] > array[j])
                min = j;
        }
        if (min != i)
        {
            swap = array[i];
            array[i] = array[min];
            array[min] = swap;
        }
        printf("\n-----------------------------------");
        printArray(array, n);
    }

    printf("\nSorted Array: ");

    printArray(array, n);
    return 0;
}