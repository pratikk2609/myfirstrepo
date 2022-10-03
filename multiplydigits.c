#include<stdio.h>
int main()
{
    int n,a, multiply=1;
    scanf("%d", &n);

    while(n!=0)
    {
        a=n%10;
        multiply=multiply*a;
        n=n/10;
    }
    printf("%d", multiply);
    return 0;
}