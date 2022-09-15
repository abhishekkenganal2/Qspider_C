#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
struct Node
{
    int data;
    struct Node *next;
};

struct Queue
{
    struct Node *front;
    struct Node *rear;
};

void enQueue(struct Queue *q, int data)
{
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    temp->data = data;
    temp->next = NULL;

    if (q->front == NULL)
    {
        q->front = temp;
        q->rear = temp;
        return;
    }
    q->rear->next = temp;
    q->rear = temp;
}

int deQueue(struct Queue *q)
{
    if (q->front == NULL)
        return INT_MIN;

    struct Node *temp;
    temp = q->front;
    q->front = q->front->next;

    int data = temp->data;
    free(temp);
    return data;
}

int getFront(struct Queue *q)
{
    return q->front->data;
}

int getRear(struct Queue *q)
{
    return q->rear->data;
}
int main()
{
    struct Queue *q = (struct Queue *)malloc(sizeof(struct Queue));
    q->front = NULL;
    q->rear = NULL;
    enQueue(q, 10);
    enQueue(q, 20);
    enQueue(q, 30);
    enQueue(q, 40);
    printf("front = %d and rear = %d\n", getFront(q), getRear(q));
    printf("Deleted Queue = %d\n", deQueue(q));
    printf("front = %d and rear = %d\n", getFront(q), getRear(q));
}