#include <stdio.h>
#define N 3

void rotate(int a[][N])
{
    int i, j;
    for (i = 0; i < N / 2; i++)
    {
        for (j = i; j < N - i - 1; j++)
        {
            int temp = a[i][j];
            a[i][j] = a[j][N - 1 - i];
            a[N - 1 - i][N - 1 - j] = a[N - 1 - j][i];
            a[N - 1 - j][i] = temp;
        }
    }
}

void display(int a[N][N])
{
    int i, j;
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
            printf("%2d", a[i][j]);
        printf("\n");
    }
    printf("\n");
}

int main()
{
    int a[N][N] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    rotate(a[N][N]);
    display(a[N][N]);
    return 0;
}