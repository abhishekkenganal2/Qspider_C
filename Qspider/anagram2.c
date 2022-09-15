#include<stdio.h>
#include<string.h>
int main()
{
	char a[100],b[100],n,n1,i,j,temp;
	printf("Enter 2 strings:");
	scanf("%s%s",a,b);
	n = strlen(a);
	n1 = strlen(b);
	if(n != n1)
		printf("The strings are not anagram.\n");
}
