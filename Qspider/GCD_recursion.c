#include<stdio.h>
int GCD(int a,int b)
{
	if(a % b == 0)
		return b;
	else
		GCD( b,a % b);	
	/*c = a % b;
	if( c != 0){
		temp = c;
		c = b;
		b = temp;
	}
	else
	{
		return b;
	}*/
		
}
void main()
{
	int n1,n2,gcd;
	printf("Enter two no's:");
	scanf("%d%d",&n1,&n2);
	gcd = GCD(n1,n2);
	printf("The GCD of %d and %d is %d\n",n1,n2,gcd);
}
