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
    int array[4] = {65,44,3,9};
    printf("Enter number of elements\n");
    //scanf("%d", &n);
    n=4;
    printf("Enter %d Numbers\n", n);
    //array = [4,3,2,1];

    // for (i = 0; i < n; i++){
    //     scanf("%d", &array[i]);
    // }
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
        printArray(array, n);
    }

    printf("Sorted Array:\n");

    printArray(array, n);
    // for (i = 0; i < n; i++)
    //     printf("%d\n", a[i]);
     return 0;
}