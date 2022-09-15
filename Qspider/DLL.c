#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
};
void printList(struct Node *n)
{
    while (n != NULL)
    {
        printf("%d -> ", n->data);
        n = n->next;
    }
    printf("\n");
}

// inserting at front...
void push(struct Node **head_ref, int new_data)
{
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = (*head_ref);
    new_node->prev = NULL;
    if ((*head_ref) != NULL)
        (*head_ref)->prev = new_node;
    (*head_ref) = new_node;
}

void insertAfter(struct Node *prev_node, int new_data)
{
    if (prev_node == NULL)
    {
        printf("Node can't be inserted");
        return;
    }
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = prev_node->next;
    new_node->prev = prev_node;
    prev_node->next->prev = new_node;
    prev_node->next = new_node;
}

void insert_end(struct Node **head_ref, int new_data)
{
    struct Node *temp = (*head_ref);
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = NULL;
    if (temp == NULL)
    {
        temp = new_node;
    }
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    new_node->prev = temp;
    temp->next = new_node;
}

void pop(struct Node **head_ref, int key)
{
    struct Node *temp = *head_ref, *prev;
    if (temp != NULL && temp->data == key)
    {
        temp = temp->next;
        return;
    }
    while (temp->data != key)
    {
        prev = temp;
        temp = temp->next;
    }
    prev->next = temp->next;
    prev->next->prev = prev;
    temp->next = NULL;
    free(temp);
}

int main()
{
    struct Node *first = (struct Node *)malloc(sizeof(struct Node));
    struct Node *sec = (struct Node *)malloc(sizeof(struct Node));
    struct Node *third = (struct Node *)malloc(sizeof(struct Node));

    first->prev = NULL;
    first->data = 10;
    first->next = sec;

    sec->prev = first;
    sec->data = 20;
    sec->next = third;

    third->prev = sec;
    third->data = 30;
    third->next = NULL;

    printf("Node created:\n");
    printList(first);

    printf("After pushing:\n");
    push(&first, 40);
    printList(first);

    printf("After inserting the elements:\n");
    insertAfter(sec, 15);
    printList(first);

    printf("After inserting at end:\n");
    insert_end(&first, 50);
    printList(first);

    printf("After deleting\n");
    pop(&first, 15);
    printList(first);
}