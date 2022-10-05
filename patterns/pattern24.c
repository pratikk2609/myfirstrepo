#include<stdio.h>
int main()
{
    int n=5;
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==j || i+j==n+1)
                printf("* "); 
            else
                printf("  ");  // for "O" add o here.
        }
        printf("\n");
    }
}