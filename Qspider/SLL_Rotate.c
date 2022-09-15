#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};

void rotate(struct Node **head_ref, int Key)
{
    /*struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    struct Node *prev;
    while (temp != NULL)
    {
        if (temp->data != Key)
        {
            temp->next = (*head_ref);
            prev->next = NULL;
            (*head_ref) = temp;
        }
        temp->next = (*head_ref);
        prev->next = NULL;
        (*head_ref) = temp;
    }*/
    if (Key == 0)
        return;
    struct Node *temp = *head_ref;
    int count = 1;
    while (count < Key && temp != NULL)
    {
        temp = temp->next;
        count++;
    }
    if (temp == NULL)
        return;
    struct Node *nth = temp;
    while (temp->next != NULL)
        temp = temp->next;
    temp->next = *head_ref;
    *head_ref = nth->next;
    nth->next = NULL;
}

void push(struct Node **head_ref, int new_data)
{
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

void printList(struct Node *n)
{
    while (n != NULL)
    {
        printf("%d -> ", n->data);
        n = n->next;
    }
    printf("\n");
}

int main()
{
    struct Node *head = (struct Node *)malloc(sizeof(struct Node));
    for (int i = 60; i > 0; i -= 10)
        push(&head, i);
    printList(head);
    rotate(&head, 3);
    printList(head);
    return 0;
}
