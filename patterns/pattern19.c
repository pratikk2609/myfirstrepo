#include<stdio.h>
int main()
{
    int n=10;
    for(int i=1;i<=n;i++)
    {
        for(int j=n;j>=1;j--)
        {
            if(i>=j)
                printf("* ");
            else
                printf(" ");
        }
        printf("\n");
    }
}