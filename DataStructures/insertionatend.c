#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};

int main()
{
    struct node *head = malloc(sizeof(struct node));
    head->data = 45;
    head->link = NULL;

    struct node *ptr = head;
    ptr = add_at_end(ptr, 98);
    ptr = add_at_end(ptr, 3);
    ptr = add_at_end(ptr, 67);

    ptr = head;
    while (ptr != NULL)
    {
        printf("%d", ptr->data);
        ptr = ptr->link;
    }
    return 0;
}