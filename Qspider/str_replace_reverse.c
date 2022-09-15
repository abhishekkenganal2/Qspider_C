#include <stdio.h>
#include <string.h>
void main()
{
    int i, j, count = 1, temp, l, l1;
    char a[100], b[100], c[100];

    printf("Enter the string: ");
    scanf("%[^\n]s", a);
    l = strlen(a);
    for (i = 0; i < l; i++)
    {
        if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u' ||
            a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O' || a[i] == 'U')
        {
            b[i] += count++ + 48;
        }
        else
        {
            b[i] = a[i];
        }
    }
    l1 = strlen(b);
    printf("\nstring is: %s\n", b);
    for (i = 0; i < (l1 / 2); i++)
    {
        temp = b[i];
        b[i] = b[l1 - 1 - i];
        b[l1 - 1 - i] = temp;
    }
    printf("\nreversed string is: %s\n", b);
}