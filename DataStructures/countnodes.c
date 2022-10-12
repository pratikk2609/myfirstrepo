#include <stdio.h>
#include <stdlib.h>

struct node
{

    int data;
    struct node *next;
};

struct node *head;

void insert(int data)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));

    temp->data = data;
    temp->next = head;

    head = temp;
}

void print()
{

    struct node *temp = head;

    int count = 0;
    while (temp != NULL)
    {

        temp = temp->next;
        count++;
    }

    printf("Total no. of nodes is %d", count);
}

void main()
{

    head = NULL;

    insert(2);
    insert(4);

    print();
}