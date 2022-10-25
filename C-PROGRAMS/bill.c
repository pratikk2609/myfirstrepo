#include <stdio.h>
#include <stdlib.h>

struct ItemDetail
{
    char *item[200];
    int quantity;
    float rate;
    float total;
};

float getTotal(struct ItemDetail detail[], int n)
{
    float total = 0;
    for (int i = 0; i < n; i++)
    {
        total = total + detail[i].total;
    }
    return total;
}

int getTotalQuantity(struct ItemDetail detail[], int n)
{
    int quant = 0;
    for (int i = 0; i < n; i++)
    {
        quant = quant + detail[i].quantity;
    }
    return quant;
}

int main()
{
    struct ItemDetail BillItems[50];
    int n, i;

    printf("enter number of items: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("enter item name: \n");
        scanf("%s", &BillItems[i].item);

        printf("enter quantity: \n");
        scanf("%d", &BillItems[i].quantity);

        printf("enter rate: \n");
        scanf("%f", &BillItems[i].rate);

        BillItems[i].total = BillItems[i].quantity * BillItems[i].rate;
    }

    printf("\n----------------------------------WELCOME----------------------------------\n");
    printf("\n------------------------------OM NAMO SHIVAY------------------------------\n");
    printf("\n---------------------------------DG KIRANA---------------------------------\n");
    printf("\n------------------------------DATE:24-10-22--------------------------------\n");

    printf("\nITEM NAME\t");
    printf("\tQUANTITY\t");
    printf("\tRATE\t");
    printf("\tTOTAL\t");
    printf("\n----------------------------------------------------------------------------");

    for (i = 0; i < n; i++)
    {
        printf("\n%s\t", BillItems[i].item);
        printf("\t\t%d\t", BillItems[i].quantity);
        printf("\t\t%f\t", BillItems[i].rate);
        printf("%f\t", BillItems[i].total);
        printf("\n");
    }

    float total = getTotal(BillItems, n);
    int quantityTotal = getTotalQuantity(BillItems, n);

    printf("\n---------------------------------------------------------------------------");
    printf("\n\nTOTAL \t\t\t%d\t\t\t\t\t%f", quantityTotal , total);

    printf("\n\n----------------------------------THANK YOU---------------------------------\n");
    printf("\n--------------------------------VISIT AGAIN---------------------------------\n");
    return 0;
}
