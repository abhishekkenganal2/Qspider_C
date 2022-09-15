#include <stdio.h>

int isprime(int n)
{
	int i;
	if (n == 0 || n == 1)
		return 0;
	if (n <= 3)
		return 1;
	if (n % 2 == 0 || n % 3 == 0)
		return 0;
	for (i = 5; i * i <= n; i = i + 6)
	{
		if (n % i == 0 || n % (i + 2) == 0)
			return 0;
	}
	return 1;
}

void main()
{
	int n1, n2, i;
	printf("Enter size:");
	scanf("%d%d", &n1, &n2);
	for (i = n1; i <= n2 - 6; i++)
	{
		if (isprime(i) && isprime(i + 6))
			printf("(%d , %d)\n", i, i + 6);
	}
}
