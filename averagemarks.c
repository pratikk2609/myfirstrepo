#include<stdio.h>
int main()
{
    float a,b,c;
    float average;

    printf("enter subject1 marks:");
    scanf("%f", &a);
    printf("enter subject2 marks:");
    scanf("%f", &b);
    printf("enter subject3 marks:");
    scanf("%f", &c);
    average=(a+b+c)/3;
    printf("average is %f", average);

    if(average>=75)
    {
        printf("\ndistinction");
    }
    else if(average>=60 && average<=74.99)
    {
        printf("\nfirst class");
    }
    else if(average<60)
    {
        printf("\naverage");
    }
    else
    {
        printf("");
    }
    return 0;

}