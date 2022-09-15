#include <stdio.h>

void main()
{
	int a[10], day, light, i, j, n;
	printf("Enter no's of days:");
	scanf("%d", &day);
	printf("Enter street lights status:");
	for (i = 0; i < 8; i++)
	{
		scanf("%d", &a[i]);
	}
	while (day--)
	{
		for (i = 0; i < 8; i++)
		{
			if (i == 0)
			{
				if (a[i + 1] == 0)
					a[i] = 0;
				else
					a[i] = 1;
			}
			else if (i == 7)
			{
				if (a[i - 1] == 0)
					a[i] = 0;
				else
					a[i] = 1;
			}
			else if (a[i - 1] == 0 && a[i + 1] == 0 || a[i - 1] == 1 && a[i + 1] == 1)
				a[i] = 0;
			else
				a[i] = 1;
			/*if(i == -1 || i == n)
				i = 0;
			for(j = 0;j < n;j++)
			{
				if(a[j-1] == a[j+1])
					a[j] = 0;
				else
					a[j] = 1;
			}*/
		}
	}
	printf("The status of street light after %d days is:", day);
	for (i = 7; i > 0; i--)
		printf("%d\t\n", a[i]);
}
