#include<stdio.h>
void main()
{
int n1,n2;
printf("Enter 1st no's:");
scanf("%d",&n1);
printf("Enter 2nd no's:");
scanf("%d",&n2);
if(n1 > n2)
	printf("%d is greater then %d\n",n1,n2);
else
	printf("%d is greater then %d\n",n2,n1);
}

