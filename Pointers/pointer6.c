#include <stdio.h>
#define SIZE 5

int main()
{
    double *arr[3];
    double p = 16, q = 21, r =33;

    arr[0] = &p;
    arr[1] = &q;
    arr[2] = &r;

    for (int i = 0; i < 3; i++)
    {
        printf("value is %f\n", *arr[i]);
        printf("Address is %d\n", arr[i]);
    }

    return 0;
}