#include<stdio.h>
int main()
{
    int num,i;
    printf("enter number:");
    scanf("%d", &num);
    
    i=2;
    while(i <= num-1)
    {
        if(num % i == 0)
        {
            printf("not a prime");
            break;
        }
        i++;
    }
    
    if(i==num)
    {
        printf("prime no");
    }
}