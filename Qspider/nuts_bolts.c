#include <stdio.h>

void printArr(char s[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%s", s[i]);
    }
    printf("\n\n");
}

void swap(char *p, char *q)
{
    char temp = *p;
    *p = *q;
    *q = temp;
}

void quickSort(char nuts, char bolts)
{
}

int main()
{
    char nuts = {'@', '$', '%', '^', '&'};
    char bolts = {'^', '&', '@', '%', '$'};

    quickSort(nuts, bolts, 0, 5);
    printf("Matched nuts and Bolts\n");

    printArr(nuts, 6);
    printArr(bolts, 6);

    return 0;
}
