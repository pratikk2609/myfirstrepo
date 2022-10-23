#include <stdio.h>

int main()
{
    int n;
    printf("enter no of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("enter elements in array: ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("even elements are:\n");
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            printf("%d\n", arr[i]);
        }
    }

    printf("odd elements are:\n");
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==1)
        {
            printf("%d\n", arr[i]);
        }
    }


    return 0;
}