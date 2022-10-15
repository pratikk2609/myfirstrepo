#include <stdio.h>

float calculateSum(float num[]);

float calculateSum(float num[])
{
    float sum = 0.0;

    for (int i = 0; i < 6; ++i)
    {
        sum += num[i];
    }

    return sum;
}

int main()
{
    float result, num[] = {25.4, 55.2, 18.6, 3, 19, 18.2};

    result = calculateSum(num);
    printf("Result = %f", result);
    return 0;
}

