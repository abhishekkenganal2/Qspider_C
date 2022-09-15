#include<stdio.h>
#include<string.h>
void main()
{
	int n,i,j;
	char a[20],b[20];
	printf("Enter the 1st string:");
	scanf("%s",a);
	n=strlen(a);
	for(i=n-1,j=0;i>=0;i--,j++)
		b[j] = a[i];
	b[j] = '\0';
	printf("the reverse string is %s\n",b);
}
	
