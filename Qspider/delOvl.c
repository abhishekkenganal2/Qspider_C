#include<stdio.h>
#include<string.h>
void main()
{
	char a[20],b[20],i,j;
	printf("Enter the string:");
	scanf("%s",a);
	j=0;
	for(i =0;a[i]!='\0';i++)
	{
		if(a[i] == 'a' || a[i] == 'A' || a[i] == 'e' || a[i] == 'E' || a[i] == 'i' ||a[i] == 'I' || a[i] == 'o' || a[i] == 'O' || a[i] == 'u' || a[i] == 'U')
		{
		}
		else
		{
			b[j] = a[i];
			j++;
		}
	}
	b[j] !='\0';
	for(i =0;b[i]!='\0';i++)
		a[i] = b[i];
	a[i] = '\0';
	printf("The output string is %s\n",a);		
}
