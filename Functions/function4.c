#include <stdio.h>

int findCube(int num)
{
    return num * num * num;
}

int main()
{
    int num, cube;

    printf("enter number: ");
    scanf("%d", &num);

    cube = findCube(num);
    printf("cube of the number: %d", cube);

    return 0;
}