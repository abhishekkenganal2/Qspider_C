#include<stdio.h>
void main()
{
	int n,i,a[20],j,temp;
	printf("Enter N value:\n");
	scanf("%d",&n);
	printf("\nEnter the number:");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(a[j] > a[j+1])
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
	printf("After appling bubble sort the values are:");
	for(i=0;i<n;i++)
		printf("%d",a[i]);
	printf("\n");
	
}
