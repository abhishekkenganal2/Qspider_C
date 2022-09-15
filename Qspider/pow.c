#include<stdio.h>
int AN(int A,int n)
{
	if(n == 0)
		return 1;
	return A*AN(A,n-1);
}
int main()
{
	int b,p;
	printf("Enter base and power of:");
	scanf("%d%d",&b,&p);
	printf("The %d ^ %d = %d.\n",b,p,AN(b,p));
	return 0;
}
