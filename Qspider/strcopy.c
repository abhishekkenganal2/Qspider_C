#include<stdio.h>
void main()
{
	char a[20],b[20],i;
	printf("Enter the string:");
	scanf("%s",a);
	for(i=0;a[i]!='\0';i++)
	{
		b[i] = a[i];
	}
	b[i] = '\0';
	printf("The copied string is %s.\n",b);
}
