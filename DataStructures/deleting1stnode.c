#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
}*head, *ptr;

struct node* del_first(struct node *head)
{
    if (head == NULL)
        printf("list is empty");
    else
    {
        struct node *temp = head;
        head = head->link;
        free(temp);
    }
    return head;
}

int main()
{
    head = del_first;
    ptr = head;
    while (ptr != NULL)
    {
        printf("%d", ptr->data);
        ptr=ptr->link;
    }
    return 0;
}