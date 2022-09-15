#include <stdio.h>

// swap function...
void swap(int *p, int *q)
{
    int temp = *p;
    *p = *q;
    *q = temp;
}

// parition part....
int partition(int a[], int low, int high)
{
    int i, j, pivot; // char pivot

    pivot = a[high]; // int i=low
    i = low - 1;     // to keep track of correct postion of pivot so far...

    for (j = low; j <= high; j++) // j<high
    {
        if (a[j] < pivot)
        {
            i++;                // swap(&a[i],a[j]);
            swap(&a[j], &a[i]); // i++;
        }
        /*
        else if(str[])*/
    }
    swap(&a[i + 1], &a[high]);
    return i + 1;
}

// main quick sort...
void quicksort(int a[], int low, int high)
{
    int pi;

    if (low < high)
    {
        pi = partition(a, low, high);

        quicksort(a, low, pi - 1);
        quicksort(a, pi + 1, high);
    }
}

// printing code....
void printArr(int a[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
}

// driver code....
int main()
{
    int a[] = {10, 20, 30, 45, 5, 25};
    int n = sizeof(a) / sizeof(a[0]);

    printf("Before sorting\n");
    printArr(a, n);
    printf("\n");

    quicksort(a, 0, n - 1);

    printf("after sorting\n");
    printArr(a, n);
    printf("\n");
    return 0;
}