#include<stdio.h>
#include<string.h>
void main()
{
	char a[100],b[100],n,n1,i,j,temp;
	printf("Enter 2 strings:");
	scanf("%s%s",a,b);
	/*if(len(a) == len(b))
		printf("Given strings are Anagram.\n");
	else if(a == b)
		printf("Given strings are Anagram.\n");
	else
		printf("Given strings are not Anagram.\n");
	*/
	n = strlen(a);
	n1 = strlen(b);
	if(n != n1){
		printf("The strings are not Anagram.\n");
		//retrun 0;
	}
	for (i=0;i<n-1;i++)
	{
		for(j =i+1;j < n;j++)
		{
			if(a[i] > a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
			if(b[i] > b[j])
			{
				temp = b[i];
				b[i] = b[j];
				b[j] = temp;
			}
		}
	}
	for(i =0;i<n;i++)
	{
		if(a[i] != b[i])
		{
			printf("Strings are not anagram.\n");
			break;
			//retrun 0;
		}
	}
	if(a[i] == b[i])	
		printf("Strings are anagram.\n");
	//retrun 0;		
}		
