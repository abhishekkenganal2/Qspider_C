#include<stdio.h>
void main()
{
	char a[20],i,b[20],flag =0;
	printf("Enter the 1st string:");
	scanf("%s",a);
	printf("Enter the 2nd string:");
	scanf("%s",b);
	for(i=0;a[i]!=0 && b[i]!=0;i++)
	{
		if(a[i] != b[i])
		{
			flag =0;
			break;
		}
		else
		{
		flag =1;
		}
	}
	if(flag==1)
		printf("Both strings are same\n");
	else
		printf("Both strings are not equal\n");
}
