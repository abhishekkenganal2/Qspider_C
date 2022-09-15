#include <stdio.h>
#include <math.h>

int jumpSearch(int a[], int key, int n)
{
    int step = sqrt(n);
    int start = 0, i;
    while (a[step] < key && start < n)
    {
        start = step;
        step += sqrt(n);
        if (step > n - 1)
            step = n;
    }
    for (i = start; i < step; i++)
    {
        if (a[i] == key)
            return i;
    }
    return -1;
}

int main()
{
    int n, i, key, a[20];
    printf("Array size:");
    scanf("%d", &n);
    printf("\nArray Elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("\nKey element is:");
    scanf("%d", &key);
    int index = jumpSearch(a, key, n);
    printf("The number %d exists in index %d\n", key, index);
    return 0;
}