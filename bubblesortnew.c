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
    int n, i, j, swap;
    printf("enter no of elements:");
    scanf("%d", &n);
    int array[n];
    printf("enter %d integers\n", n);
    //printf("\nunsorted elements are ", array[n]);
           
    for (i = 0; i < n; i++)
       scanf("%d", &array[i]);
    
    printArray(array,n);

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
            printArray(array,n);

        }
        //printf("\nelements after swapping %d\n",swap);
        printf("\n------------------------------");
        printArray(array,n);

    }
    
    printf("\nascending order is :\n");

    printArray(array, n);
   
    return 0;
}