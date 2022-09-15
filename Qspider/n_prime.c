#include<stdio.h>
void main()
{
	int n,i,status,j,m;
	printf("Enter the no's:");
	scanf("%d",&m);
	for(i = 2;i <= m;i++)
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

//  Seive's Algorithm
