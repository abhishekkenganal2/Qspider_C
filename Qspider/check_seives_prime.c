#include<stdio.h>

int isprime(int n)
{
	int i;
	if(n == 0 || n == 1)
		return 0;
	if(n <= 3)
		return 1;
	for(i=5;i*i <= n;i = i+6)
	{
		if(n%i == 0 || n%(i+2) == 0)
			return 0;
	}
	return 1;
}

void main()
{
	int n;
	printf("Enter size:");
	scanf("%d",&n);
	if(isprime(n))
		printf("Prime\n");
	else
		printf("Not a Prime.\n");		
}
