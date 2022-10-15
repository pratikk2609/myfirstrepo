#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node * next;
};

int main()
{
    int arr[100], i, n;
    printf("enter no of elements: ");
    scanf("%d" , &n);

    printf("enter the elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("elements in array are: ");
    for(i=0; i<n;i++)
    {
        printf("%d", arr[i]);
    }

    return 0;
}
