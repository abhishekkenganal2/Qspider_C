#include<stdio.h>
int fact(int n)
{
	int fact =0,i;
	for(i =2;i<n;i++)
		fact *= i;
	return fact;
}
void main()
{
	int n,r,result;
	printf("Enter the n and r:");
	scanf("%d%d",&n,&r);
	result = fact(n)/(fact(n-r)*fact(r));
	printf("%d",result);
	if(r == n || r == 0)
		return 1;
	else if(r == n-1 || r == 1)
		return n;
	else if(r > n)
} 
