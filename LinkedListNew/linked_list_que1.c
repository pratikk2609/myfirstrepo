#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void printList(struct Node *head)
{
    struct Node *ptr;
    ptr = head;
    while (ptr != NULL)
    {
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }
}

struct Node *insertAtEnd(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;
    ptr->data = data;

    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    return head;
}

int searchNode(struct Node *head, int search)
{
    int index = 0;
    struct Node *ptr;
    ptr = head;
    while (ptr != NULL)
    {
        // printf("%d\n", ptr->data);
        if (ptr->data == search)
        {
            return index;
        }
        else
        {
            index++;
        }
        ptr = ptr->next;
    }
}
int sumofList(struct Node *head)
{
    int sum = 0;
    struct Node *ptr;
    ptr = head;
    while (ptr != NULL)
    {
        sum = sum + ptr->data;
        ptr = ptr->next;
    }
    return sum;
}

int main()
{
    int n, p1, temp, search;
    printf("enter number of elements:");
    scanf("%d", &n);
    // n = 10;

    printf("enter first element:");
    scanf("%d", &p1);
    // p1 = 1;

    struct Node *head;
    struct Node *second;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));

    head->data = p1;
    head->next = NULL;

    for (int i = 2; i <= n; i++)
    {
        // temp = i;
        scanf("%d", &temp);
        insertAtEnd(head, temp);
    }

    printList(head);

    printf("\nwhich num do you want to search:");
    // search = 5;
    scanf("%d", &search);

    int result = searchNode(head, search);
    printf("the element %d found at %d position", search, result);

    int sum = sumofList(head);
    printf("\nsum of list members =%d", sum);
}
