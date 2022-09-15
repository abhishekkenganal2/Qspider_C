#include <stdio.h>
void main()
{
	int a[50], i, j, k, sum, n, count = 0;
	printf("Enter the size:");
	scanf("%d", &n);
	printf("Enter the elements:");
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
	printf("Enter total sum:");
	scanf("%d", &sum);
	for (i = 0; i < n; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			for (k = j + 1; k < n; k++)
			{
				if (a[i] + a[j] + a[k] == sum)
				{
					printf("The triplets are %d %d %d\n", a[i], a[j], a[k]);
					count++;
				}
			}
		}
	}
	printf("total triplets found are %d\n", count);
}
