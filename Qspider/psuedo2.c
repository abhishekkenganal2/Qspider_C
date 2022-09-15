#include<stdio.h>
void main()
{
	int a=9,b=6,c=15;
	for(c=15;c<=17;c++)
	{
		a=a+c;
		b=b+c;
		b=a%2;
		a=b%2;
	}
	int m=a+b;
	printf("%d\n",m);
}
