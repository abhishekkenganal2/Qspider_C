#include<stdio.h>
#include<stdlib.h>

int a[10],n,pos,i,new_item,ch;

void create()
{
	printf("enter the size of array\n");
	scanf("%d",&n);
	printf("enter the array elements\n");
	for(i=0;i<=n;i++)
	{
		scanf("%d ",&a[i]);
		
	}
}
void display()
{
	printf("the content of the array is\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
}
void insert()
{
	printf("enter the pos to enter new element\n");
	scanf("%d",&pos);
	printf("enter the new element\n");
	scanf("%d",&new_item);
	for(i=n-1;i>=pos;i--)
	{
		a[i+1] = a[i];
	}
	a[pos] = new_item;
	n=n+1;
	printf("the new array is\n");
	for(i=0;i<n;i++)
		printf("%d\n",a[i]);
}
void delete()
{
	printf("enter the postion to be delete an element\n");
	scanf("%d",&pos);
	for(i=pos;i<n;i++)
	{
		a[i] = a[i+1];
	}
	n = n-1;
	printf("the new array is\n");
	for(i=0;i<n;i++)
		printf("%d\n",a[i]);
}
void main()
{
	int ch,p = 1,ele;
	while(p == 1)
	{
		printf("1:create 2:display 3:insert 4:delete 5:Exit\n");
		printf("enter your choice\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: create();
			break;
			case 2: display();
			break;
			case 3: printf("enter the element to be inserted\n");
				scanf("%d",&ele);
				insert(ele);
			break;
			case 4: delete();
			break;
			case 5:exit(0);
			default: printf("invalide choice\n");
				p = 0;
			break;
		}
	}
}

