#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};

// printing the nodes..
void printList(struct Node *n)
{
    while (n != NULL)
    {
        printf("%d -> ", n->data);
        n = n->next;
    }
    printf("\n");
}

// inserting nodes at the front...
void push(struct Node **head_ref, int new_data)
{
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

// inserting node at the middle....
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
    prev_node->next = new_node;
}

// inserting node at the last...
void insert_end(struct Node **head_ref, int new_data)
{
    struct Node *last = (*head_ref);
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = NULL;
    if ((*head_ref) == NULL)
    {
        (*head_ref) = new_node;
    }
    while (last->next != NULL)
    {
        last = last->next;
    }
    last->next = new_node;
}

// deleting the nodes....
void del(struct Node **head_ref, int key)
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
    temp->next = NULL;
    free(temp);
}

void swap(struct Node **head_ref, int x, int y)
{
    if (x == y)
        return;

    // searching and tracking of nodes x and y..
    struct Node *prevX = NULL, *currX = *head_ref;
    struct Node *prevY = NULL, *currY = *head_ref;
    while (currX && currX->data != x)
    {
        prevX = currX;
        currX = currX->next;
    }
    while (currY && currY->data != y)
    {
        prevY = currY;
        currY = currY->next;
    }
    if (currX == NULL || currY == NULL)
        return;

    // if x and y are not head nodes...
    if (prevX != NULL)
        prevX->next = currY;
    else
        *head_ref = currY;
    if (prevY != NULL)
        prevY->next = currX;
    else
        *head_ref = currX;
    struct Node *temp = currY->next;
    currY->next = currX->next;
    currX->next = temp;
}

void rotate(struct Node **head_ref, int Key)
{
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    struct Node *prev = NULL;
    temp = (*head_ref);

    while (temp->next != NULL)
    {
        prev = temp;
        temp = temp->next;
    }
    while (temp->data != Key)
    {
        temp->next = (*head_ref);
        prev->next = NULL;
        (*head_ref) = temp;
    }

    temp->next = (*head_ref);
    prev->next = NULL;
    (*head_ref) = temp;
}

// main function...
int main()
{
    struct Node *first = (struct Node *)malloc(sizeof(struct Node));
    struct Node *sec = (struct Node *)malloc(sizeof(struct Node));
    struct Node *third = (struct Node *)malloc(sizeof(struct Node));
    first->data = 10;
    first->next = sec;

    sec->data = 20;
    sec->next = third;

    third->data = 30;
    third->next = NULL;

    printf("Node created:\n");
    printList(first);

    push(&first, 35);
    push(&first, 70);
    printList(first);

    insertAfter(sec, 40);
    printList(first);

    insert_end(&first, 70);
    printList(first);

    del(&first, 40);
    printList(first);

    swap(&first, 10, 70);
    printList(first);

    rotate(&first, 20);
    printList(first);
    return 0;
}