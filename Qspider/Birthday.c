#include <stdio.h>
int main()
{
    int i, a[100], n, high, count = 0;
    printf("Enter the number of candle:");
    scanf("%ld", &n);
    printf("\nEnter the heights of candle:");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    high = a[0];
    for (i = 0; i < n; i++)
    {
        if (a[i] == high)
            count++;
        else if (a[i] > high)
        {
            high = a[i];
            count = 1;
        }
    }
    printf("Total candles blown are: %d\n", count);
    return;
}