#include<stdio.h>
void main()
{
int a;
printf("Enter the no's:");
scanf("%d",&a);
if(a % 2 == 0)
	printf("%d is even.\n",a);
else
	printf("%d is odd.\n",a);
}

