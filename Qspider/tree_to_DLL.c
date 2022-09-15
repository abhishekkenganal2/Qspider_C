#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};

struct node
{
    int data;
    struct node *left, *right;
};

typedef struct node *Nodeptr;

struct Node *newNode(int data)
{
    struct Node *newnode = (struct Node *)malloc(sizeof(struct Node));
    newnode->data = data;
    newnode->left = NULL;
    newnode->right = NULL;
    return newnode;
};

Nodeptr createNode(int data)
{
    Nodeptr temp = (Nodeptr)malloc(sizeof(struct node *));
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}

struct node *head, *last;

void convertDLL(struct Node *n)
{
    if (n == NULL)
        return;
    convertDLL(n->left);
    if (head == NULL)
    {
        head = createNode(n->data);
        last = head;
    }
    else
    {
        Nodeptr temp = createNode(n->data);
        last->right = temp;
        temp->left = last;
        last = last->right;
    }
    convertDLL(n->right);
}

void display()
{
    struct node *current = head;
    if (head == NULL)
    {
        printf("List is Empty\n");
        return;
    }
    printf("The DLL is: ");
    while (current != NULL)
    {
        printf("%d->", current->data);
        current = current->right;
    }
    printf("\n");
}

int main()
{
    struct Node *root = NULL;
    root = newNode(10);
    root->left = newNode(12);
    root->right = newNode(15);

    root->left->left = newNode(25);
    root->left->right = newNode(30);

    root->right->left = newNode(36);

    convertDLL(root);

    display();

    return 0;
}
