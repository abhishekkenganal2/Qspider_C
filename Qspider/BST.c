#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};

struct Node *newNode(int ele)
{
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    temp->data = ele;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
};
void preOrder(struct Node *n)
{
    if (n == NULL)
        return;
    printf("%d\t", n->data);
    preOrder(n->left);
    preOrder(n->right);
}

struct Node *insert(struct Node *r, int ele)
{
    if (r == NULL)
        return newNode(ele);
    if (ele < r->data)
        r->left = insert(r->left, ele);
    else
        r->right = insert(r->right, ele);
    return r;
}

int main()
{
    struct Node *root = newNode(1);

    root->left = newNode(2);
    root->right = newNode(3);

    root->left->left = newNode(4);
    root->left->right = newNode(5);

    root->right->left = newNode(6);
    root->right->right = newNode(7);

    preOrder(root);

    insert(root, 8);
    printf("\n");
    preOrder(root);
    printf("\n");
}
