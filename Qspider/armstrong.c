#include<stdio.h>
void main()
{
	int n,r,sum = 0,i;
	for(i = 100;i <= 999;i++)
	{
		n=i;
		while(n > 0)
		{
			r = n % 10;
			sum += r*r*r;
			n = n / 10;
		}
		if(i == sum)
		{
			printf("%d is armstrong no's.\n",sum);
			//break;
		}
	sum =0;
	}
}	  
