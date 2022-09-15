#include <stdio.h>
#include <stdlib.h>

struct minHeap
{
    int *a;
    int capacity;
    int size;
};

struct minHeap *init(int c)
{
    struct minHeap *n = (struct minHeap *)malloc(struct minHeap));
    n->siize = 0;
    n->capacity = c;
    n->a = (int *)malloc(n->capacity * sizeof(int));
}

int parent(int i)
{
    return ((i - 1) / 2);
}

int left(int i)
{
    return (2 * i + 1);
}

int right(int i)
{
    return (2 * i + 2);
}

int getMin(struct minHeap *h, int k)
{
    if (h->size == h->capacity)
    {
        printf("Overflow of heap.\n");
        return;
    }
    h->size++;
    i = h->size - 1;
    h->a[i] = k;
    while (i != 0 && h->a[parent(i)] > h->a[i])
    {
        swap(&h->a[i], &h->a[parent(i)]);
        i = parent(i);
    }
}

void decrease(struct minHeap *h, int i, int new_value)
{
    h->a[i] = new_value;
    while (i != 0 && h->a[parent(i)] > h->a[i])
    {
        swap(&h->a[i], &h->a[parent(i)]);
        i = parent(i);
    }
}

int extractMin(struct minHeap *h)
{
    int root;
    if (h->size <= 0)
        return INT_MIN;
    if (h->size == 1)
    {
        h->size--;
        return h->a[0];
    }
    root = h->a[0];
    h->a[0] = h->a[size - 1];
    size--;
    minHeap(h, 0);
    return root;
}

void delete (struct minHeap *h.int i)
{
    decrease(h, i, INT_MIN);
    extraxt(h);