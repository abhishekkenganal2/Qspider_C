#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#define MAX 5;

struct Node
{
    int data;
    struct Node *next;
} * top;

int isempty()
{
    if (top == NULL)
        return 1;
    else
        return 0;
}

void push(int d)
{
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    if (temp == NULL)
    {
        printf("Stack Overflow");
        return;
    }
    temp->data = d;
    temp->next = top;
    top = temp;
}

int peek()
{
    if (isempty())
    {
        printf("stack Empty\n");
        return INT_MIN;
    }
    return top->data;
}

int pop()
{
    struct Node *temp;
    int ele;
    if (isempty())
    {
        printf("Stack Empty\n");
        return INT_MIN;
    }
    else
    {
        temp = top;
        top = top->next;
        ele = temp->data;
        free(temp);
    }
    return ele;
}

int display()
{
    struct Node *temp;
    if (isempty())
    {
        printf("Stack Empty\n");
        return INT_MIN;
    }
    else
    {
        temp = top;
        while (temp != NULL)
        {
            printf("%d\t", temp->data);
            temp = temp->next;
        }
    }
}

int main()
{
    push(10);
    push(20);
    push(30);
    printf("Current stack\n");
    display();
    printf("\nPopped element: %d\n", pop());
    printf("Current Stack: %d\n", peek());
}