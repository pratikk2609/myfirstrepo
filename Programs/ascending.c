#include<stdio.h>

int main()
{
    int a[5], i, j, temp;
    printf("enter array elements : ");
    for(i=0; i<5; i++){
        scanf("%d", &a[i]);
    }
    for(i=0; i<5; i++)
    {
        for(j=i+1; j<5; j++)
        {
            if(a[i] > a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }

    printf("array elements in ascending order:");
    for(i=0; i<5; i++)
    {
        printf("%d \t", a[i]);
    }

    return 0;
}