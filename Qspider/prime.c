#include<stdio.h>
int main()
{
	int i,c = 0,min,max,temp;
	printf("Enter min and max no's:");
	scanf("%d%d",&min,&max);
	printf("The Prime no's b/w %d and %d are:",min,max);
	for(min = min;min<max;++min)
	{
		c=0;
		if(min<=1)
		{
			min++;
			continue;
		}
		for(i=2;i<=min/2;i++)
		{
			if(min%i==0)
			{
				c=1;
				break;
			}
		}
		if(c==0)
			printf(" %d\n",temp);
		
	}
	return 0;
	
}
