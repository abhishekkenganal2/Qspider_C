#include<stdio.h>
void main()
{
	int a[50],i,j,k,n,status,status2;
	printf("Enter array size:");
	scanf("%d",&n);
	printf("Enter array elements:");
	for(i = 0;i < n;i++)
		scanf("%d",&a[i]);
	printf("The unique element is:"); 
	for(i=0;i<n;i++)
	{
		status=0;
		for(j=0;j<i;j++)
		{
			if(a[i] == a[j])
			{
				status =1;
				break;
			}
		}
		if(status == 0)
		{
			status2 =0;
			for(k = i+1;k < n;k++)
			{
				if(a[i] == a[k])
				{
					status2 =1;
					break;
				}
			}
			if(status2 == 0)
			{
				printf("%d\t",a[i]);
			}
		}
	} 
	printf("\n");
}	
	/*for(i = 1;i <n;i++)
	{
		status = 1;
		for(j=i-1;j>=0;j--)
		{
			if(a[i] == a[j])
			{
				continue;
			}
			else
			{
				status = 0;
				break;
			}
		}
		if(status == 0)
		{	
				printf("%d\t",a[i]);	
		}
	}
	printf("\n");*/

