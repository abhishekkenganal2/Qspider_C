#include<stdio.h>
void main()
{
	int num,rev=0,rem,temp;
	printf("Enter the no's:");
	scanf("%d",&num);
	temp = num;
	while(num > 0)
	{
		rem = num % 10;
		printf("%d",rem);
		rev = rev * 10 + rem;
		num = num / 10;
	}
	printf("\n");
	//printf("The reverse number is %d\n",rev);
} 
