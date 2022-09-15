#include <stdio.h>
#include <stdlib.h>
int rev_word(char *q)
{

	int z = *q == NULL ? 0 : *q == ' ' ? 0
						 : *q == '\0'  ? 0
									   : rev_word(q + 1) + 1;
	if (z)
		putchar(*q);
	return z;
}

void main()
{
	char *p = (char *)malloc(100 * sizeof(char));
	int a;
	printf("Enter the string:");
	fgets(p);
	while (*p && p)
	{
		a = rev_word(p);
		p = p + a;
		if (*p == ' ')
		{
			putchar(' ');
			p++;
		}
	}
	printf("\n");
}
