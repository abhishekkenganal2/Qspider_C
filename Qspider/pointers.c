#include<stdio.h>
void main()
{
	int a[] = { 1.1,2.2,3.3,4.4,5.5};
	int *p, *q, i;
	p = q = a;
	for(i=0;i < 5;i++)
	{
		printf("%d\t",*q);
		q++;
	}
	printf("\n");
	for(i=0;i < 5;i++)
	{
		printf("%d\t",*p);
		p++;
	}
}
