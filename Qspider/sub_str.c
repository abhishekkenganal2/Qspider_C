#include<stdio.h>
void main()
{
	int i=0,j=0,status=0,c;
	char str1[20],str2[20];
	printf("Enter the main string:");
	gets(str1);
	printf("Enter the sub string:");
	gets(str2);
	for(i = 0;str1[i]  
	{	
		if(str1[i] == str2[j])
		{
			i++;
			j++;
		}
		else if(str2[j] == '\0')
		{
			status =1;
			j=0;
		}
		else
			i++;			
	}
	if(status == 1)
		printf("The sub string is present.\n");
	else
		printf("The sub string is not present.\n");
}

