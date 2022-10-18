#include <stdio.h>
int main()
{
    printf("hii");
    float area = square();
    printf("\narea of square is %f\n", area);
}

int square()
{
    float side;
    printf("\nenter the length of side in meters: ");
    scanf("%f", &side);
    return side * side;
}
