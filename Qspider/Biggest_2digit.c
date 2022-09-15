#include <stdio.h>
void main()
{
	int n, lrg = 0;
	printf("Enter the no's:");
	scanf("%d", &n);
	while (n > 0)
	{
		if ((n % 100) > lrg)
			lrg = n % 100;
		n = n / 10;
	}
	printf("%d", lrg);
}
