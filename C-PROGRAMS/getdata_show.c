//get data() & show() to read elements in array
#include <stdio.h>
#define MAX 50 // new way to define arra size
int main()
{
    int arr[MAX], n;
    int getdata(int *, int);
    void show(int *, int);
    n = getdata(arr, MAX);
    show(arr, n);
    return 0;
}
int getdata(int *a, int n)
{
    int x, i = 0;
    printf("Enter array size\n");
    scanf("%d", &n);
    printf("\nEnter array elements\n");
    while (i < n)
    {
        scanf("%d", &x);
        *(a + i) = x;
        i++;
    }
    return i;
}
void show(int *a, int n)
{
    int i;
    for (i = 0; i < n; ++i)
    {
        printf("\n%d", *(a + i));
    }
}
