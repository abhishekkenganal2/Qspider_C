#include <stdio.h>
#include <stdlib.h>

void main()
{
    int a[20], n, temp, k, i, j, b[20], x = 0;
    printf("enter the array size\n");
    scanf("%d", &n);
    printf("enter the array elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("enter the kth element:\n");
    scanf("%d", &k);

    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    printf("the sorting elements are :");
    for (i = 0; i < n; i++)
    {
        printf("%d", a[i]);
    }

    printf("\nthe kth largest elements are :");
    for (j = k; j < n; j++)
    {
        printf("\n%d\t", a[j]);
    }
    printf("\n");
}