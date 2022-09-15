#include <stdio.h>
int xor (int x, int y) {
    return (x | y) - (x & y);
} int main()
{
    int a, b;
    printf("Enter a and b values :");
    scanf("%d %d", &a, &b);
    printf("\nThe XOR of %d and %d without using XOR operator is %d.\n", a, b, xor(a, b));
}