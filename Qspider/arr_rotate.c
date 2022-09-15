#include <stdio.h>
void main()
{
	int a[50], i, j, n, k, temp;
	printf("Enter array size:");
	scanf("%d", &n);
	printf("Enter array elements:");
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
	printf("Enter value of K:");
	scanf("%d", &k);
	for (i = 0; i < k; i++)
	{
		temp = a[0];
		for (j = 0; j < n - 1; j++)
			a[j] = a[j + 1];
		a[j] = temp;
	}
	printf("The array elements are:");
	for (i = 0; i < n; i++)
		printf("%d ", a[i]);
	printf("\n");
}
