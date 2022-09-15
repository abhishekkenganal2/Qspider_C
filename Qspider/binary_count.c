#include <stdio.h>
int binary(int n)
{

    if (n > 1)
        binary(n / 2);

    printf("%d", n % 2);
}

int consecutive(int n)
{
    int count = 0;

    while (n != 0)
    {
        n = n & n << 1;
        count++;
    }
    printf("%d\n", count);
}

int main()
{
    int n, count = 0;
    printf("Enter the number:");
    scanf("%d", &n);
    printf("\nBinary of %d is = ", n);
    binary(n);
    printf("\n\nconsecutive 1's in %d = ", n);
    consecutive(n);
}