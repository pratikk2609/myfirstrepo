#include<stdio.h>
int main()
{
    float costprice, sellingprice, profit, loss;
    
    printf("enter cost price of an item: ");
    scanf("%f", &costprice);

    printf("enter selling price of an item: ");
    scanf("%f", &sellingprice);

    if(sellingprice>costprice)
    {
        profit = sellingprice - costprice;
        printf("profit is %f", profit);
    }
    else if(sellingprice<costprice)
    {
        loss = costprice - sellingprice;
        printf("loss is %f", loss);
    }
    else
    {
        printf("no profit or loss");
    }
    return 0;

}