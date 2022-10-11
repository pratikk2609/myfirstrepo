#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, *ptr;
    printf("enter total no of values: ");
    scanf("%d", &n);

    ptr = (int *)calloc(n,sizeof(int));

    printf("\nenter the values: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", (ptr + i));
    }

    printf("\nentered values are: ");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", *(ptr + i));
    }

    free(ptr);
}