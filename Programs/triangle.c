#include <stdio.h>
int main()
{
    int side1, side2, side3;
    printf("enter the length of side1:");
    scanf("%d", &side1);
    printf("enter the length of side2:");
    scanf("%d", &side2);
    printf("enter the length of side3:");
    scanf("%d", &side3);

    if (side1 == side2 && side2 == side3)
    {
        printf("\n Triangle is equivalent");
    }
    else if (side1 == side2 || side2 == side3 || side3 == side1)
    {
        printf("\n Triangle is isoceles");
    }
    else
    {
        printf("Triangle is scalene");
    }

    return 0;
}