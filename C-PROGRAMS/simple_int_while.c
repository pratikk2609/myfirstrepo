#include<stdio.h>
int main()
{
    int p,n,count;
    float r,si;
    
    count=1;
    
    while(count<=2)
    {
        printf("enter  values of p, n, r:");
        scanf("%d%d%f", &p,&n ,&r);
        
        si=(p*n*r)/100;
        printf("SI is %f\n", si);
        
        count = count+1;
    }
    
    return 0;
}
