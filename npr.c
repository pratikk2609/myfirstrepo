#include<stdio.h>
int factorial(int n)
{
    int i, fact=1;
    for(i=n; i>=1; i--)
    {
        fact=fact*i;
    }
    return fact;
}

int calculatenpr(int n, int r)
{
    int nfact, nminusrfact , finalnpr;
    nfact=factorial(n);
    nminusrfact=factorial(n-r);
    //printf("nfact=%d\n, nminusrfact=%d\n", nfact, nminusrfact);
    finalnpr=nfact/nminusrfact;
    return finalnpr;
}
int main() 
{
    int n, p, npr, fact, i, r;
    char ans ='y';
    do
    {
        printf("enter a number n:");
        scanf("%d", &n);
        printf("enter a number r:");
        scanf("%d", &r);
        npr = calculatenpr(n, r);
        printf("value of %dp%d=%d\n", n, r, npr);
        printf("do you want to continue?");
        scanf("%s",&ans);
    } while(ans =='y');
    return 0;
}
