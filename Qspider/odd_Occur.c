#include <stdio.h>
int main()
{
    int n, i, a[20], sum = 0;
    printf("Enter number:");
    scanf("%d", &n);
    printf("Enter array elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < n; i++)
        sum = sum ^ a[i];
    printf("Odd occurence are: %d\n", sum);
}