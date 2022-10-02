#include <stdio.h>
int main()
{
    int radius;
    float area;
    printf("enter the radius:");
    scanf("%d", &radius);

    area = 3.14 * radius * radius;
    printf("area is %f", area);
    return 0;
}