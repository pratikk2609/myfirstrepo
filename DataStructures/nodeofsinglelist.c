//node of single linked list
//node is collection of data and link
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};

struct node* insertNode(int num)
{
    struct node *temp = NULL;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = num;
    temp->link = NULL;
    return temp;
}

int main()
{
    struct node *head = NULL;
    head = (struct node *)malloc(sizeof(struct node));

    head = insertNode(115);
    head->link = insertNode(200);

    printf("%d\n", head->data);
    printf("%s", head->link);

    printf("%d\n", head->link->data);
    printf("%s", head->link->link);

    return 0;
}