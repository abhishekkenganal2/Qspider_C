#include<stdio.h>
void main()
{
	int m,n,i,j,status;
	printf("Enter start and end point:");
	scanf("%d%d",&m,&n); 
	for(i = m;i <= n;i++)
	{
		status = 0;
		for(j = 2;j * j <= i;j++)
		{
			if(i % j == 0)
			{
				status = 1;
				break;
			}
			
		}
		if(status == 0)
				printf("%d\t",i);
		
	}
}
