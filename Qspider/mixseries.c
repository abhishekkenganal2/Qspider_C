#include <stdio.h>
#include <stdlib.h>
void fib(int n)
{
    int f1 = 0,f2 = 1,f3,i;
    if(n==1 || n==2)
        printf("%d", 1);
    else
    {
    for(i = 2;i <= n; i++)
    {
        f3 = f1+f2;
        f1 = f2;
        f2 = f3;
    }
    printf("%d", f3);
    }
}
void prime(int num)
{
    int flag, count = 0, i, j;
    for(i=2; i<=10000; i++)
    {
        flag = 0;
        for(j = 2; j<= i/2; j++)
            if(i%j == 0)
            {
                flag = 1;
                break;
            }
        if(!flag)
            if(++count == num)
            {
                printf("%d", i);
                break;
            }
    }
}
int main()
{
    int n;
    printf("Enter position: ");
    scanf("%d", &n);
    if(n%2 == 0)
        prime(n/2);
    else
        fib(n/2 + 1);
    return 0;
}		
