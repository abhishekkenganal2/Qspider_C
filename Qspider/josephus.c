#include <stdio.h>

int josephus(int n, int k)
{
    if (n == 1)
        return 1;
    else
        return (josephus(n - 1, k) + k - 1) % n + 1;
}

int main()
{
    int n, k;
    printf("Enter total peoples:");
    scanf("%d", &n);
    printf("Enter number of kills(skips):");
    scanf("%d", &k);
    printf("The last rewarded is %d.\n", josephus(n, k));
    return 0;
}