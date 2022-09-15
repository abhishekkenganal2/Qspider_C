#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
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

void inOrder(struct Node *n)
{
    if (n == NULL)
        return;

    inOrder(n->left);
    printf("%d\t", n->data);
    inOrder(n->right);
}

void postOrder(struct Node *n)
{
    if (n == NULL)
        return;

    postOrder(n->left);
    postOrder(n->right);
    printf("%d\t", n->data);
}

int height(struct Node *r)
{
    int lheight, rheight;
    if (r == NULL)
        return INT_MIN;
    else
    {
        lheight = height(r->left);
        rheight = height(r->right);
        if (lheight > rheight)
            return (lheight);
        else
            return (rheight);
    }
}

void currentLevel(struct Node *root, int i)
{
    if (root == NULL)
        return;
    if (i == 0)
        printf("%d", root->data);
    else if (i > 0)
    {
        currentLevel(root->left, i - 1);
        currentLevel(root->right, i - 1);
    }
}

void levelOrder(struct Node *root)
{
    int h = height(root);
    for (int i = 0; i < h; i++)
        currentLevel(root, i);
}

int main()
{
    struct Node *root = newNode(10);

    root->left = newNode(12);
    root->right = newNode(15);

    root->left->left = newNode(25);
    root->left->right = newNode(30);

    root->right->left = newNode(36);
    // root->right->right = newNode(7);

    preOrder(root);
    printf("\n");
    inOrder(root);
    printf("\n");
    postOrder(root);
    printf("\n");
    levelOrder(root);
    printf("\n");
}