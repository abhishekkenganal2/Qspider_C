#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
struct Queue
{
    int front, rear, capacity, size, *arr;
};

struct Queue *initialise(int c)
{
    struct Queue *temp = (struct Queue *)malloc(sizeof(struct Queue));
    temp->capacity = c;
    temp->size = 0;
    temp->front = 0;
    temp->rear = temp->capacity - 1;
    temp->arr = (int *)malloc(c * sizeof(int));
};

void enQueue(struct Queue *q, int data)
{
    if (q->size == q->capacity)
    {
        printf("Queue is full\n");
        return;
    }
    q->rear = (q->rear + 1) % q->capacity;
    q->arr[q->rear] = data;
    q->size = q->size + 1;
}

int deQueue(struct Queue *q)
{
    int data;
    if (q->size == 0)
    {
        printf("Queue is Empty\n");
        return INT_MIN;
    }
    data = q->arr[q->front];
    q->front = (q->front + 1) % q->capacity;
    q->size = q->size - 1;
    return (data);
}

int getFront(struct Queue *q)
{
    return q->arr[q->front];
}

int getRear(struct Queue *q)
{
    return q->arr[q->rear];
}

int main()
{
    struct Queue *queue = initialise(5);
    enQueue(queue, 10);
    enQueue(queue, 20);
    enQueue(queue, 30);
    printf("front = %d and rear = %d\n", getFront(queue), getRear(queue));
    printf("Dequeueed element: %d\n ", deQueue(queue));
    printf("front = %d and rear = %d\n", getFront(queue), getRear(queue));
}