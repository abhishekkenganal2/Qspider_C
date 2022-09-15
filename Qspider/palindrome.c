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
		rev = rev * 10 + rem;
		num = num / 10;
	}
	if(temp == rev)
		printf("The no's is palindrome\n");
	else
		printf("The no's is not palindrome\n");
	 
} 
