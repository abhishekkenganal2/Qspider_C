#include <stdio.h>

int main()
{
    int a = 9, b = 4, c = 6;
    for (int i = 5; i <= 7; i++)
    {
        a = 4 + c;
        if ((6 - c + b) > (b + a))
            b = 3 + a;
        else
            continue;
        b = (2 + 2) + c;
    }
    printf("%d\n", a + b);
}
