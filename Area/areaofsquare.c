#include <stdio.h>
int main()
{
    int side, area;
    printf("enter side of square:");
    scanf("%d", &side);

    area = side * side;
    printf("area is %d", area);
    return 0;
}