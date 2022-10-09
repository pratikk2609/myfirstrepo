#include <stdio.h>
int main()
{
    int x = 0, y = 0;
    int squareSide = 0;
    printf("Enter The Value for Square Star Pattern = ");
    scanf("%u", &squareSide);

    for (x = 0; x < squareSide; ++x)
    {

        for (y = 0; y < squareSide; ++y)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}