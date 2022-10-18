#include<stdio.h>
int main()
{
    int marks1,marks2,marks3,avg;
    printf("enter marks 1:");
    scanf("%d", &marks1);
    printf("enter marks 2:");
    scanf("%d", &marks2);
    printf("enter marks 3:");
    scanf("%d", &marks3);
    
    avg=(marks1+marks2+marks3)/3;
    printf("average is %d", avg);
    
    if(avg >= 90)
    {
        printf("\nDistinction");
    }
    else if(avg >=60 && avg <=90)
    {
        printf("\nFirst class");
    }
    else
    {
        printf("\naverage");
    }
    
    return 0;
}
