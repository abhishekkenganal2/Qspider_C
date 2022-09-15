#include<stdio.h>
int fibonacci(int n){
	if(n == 0)
		return 0;
	else if(n == 1)
		return 1;
	else
		return fibonacci(n-1) + fibonacci(n-2);
}

void main()
{
	int n,i;
	printf("Enter the value:");
	scanf("%d",&n);
	for(i=0;fibonacci(i)<=n;i++)
		printf("%d\t",fibonacci(i));
	printf("\n");
}
