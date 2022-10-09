#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n, i, m, j, k, divs, sum=0;
    scanf("%d", &n);
    for(i=1; i<=6;i++)
    {
        k=1;
        divs=1;
        // printf("%d", i);
        //m=n%10;
        //printf("\n%d", m);
        for(j=1; j<=i; j++)
        {
            k=k*10;
        }
        for(m=2; m<=i; m++)
        {
            divs=divs*10;
        }
        m=n%k;
        sum=sum+(m/divs);
        printf("\nk=%d, m=%d, divs=%d, sum=%d", k, m, divs, sum);
        
    }
    printf("\nsum of all digits is %d", sum);
    return 0;
}  