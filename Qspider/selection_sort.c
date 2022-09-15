/* 2 types of sorted array.*/
#include<stdio.h>
void main()
{
	int a[50],n,i,j,min,temp;
	printf("Enter the array size:");
	scanf("%d",&n);
	printf("Enter array elements:");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n-1;i++)
	{
		min = i;
		for(j=i+1;j<n;j++)
		{
			if(a[min] > a[j])
				min = j;
		}
		temp = a[min];
		a[min] = a[i];
		a[i] = temp;
		//stable selection sort:
		/*key = a[min];
		while(min > i)
		{
			a[min] = a[min - 1];
			min--;
		}
		a[i] = key;*/
	}
	printf("The sorted array is:");
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("\n");
}
		

