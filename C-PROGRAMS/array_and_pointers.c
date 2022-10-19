#include <stdio.h>
int main()
{
    int num[] = {24, 32, 12, 44, 56, 17};
    int i, *j;
    j = &num[0];

    for (i = 0; i <= 5; i++)
    {
        printf("address is %u and element is %d\n", i, *j);
        j++;
    }
    return 0;
}
