#include <stdio.h>
int main()
{
    int i, j, product;
    for (i = 1; i <= 10; i++)
    {
        for (j = 2; j <= 10; j++)
        {
    
                product = i * j;
                printf("%d\t", product);
            
        }
        printf("\n");
    }
    return 0;
}