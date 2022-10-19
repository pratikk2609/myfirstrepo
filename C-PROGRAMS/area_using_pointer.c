#include <stdio.h>

void areaperi(int, float *, float *);

int main()
{
    int radius;
    float area, perimeter;

    printf("enter radius of circle: ");
    scanf("%d", &radius);
    areaperi(radius, &area, &perimeter);

    printf("area is %f\n", area);
    printf("perimeter is %f\n", perimeter);
    return 0;
}

void areaperi(int r, float *a, float *p)
{
    *a = 3.14 * r * r;
    *p = 2 * 3.14 * r;
}