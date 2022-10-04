#include<stdio.h>
int main()
{
    int n=5;
    for(int i=n;i>=1;i--)
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