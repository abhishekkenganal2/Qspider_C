#include<stdio.h>
void main()
{
	int n1,n2,gcd,lcm,c=1,small;
	printf("Enter the 2 no's:");
	scanf("%d%d",&n1,&n2);
	small = (n1 < n2) ? n1 : n2;
	while(c <= small)
	{
		if(n1 % c == 0 && n2 % c == 0)
		{
			gcd = c;
		}
		c++;
	}
	lcm = (n1 * n2) / gcd;
	printf("GCD of %d and %d is %d.\nLCM of %d and %d is %d.\n",n1,n2,gcd,n1,n2,lcm);
}
