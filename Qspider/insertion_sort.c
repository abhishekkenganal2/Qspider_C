#include<stdio.h>
void main()
{
	int n,i,j,t,a[100],key;
	printf("Enter the size:");
	scanf("%d",&n);
	printf("Enter the elements:");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("The before sorting :");
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	for(i=1;i<n;i++)
	{
		key = a[i];
		j = i - 1;
		while(j >= 0 && a[j] > key)
		{
			a[j+1] = a[j];
			j--;
		}
		a[j+1] = key;
	}
	printf("\nThe after insertion sort :");
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("\n");
	
}
