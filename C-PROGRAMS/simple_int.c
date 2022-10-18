#include<stdio.h>
int main()
{
    int n,p;
    float r,si;
    
    printf("enter p, n and r: ");
    scanf("%d%d%f", &p, &n, &r);
    
    si=(p*n*r)/100;
    printf("simple intrest is %f", si);
    return 0;
}
