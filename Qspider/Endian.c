#include<stdio.h>
void main()
{
	int i=1;
	char *p=(char *)&i;
	if(*p)
		printf("Little Endian\n");
	else
		printf("Big Endian\n");
}
