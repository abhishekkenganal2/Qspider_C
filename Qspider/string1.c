#include<stdio.h>
void main()
{
	int c,c1;
	char str1[20],str2[20],i,j;
	printf("enter the string1 and string2:");
	scanf("%s,%s",str1,str2);
	for(i=0;str1[i]!='\0';++i)
	{
		c++;
	}
	printf("The length of the string1 is %d\n",c);
	for(j=0;str2[j]!='\0';++j)
	{
		c1++;
	}
	printf("the lenght  of string2 is %d\n",c1);
	for(j=0;str2[j]!='\0';++j,++i)
	{
		str1[i]=str2[j];
	}
	str1[i]='\0';
	printf("the concatineted string is:%s\n",str1);
	printf("the lenght of string is:%d\n",c+c1);
}
	
