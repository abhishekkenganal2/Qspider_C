#include<stdio.h>

void prime(int n)
{
	int p[n+1],i,j;
	for(i=0;i<=n;i++)
		p[i] = 1;
	for(i = 2;i * i <= n;i++)
	{
		if(p[i] == 1)
		{	
			for(j = i * i;j <= n;j = j+i)	
				p[j] = 0;
		}
	}
	for(i=2;i<n;i++)
	{
		if(p[i] == 1)	
			printf("%d ",i);
	}
}

void main()
{
	int n;
	printf("Enter size:");
	scanf("%d",&n);
	prime(n);
}
