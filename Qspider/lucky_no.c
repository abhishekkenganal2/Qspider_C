#include<stdio.h>
void main()
{
	int num,res;
	printf("Enter the no's:");
	scanf("%d",&num);
	res = num % 9 == 0 ? 9 : num % 9;
	printf("%d\n",res);
}
