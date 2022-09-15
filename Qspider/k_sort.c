#include<stdio.h>
void main()
{
	int a[50],i,j,n,k,temp,max;
	printf("Enter the size of array:");
	scanf("%d",&n);
	printf("Enter array elements:");
	for(i = 0;i < n;i++)
			scanf("%d",&a[i]);
	printf("Enter k value:");
	scanf("%d",&k);
	for(i = 0;i < k;i++)
	{
		max = i;
		for(j = i + 1;j < k;j++)
		{
			if(a[max] > a[j]) 
			{
				temp = a[max];
				a[max] = a[j];
				a[j] = temp;
			}
		}
	}
	for(i = k;i < n;i++)
	{
		max = i;
		for(j = i + 1;j < n;j++)
		{
			if(a[max] < a[j]) 
			{
				temp = a[max];
				a[max] = a[j];
				a[j] = temp;
			}
		}
	}
	printf("Sorted order:");
	for(i= 0;i < n;i++)
		printf("\t%d",a[i]);
	printf("\n");
}
